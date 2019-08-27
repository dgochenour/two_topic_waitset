

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

#include "waitset_multi.h"
#include "waitset_multiSupport.h"
#include "ndds/ndds_cpp.h"

#include "ndds/ndds_namespace_cpp.h"

using namespace DDS;

/* Delete all entities */
static int subscriber_shutdown(DomainParticipant *participant)
{
    ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = participant->delete_contained_entities();
        if (retcode != RETCODE_OK) {
            std::cout << "delete_contained_entities error " << retcode 
                    << std::endl;
            status = -1;
        }

        retcode = TheParticipantFactory->delete_participant(participant);
        if (retcode != RETCODE_OK) {
            std::cout << "delete_participant error " << retcode << std::endl;
            status = -1;
        }
    }
    return status;
}

int subscriber_main(int domainId, int sample_count) {

    DomainParticipant *participant = NULL;
    Subscriber *subscriber = NULL;
    Topic *topic_1 = NULL;
    Topic *topic_2 = NULL;
    DataReader *reader_1 = NULL;
    DataReader *reader_2 = NULL;
    ReturnCode_t retcode;
    const char *type_name_1 = NULL;
    const char *type_name_2 = NULL;
    int count = 0;
    Duration_t receive_period = {4,0};
    int status = 0;

    participant = TheParticipantFactory->create_participant(
            domainId, 
            PARTICIPANT_QOS_DEFAULT, 
            NULL /* listener */, 
            STATUS_MASK_NONE);
    if (participant == NULL) {
        std::cout << "create_participant error" << std::endl;
        subscriber_shutdown(participant);
        return -1;
    }

    subscriber = participant->create_subscriber(
            SUBSCRIBER_QOS_DEFAULT, 
            NULL /* listener */, 
            STATUS_MASK_NONE);
    if (subscriber == NULL) {
        std::cout << "create_subscriber error" << std::endl;
        subscriber_shutdown(participant);
        return -1;
    }

    // register the first type we'll be using (my_type_1)
    type_name_1 = my_type_1TypeSupport::get_type_name();
    retcode = my_type_1TypeSupport::register_type(participant, type_name_1);
    if (retcode != RETCODE_OK) {
        std::cout << "register_type error " << retcode << std::endl;
        subscriber_shutdown(participant);
        return -1;
    }
    // register the first type we'll be using (my_type_2)
    type_name_2 = my_type_2TypeSupport::get_type_name();
    retcode = my_type_2TypeSupport::register_type(participant, type_name_2);
    if (retcode != RETCODE_OK) {
        std::cout << "register_type error " << retcode << std::endl;
        subscriber_shutdown(participant);
        return -1;
    }

    // create the first topic
    // note that "topic_name_1" is defined in th IDL
    topic_1 = participant->create_topic(topic_name_1,
                                        type_name_1, 
                                        TOPIC_QOS_DEFAULT, 
                                        NULL /* listener */,
                                        STATUS_MASK_NONE);
    if (topic_1 == NULL) {
        std::cout << "create_topic error" << std::endl;
        subscriber_shutdown(participant);
        return -1;
    }

    // create the second  topic
    // note that "topic_name_2" is defined in th IDL
    topic_2 = participant->create_topic(topic_name_2,
                                        type_name_2, 
                                        TOPIC_QOS_DEFAULT, 
                                        NULL /* listener */,
                                        STATUS_MASK_NONE);
    if (topic_2 == NULL) {
        std::cout << "create_topic error" << std::endl;
        subscriber_shutdown(participant);
        return -1;
    }    

    // create the first DataReader
    reader_1 = subscriber->create_datareader(topic_1, 
                                             DATAREADER_QOS_DEFAULT, 
                                             NULL,
                                             STATUS_MASK_NONE);
    if (reader_1 == NULL) {
        std::cout << "create_datareader error" << std::endl;
        subscriber_shutdown(participant);
        return -1;
    }

    // create the second DataReader
    reader_2 = subscriber->create_datareader(topic_2, 
                                             DATAREADER_QOS_DEFAULT, 
                                             NULL,
                                             STATUS_MASK_NONE);
    if (reader_2 == NULL) {
        std::cout << "create_datareader error" << std::endl;
        subscriber_shutdown(participant);
        return -1;
    }

    // get status condition from reader_1 and set the statuses in which
    // we are interested
    DDSStatusCondition * status_condition_1 = reader_1->get_statuscondition();
    if (status_condition_1 == NULL) {
        std::cout << "Error getting status condition." << std::endl;
        return -1;
    }
    retcode = status_condition_1->set_enabled_statuses(DDS_DATA_AVAILABLE_STATUS);
    if (retcode != DDS_RETCODE_OK) {
        std::cout << "Error setting enabled status" << std::endl;
        return -1;
    }

    // get status condition from reader_2 and set the statuses in which
    // we are interested
    DDSStatusCondition * status_condition_2 = reader_2->get_statuscondition();
    if (status_condition_2 == NULL) {
        std::cout << "Error getting status condition." << std::endl;
        return -1;
    }
    retcode = status_condition_2->set_enabled_statuses(DDS_DATA_AVAILABLE_STATUS);
    if (retcode != DDS_RETCODE_OK) {
        std::cout << "Error setting enabled status" << std::endl;
        return -1;
    }

    // instantiate new waitset, wait_timeout (the amount of time the 
    // wait set will block) and attach the conditions from above
    
    DDSWaitSet * waitset = new DDSWaitSet();
    struct DDS_Duration_t wait_timeout = {1,500000000};
    
    retcode = waitset->attach_condition(status_condition_1);
    if (retcode != DDS_RETCODE_OK) {
        std::cout << "Error attaching condition to waitset." << std::endl;
        return -1;
    }    
    retcode = waitset->attach_condition(status_condition_2);
    if (retcode != DDS_RETCODE_OK) {
        std::cout << "Error attaching condition to waitset." << std::endl;
        return -1;
    } 

    // narrow the first DR
    my_type_1DataReader *my_type_1_reader = my_type_1DataReader::narrow(reader_1);
    if (my_type_1_reader == NULL) {
        std::cout << "DataReader narrow error" << std::endl;
        return -1;
    } 

    // narrow the second DR
    my_type_2DataReader *my_type_2_reader = my_type_2DataReader::narrow(reader_2);
    if (my_type_2_reader == NULL) {
        std::cout << "DataReader narrow error" << std::endl;
        return -1;
    } 

    //  Main loop 
    for (count=0; (sample_count == 0) || (count < sample_count); ++count) {
        DDSConditionSeq active_conditions_seq;

        retcode = waitset->wait(active_conditions_seq, wait_timeout);
        // We timeout if no conditions were triggered
        if (retcode == DDS_RETCODE_TIMEOUT) {
            std::cout << "DEBUG: wait() timed out, no conditions were triggered" 
                    << std::endl;
            continue;
        } else if (retcode != DDS_RETCODE_OK) {
            std::cout << "DEBUG: wait() returned error: " << retcode 
                    << std::endl;
            break;
        }

        // Get the number of active conditions
        int active_conditions = active_conditions_seq.length();
        std::cout << "DEBUG: Got " << active_conditions << " active conditions" 
                << std::endl;

        for (int i = 0; i < active_conditions; ++i) {
            
            // Compare with Status Conditions
            if (active_conditions_seq[i] == status_condition_1) {

                // Get the status changes so we can check which status
                // condition triggered.
                DDS_StatusMask triggeredmask =
                        my_type_1_reader->get_status_changes();
  
                if (triggeredmask & DDS_DATA_AVAILABLE_STATUS) {
                    // Current conditions match our conditions to read data, so
                    // we can read data just like we would do in any other
                    // example.
                    my_type_1Seq data_seq;
                    DDS_SampleInfoSeq info_seq;

                    // Access data using read(), take(), etc.  If you fail to do 
                    // this the condition will remain true, and the WaitSet will
                    // wake up immediately - causing high CPU usage when it does 
                    // not sleep in the loop 
                    retcode = DDS_RETCODE_OK;
                    while (retcode != DDS_RETCODE_NO_DATA) {
                        retcode = my_type_1_reader->take(
                                data_seq, 
                                info_seq, 
                                DDS_LENGTH_UNLIMITED,
                                DDS_ANY_SAMPLE_STATE, 
                                DDS_ANY_VIEW_STATE,
                                DDS_ANY_INSTANCE_STATE);
                    
                        for (int j = 0; j < data_seq.length(); ++j) {
                            if (!info_seq[j].valid_data) {
                                std::cout << "Got metadata" << std::endl;
                                continue;
                            }
                            std::cout << ">>> my_type_1 READ:" << std::endl;
                            my_type_1TypeSupport::print_data(&data_seq[j]);
                        }
                        // Return the loaned data 
                        my_type_1_reader->return_loan(data_seq, info_seq);
                    }
                }

            } else if (active_conditions_seq[i] == status_condition_2) {

                // Get the status changes so we can check which status
                // condition triggered.
                DDS_StatusMask triggeredmask =
                        my_type_2_reader->get_status_changes();
  
                if (triggeredmask & DDS_DATA_AVAILABLE_STATUS) {
                    // Current conditions match our conditions to read data, so
                    // we can read data just like we would do in any other
                    // example.
                    my_type_2Seq data_seq;
                    DDS_SampleInfoSeq info_seq;

                    // Access data using read(), take(), etc.  If you fail to do 
                    // this the condition will remain true, and the WaitSet will
                    // wake up immediately - causing high CPU usage when it does 
                    // not sleep in the loop 
                    retcode = DDS_RETCODE_OK;
                    while (retcode != DDS_RETCODE_NO_DATA) {
                        retcode = my_type_2_reader->take(
                                data_seq, 
                                info_seq, 
                                DDS_LENGTH_UNLIMITED,
                                DDS_ANY_SAMPLE_STATE, 
                                DDS_ANY_VIEW_STATE,
                                DDS_ANY_INSTANCE_STATE);
                    
                        for (int j = 0; j < data_seq.length(); ++j) {
                            if (!info_seq[j].valid_data) {
                                std::cout << "Got metadata" << std::endl;
                                continue;
                            }
                            std::cout << ">>> my_type_2 READ:" << std::endl;
                            my_type_2TypeSupport::print_data(&data_seq[j]);
                        }
                        // Return the loaned data 
                        my_type_2_reader->return_loan(data_seq, info_seq);
                    }
                }
            }
        }
    }

    /* Delete all entities */
    status = subscriber_shutdown(participant);

    return status;
}

int main(int argc, char *argv[])
{
    int domainId = 0;
    int sample_count = 0; /* infinite loop */

    if (argc >= 2) {
        domainId = atoi(argv[1]);
    }
    if (argc >= 3) {
        sample_count = atoi(argv[2]);
    }

    return subscriber_main(domainId, sample_count);
}

