

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from waitset_multi.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef waitset_multiPlugin_797666509_h
#define waitset_multiPlugin_797666509_h

#include "waitset_multi.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct my_type_1
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct my_type_1)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* my_type_1 must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct my_type_1.
*/
typedef  struct my_type_1 my_type_1KeyHolder;

#define my_type_1Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

#define my_type_1Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define my_type_1Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define my_type_1Plugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define my_type_1Plugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define my_type_1Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define my_type_1Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern my_type_1*
my_type_1PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern my_type_1*
my_type_1PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern my_type_1*
my_type_1PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
my_type_1PluginSupport_copy_data(
    my_type_1 *out,
    const my_type_1 *in);

NDDSUSERDllExport extern void 
my_type_1PluginSupport_destroy_data_w_params(
    my_type_1 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
my_type_1PluginSupport_destroy_data_ex(
    my_type_1 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
my_type_1PluginSupport_destroy_data(
    my_type_1 *sample);

NDDSUSERDllExport extern void 
my_type_1PluginSupport_print_data(
    const my_type_1 *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern my_type_1*
my_type_1PluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern my_type_1*
my_type_1PluginSupport_create_key(void);

NDDSUSERDllExport extern void 
my_type_1PluginSupport_destroy_key_ex(
    my_type_1KeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
my_type_1PluginSupport_destroy_key(
    my_type_1KeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
my_type_1Plugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
my_type_1Plugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
my_type_1Plugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
my_type_1Plugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
my_type_1Plugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    my_type_1 *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
my_type_1Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    my_type_1 *out,
    const my_type_1 *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
my_type_1Plugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const my_type_1 *sample); 

NDDSUSERDllExport extern RTIBool
my_type_1Plugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const my_type_1 *sample,
    DDS_DataRepresentationId_t representation);

NDDSUSERDllExport extern RTIBool 
my_type_1Plugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    my_type_1 **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
my_type_1Plugin_deserialize_from_cdr_buffer(
    my_type_1 *sample,
    const char * buffer,
    unsigned int length);    
#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport extern DDS_ReturnCode_t
my_type_1Plugin_data_to_string(
    const my_type_1 *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    
#endif

NDDSUSERDllExport extern unsigned int 
my_type_1Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
my_type_1Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
my_type_1Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
my_type_1Plugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
my_type_1Plugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    my_type_1 ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
my_type_1Plugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    my_type_1KeyHolder *key, 
    const my_type_1 *instance);

NDDSUSERDllExport extern RTIBool 
my_type_1Plugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    my_type_1 *instance, 
    const my_type_1KeyHolder *key);

NDDSUSERDllExport extern RTIBool 
my_type_1Plugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const my_type_1 *instance,
    RTIEncapsulationId encapsulationId);

NDDSUSERDllExport extern RTIBool 
my_type_1Plugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

NDDSUSERDllExport extern
struct RTIXCdrInterpreterPrograms *my_type_1Plugin_get_programs();

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
my_type_1Plugin_new(void);

NDDSUSERDllExport extern void
my_type_1Plugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct my_type_2
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct my_type_2)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* my_type_2 must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct my_type_2.
*/
typedef  struct my_type_2 my_type_2KeyHolder;

#define my_type_2Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

#define my_type_2Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define my_type_2Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define my_type_2Plugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define my_type_2Plugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define my_type_2Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define my_type_2Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern my_type_2*
my_type_2PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern my_type_2*
my_type_2PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern my_type_2*
my_type_2PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
my_type_2PluginSupport_copy_data(
    my_type_2 *out,
    const my_type_2 *in);

NDDSUSERDllExport extern void 
my_type_2PluginSupport_destroy_data_w_params(
    my_type_2 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
my_type_2PluginSupport_destroy_data_ex(
    my_type_2 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
my_type_2PluginSupport_destroy_data(
    my_type_2 *sample);

NDDSUSERDllExport extern void 
my_type_2PluginSupport_print_data(
    const my_type_2 *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern my_type_2*
my_type_2PluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern my_type_2*
my_type_2PluginSupport_create_key(void);

NDDSUSERDllExport extern void 
my_type_2PluginSupport_destroy_key_ex(
    my_type_2KeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
my_type_2PluginSupport_destroy_key(
    my_type_2KeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
my_type_2Plugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
my_type_2Plugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
my_type_2Plugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
my_type_2Plugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
my_type_2Plugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    my_type_2 *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
my_type_2Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    my_type_2 *out,
    const my_type_2 *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
my_type_2Plugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const my_type_2 *sample); 

NDDSUSERDllExport extern RTIBool
my_type_2Plugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const my_type_2 *sample,
    DDS_DataRepresentationId_t representation);

NDDSUSERDllExport extern RTIBool 
my_type_2Plugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    my_type_2 **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
my_type_2Plugin_deserialize_from_cdr_buffer(
    my_type_2 *sample,
    const char * buffer,
    unsigned int length);    
#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport extern DDS_ReturnCode_t
my_type_2Plugin_data_to_string(
    const my_type_2 *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    
#endif

NDDSUSERDllExport extern unsigned int 
my_type_2Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
my_type_2Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
my_type_2Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
my_type_2Plugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
my_type_2Plugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    my_type_2 ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
my_type_2Plugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    my_type_2KeyHolder *key, 
    const my_type_2 *instance);

NDDSUSERDllExport extern RTIBool 
my_type_2Plugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    my_type_2 *instance, 
    const my_type_2KeyHolder *key);

NDDSUSERDllExport extern RTIBool 
my_type_2Plugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const my_type_2 *instance,
    RTIEncapsulationId encapsulationId);

NDDSUSERDllExport extern RTIBool 
my_type_2Plugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

NDDSUSERDllExport extern
struct RTIXCdrInterpreterPrograms *my_type_2Plugin_get_programs();

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
my_type_2Plugin_new(void);

NDDSUSERDllExport extern void
my_type_2Plugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* waitset_multiPlugin_797666509_h */

