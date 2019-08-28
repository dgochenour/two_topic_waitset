

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from waitset_multi.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef waitset_multi_797666509_h
#define waitset_multi_797666509_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#define topic_name_1 ("Topic 1")
#define topic_name_2 ("Topic 2")

extern const char *my_type_1TYPENAME;

typedef struct my_type_1 {

    DDS_Long   id ;
    DDS_Double   value1 ;
    DDS_Double   value2 ;

} my_type_1 ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* my_type_1_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *my_type_1_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *my_type_1_get_sample_access_info(void);
#endif

DDS_SEQUENCE(my_type_1Seq, my_type_1);

NDDSUSERDllExport
RTIBool my_type_1_initialize(
    my_type_1* self);

NDDSUSERDllExport
RTIBool my_type_1_initialize_ex(
    my_type_1* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool my_type_1_initialize_w_params(
    my_type_1* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool my_type_1_finalize_w_return(
    my_type_1* self);

NDDSUSERDllExport
void my_type_1_finalize(
    my_type_1* self);

NDDSUSERDllExport
void my_type_1_finalize_ex(
    my_type_1* self,RTIBool deletePointers);

NDDSUSERDllExport
void my_type_1_finalize_w_params(
    my_type_1* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void my_type_1_finalize_optional_members(
    my_type_1* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool my_type_1_copy(
    my_type_1* dst,
    const my_type_1* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *my_type_2TYPENAME;

typedef struct my_type_2 {

    DDS_Long   id ;
    DDS_Char *   name ;
    DDS_Boolean   condition1 ;
    DDS_Boolean   condition2 ;

} my_type_2 ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* my_type_2_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *my_type_2_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *my_type_2_get_sample_access_info(void);
#endif

DDS_SEQUENCE(my_type_2Seq, my_type_2);

NDDSUSERDllExport
RTIBool my_type_2_initialize(
    my_type_2* self);

NDDSUSERDllExport
RTIBool my_type_2_initialize_ex(
    my_type_2* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool my_type_2_initialize_w_params(
    my_type_2* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool my_type_2_finalize_w_return(
    my_type_2* self);

NDDSUSERDllExport
void my_type_2_finalize(
    my_type_2* self);

NDDSUSERDllExport
void my_type_2_finalize_ex(
    my_type_2* self,RTIBool deletePointers);

NDDSUSERDllExport
void my_type_2_finalize_w_params(
    my_type_2* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void my_type_2_finalize_optional_members(
    my_type_2* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool my_type_2_copy(
    my_type_2* dst,
    const my_type_2* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* waitset_multi */

