

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
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

static const DDS_Char * topic_name_1= "Topic 1";
static const DDS_Char * topic_name_2= "Topic 2";

extern const char *my_type_1TYPENAME;

struct my_type_1Seq;
#ifndef NDDS_STANDALONE_TYPE
class my_type_1TypeSupport;
class my_type_1DataWriter;
class my_type_1DataReader;
#endif

class my_type_1 
{
  public:
    typedef struct my_type_1Seq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef my_type_1TypeSupport TypeSupport;
    typedef my_type_1DataWriter DataWriter;
    typedef my_type_1DataReader DataReader;
    #endif

    DDS_Long   id ;
    DDS_Double   value1 ;
    DDS_Double   value2 ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* my_type_1_get_typecode(void); /* Type code */

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

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *my_type_2TYPENAME;

struct my_type_2Seq;
#ifndef NDDS_STANDALONE_TYPE
class my_type_2TypeSupport;
class my_type_2DataWriter;
class my_type_2DataReader;
#endif

class my_type_2 
{
  public:
    typedef struct my_type_2Seq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef my_type_2TypeSupport TypeSupport;
    typedef my_type_2DataWriter DataWriter;
    typedef my_type_2DataReader DataReader;
    #endif

    DDS_Long   id ;
    DDS_Char *   name ;
    DDS_Boolean   condition1 ;
    DDS_Boolean   condition2 ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* my_type_2_get_typecode(void); /* Type code */

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

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* waitset_multi */

