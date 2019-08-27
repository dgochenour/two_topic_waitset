#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "waitset_multi.h"
#include "waitset_multiSupport.h"
#include "ndds/ndds_cpp.h"

#include "ndds/ndds_namespace_cpp.h"

using namespace DDS;

// Delete all entities
static int publisher_shutdown(DomainParticipant *participant) {

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
            std::cout << "delete_participant error " << retcode
                    << std::endl;
            status = -1;
        }
    }

    return status;
}

int publisher_main(int domainId, int sample_count)
{
    DomainParticipant *participant = NULL;
    Publisher *publisher = NULL;
    Topic *topic_1 = NULL;
    Topic *topic_2 = NULL;
    DataWriter *writer_1 = NULL;
    DataWriter *writer_2 = NULL;
    my_type_1DataWriter * my_type_1_writer = NULL;
    my_type_1 *instance_1 = NULL;    
    my_type_2DataWriter * my_type_2_writer = NULL;
    my_type_2 *instance_2 = NULL;
    ReturnCode_t retcode;
    InstanceHandle_t instance_handle = HANDLE_NIL;
    const char *type_name_1 = NULL;
    const char *type_name_2 = NULL;
    int count = 0;  
    Duration_t send_period = {4,0};

    participant = TheParticipantFactory->create_participant(
            domainId, 
            PARTICIPANT_QOS_DEFAULT, 
            NULL /* listener */, 
            STATUS_MASK_NONE);
    if (participant == NULL) {
        std::cout << "create_participant error" <<std::endl;
        publisher_shutdown(participant);
        return -1;
    }

    publisher = participant->create_publisher(
            PUBLISHER_QOS_DEFAULT, 
            NULL /* listener */, 
            STATUS_MASK_NONE);
    if (publisher == NULL) {
        std::cout << "create_publisher error" << std::endl;
        publisher_shutdown(participant);
        return -1;
    }

    // register the first type we'll be using (my_type_1)
    type_name_1 = my_type_1TypeSupport::get_type_name();
    retcode = my_type_1TypeSupport::register_type(participant, type_name_1);
    if (retcode != RETCODE_OK) {
        std::cout << "register_type error " << retcode << std::endl;
        publisher_shutdown(participant);
        return -1;
    }
    // register the first type we'll be using (my_type_2)
    type_name_2 = my_type_2TypeSupport::get_type_name();
    retcode = my_type_2TypeSupport::register_type(participant, type_name_2);
    if (retcode != RETCODE_OK) {
        std::cout << "register_type error " << retcode << std::endl;
        publisher_shutdown(participant);
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
        publisher_shutdown(participant);
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
        publisher_shutdown(participant);
        return -1;
    }

    // Create and narrow the DataWriter for my_type_1
    writer_1 = publisher->create_datawriter(
            topic_1, 
            DATAWRITER_QOS_DEFAULT, 
            NULL /* listener */,
            STATUS_MASK_NONE);
    if (writer_1 == NULL) {
        std::cout << "create_datawriter error" << std::endl;
        publisher_shutdown(participant);
        return -1;
    }
    my_type_1_writer = my_type_1DataWriter::narrow(writer_1);
    if (my_type_1_writer == NULL) {
        std::cout << "DataWriter narrow error" << std::endl;
        publisher_shutdown(participant);
        return -1;
    }

    // Create and narrow the DataWriter for my_type_2
    writer_2 = publisher->create_datawriter(
            topic_2, 
            DATAWRITER_QOS_DEFAULT, 
            NULL /* listener */,
            STATUS_MASK_NONE);
    if (writer_2 == NULL) {
        std::cout << "create_datawriter error" << std::endl;
        publisher_shutdown(participant);
        return -1;
    }
    my_type_2_writer = my_type_2DataWriter::narrow(writer_2);
    if (my_type_2_writer == NULL) {
        std::cout << "DataWriter narrow error" << std::endl;
        publisher_shutdown(participant);
        return -1;
    }


    // Create data sample for writing: one for each type
    instance_1 = my_type_1TypeSupport::create_data();
    if (instance_1 == NULL) {
        std::cout << "my_type_1TypeSupport::create_data error" << std::endl;
        publisher_shutdown(participant);
        return -1;
    }
    instance_2 = my_type_2TypeSupport::create_data();
    if (instance_2 == NULL) {
        std::cout << "my_type_2TypeSupport::create_data error" << std::endl;
        publisher_shutdown(participant);
        return -1;
    }

    /* Main loop */
    for (count=0; (sample_count == 0) || (count < sample_count); ++count) {

        printf("Writing samples, count %d\n", count);

        instance_1->id = 100;
        instance_1->value1 = count % 4;     // dummy data
        instance_1->value2 = count % 10;    // dummy data

        instance_2->id = 200;
        instance_2->name = (DDS_Char *)"ABCD";          // dummy data

        retcode = my_type_1_writer->write(*instance_1, instance_handle);
        if (retcode != RETCODE_OK) {
            std::cout << "write error " << retcode << std::endl;
        }
        retcode = my_type_2_writer->write(*instance_2, instance_handle);
        if (retcode != RETCODE_OK) {
            std::cout << "write error " << retcode << std::endl;
        }

        NDDSUtility::sleep(send_period);
    }

    // Delete data sample
    retcode = my_type_1TypeSupport::delete_data(instance_1);
    if (retcode != RETCODE_OK) {
        std::cout << "my_type_1TypeSupport::delete_data error " << retcode
                << std::endl;
    }    
    retcode = my_type_2TypeSupport::delete_data(instance_2);
    if (retcode != RETCODE_OK) {
        std::cout << "my_type_2TypeSupport::delete_data error " << retcode
                << std::endl;
    }

    /* Delete all entities */
    return publisher_shutdown(participant);
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

    return publisher_main(domainId, sample_count);
}

