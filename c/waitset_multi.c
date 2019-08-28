

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from waitset_multi.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "waitset_multi.h"

#ifndef NDDS_STANDALONE_TYPE
#include "waitset_multiPlugin.h"
#endif

/* ========================================================================= */
const char *my_type_1TYPENAME = "my_type_1";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* my_type_1_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member my_type_1_g_tc_members[3]=
    {

        {
            (char *)"id",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"value1",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"value2",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode my_type_1_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"my_type_1", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            my_type_1_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for my_type_1*/

    if (is_initialized) {
        return &my_type_1_g_tc;
    }

    my_type_1_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    my_type_1_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    my_type_1_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    my_type_1_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    /* Initialize the values for member annotations. */
    my_type_1_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    my_type_1_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
    my_type_1_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    my_type_1_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    my_type_1_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    my_type_1_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    my_type_1_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    my_type_1_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
    my_type_1_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    my_type_1_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    my_type_1_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    my_type_1_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    my_type_1_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    my_type_1_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    my_type_1_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    my_type_1_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    my_type_1_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    my_type_1_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    my_type_1_g_tc._data._sampleAccessInfo =
    my_type_1_get_sample_access_info();
    my_type_1_g_tc._data._typePlugin =
    my_type_1_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &my_type_1_g_tc;
}

RTIXCdrSampleAccessInfo *my_type_1_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo my_type_1_g_memberAccessInfos[3] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo my_type_1_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &my_type_1_g_sampleAccessInfo;
    }

    my_type_1_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((my_type_1 *)NULL)->id);

    my_type_1_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((my_type_1 *)NULL)->value1);

    my_type_1_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((my_type_1 *)NULL)->value2);

    my_type_1_g_sampleAccessInfo.memberAccessInfos = 
    my_type_1_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(my_type_1);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            my_type_1_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            my_type_1_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    my_type_1_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &my_type_1_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *my_type_1_get_type_plugin_info()
{
    static RTIXCdrTypePlugin my_type_1_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        my_type_1_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        my_type_1_finalize_w_return,
        NULL
    };

    return &my_type_1_g_typePlugin;
}
#endif

RTIBool my_type_1_initialize(
    my_type_1* sample) {
    return my_type_1_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool my_type_1_initialize_ex(
    my_type_1* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return my_type_1_initialize_w_params(
        sample,&allocParams);

}

RTIBool my_type_1_initialize_w_params(
    my_type_1* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->id = 0;

    sample->value1 = 0.0;

    sample->value2 = 0.0;

    return RTI_TRUE;
}

RTIBool my_type_1_finalize_w_return(
    my_type_1* sample)
{
    my_type_1_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void my_type_1_finalize(
    my_type_1* sample)
{

    my_type_1_finalize_ex(sample,RTI_TRUE);
}

void my_type_1_finalize_ex(
    my_type_1* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    my_type_1_finalize_w_params(
        sample,&deallocParams);
}

void my_type_1_finalize_w_params(
    my_type_1* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void my_type_1_finalize_optional_members(
    my_type_1* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool my_type_1_copy(
    my_type_1* dst,
    const my_type_1* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyLong (
        &dst->id, &src->id)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->value1, &src->value1)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->value2, &src->value2)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'my_type_1' sequence class.
*/
#define T my_type_1
#define TSeq my_type_1Seq

#define T_initialize_w_params my_type_1_initialize_w_params

#define T_finalize_w_params   my_type_1_finalize_w_params
#define T_copy       my_type_1_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *my_type_2TYPENAME = "my_type_2";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* my_type_2_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode my_type_2_g_tc_name_string = DDS_INITIALIZE_STRING_TYPECODE((64));

    static DDS_TypeCode_Member my_type_2_g_tc_members[4]=
    {

        {
            (char *)"id",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"name",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"condition1",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"condition2",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode my_type_2_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"my_type_2", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            my_type_2_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for my_type_2*/

    if (is_initialized) {
        return &my_type_2_g_tc;
    }

    my_type_2_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    my_type_2_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    my_type_2_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&my_type_2_g_tc_name_string;
    my_type_2_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    my_type_2_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    /* Initialize the values for member annotations. */
    my_type_2_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    my_type_2_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
    my_type_2_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    my_type_2_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    my_type_2_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    my_type_2_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    my_type_2_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    my_type_2_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    my_type_2_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    my_type_2_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

    my_type_2_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    my_type_2_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;

    my_type_2_g_tc._data._sampleAccessInfo =
    my_type_2_get_sample_access_info();
    my_type_2_g_tc._data._typePlugin =
    my_type_2_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &my_type_2_g_tc;
}

RTIXCdrSampleAccessInfo *my_type_2_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo my_type_2_g_memberAccessInfos[4] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo my_type_2_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &my_type_2_g_sampleAccessInfo;
    }

    my_type_2_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((my_type_2 *)NULL)->id);

    my_type_2_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((my_type_2 *)NULL)->name);

    my_type_2_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((my_type_2 *)NULL)->condition1);

    my_type_2_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((my_type_2 *)NULL)->condition2);

    my_type_2_g_sampleAccessInfo.memberAccessInfos = 
    my_type_2_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(my_type_2);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            my_type_2_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            my_type_2_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    my_type_2_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &my_type_2_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *my_type_2_get_type_plugin_info()
{
    static RTIXCdrTypePlugin my_type_2_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        my_type_2_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        my_type_2_finalize_w_return,
        NULL
    };

    return &my_type_2_g_typePlugin;
}
#endif

RTIBool my_type_2_initialize(
    my_type_2* sample) {
    return my_type_2_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool my_type_2_initialize_ex(
    my_type_2* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return my_type_2_initialize_w_params(
        sample,&allocParams);

}

RTIBool my_type_2_initialize_w_params(
    my_type_2* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->id = 0;

    if (allocParams->allocate_memory) {
        sample->name = DDS_String_alloc((64));
        RTICdrType_copyStringEx(
            &sample->name,
            "",
            (64),
            RTI_FALSE);
        if (sample->name == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->name != NULL) {
            RTICdrType_copyStringEx(
                &sample->name,
                "",
                (64),
                RTI_FALSE);
            if (sample->name == NULL) {
                return RTI_FALSE;
            }
        }
    }

    sample->condition1 = 0;

    sample->condition2 = 0;

    return RTI_TRUE;
}

RTIBool my_type_2_finalize_w_return(
    my_type_2* sample)
{
    my_type_2_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void my_type_2_finalize(
    my_type_2* sample)
{

    my_type_2_finalize_ex(sample,RTI_TRUE);
}

void my_type_2_finalize_ex(
    my_type_2* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    my_type_2_finalize_w_params(
        sample,&deallocParams);
}

void my_type_2_finalize_w_params(
    my_type_2* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->name != NULL) {
        DDS_String_free(sample->name);
        sample->name=NULL;

    }

}

void my_type_2_finalize_optional_members(
    my_type_2* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool my_type_2_copy(
    my_type_2* dst,
    const my_type_2* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyLong (
        &dst->id, &src->id)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->name, src->name, 
        (64) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyBoolean (
        &dst->condition1, &src->condition1)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyBoolean (
        &dst->condition2, &src->condition2)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'my_type_2' sequence class.
*/
#define T my_type_2
#define TSeq my_type_2Seq

#define T_initialize_w_params my_type_2_initialize_w_params

#define T_finalize_w_params   my_type_2_finalize_w_params
#define T_copy       my_type_2_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

