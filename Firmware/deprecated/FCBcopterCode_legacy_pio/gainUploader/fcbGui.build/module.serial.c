/* Generated code for Python source for module 'serial'
 * created by Nuitka version 0.5.27
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_serial is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial;
PyDictObject *moduledict_serial;

/* The module constants used, if any. */
static PyObject *const_str_plain_protocol;
static PyObject *const_str_plain_do_not_open;
extern PyObject *const_str_plain_Serial;
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_09c3ba9943fb4d8804abcbce4bb26437;
static PyObject *const_str_digest_2da1eec6b2e61e39cf51a4b63005dcfc;
extern PyObject *const_str_digest_33be1aa9452ea1a35db7fc513fc42137;
static PyObject *const_str_plain_package_name;
static PyObject *const_str_digest_771255ec40852c6b303e1d896f3a3ac2;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_VTIMESerial;
static PyObject *const_str_plain_url;
static PyObject *const_list_str_digest_3109ec223bddba5a3ee56be5145e3196_list;
extern PyObject *const_str_plain_PosixPollSerial;
static PyObject *const_str_plain_serial_for_url;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_serial;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_klass;
static PyObject *const_str_plain_posix;
static PyObject *const_str_digest_26b4054632d3988ebc1074dfd77ea34a;
extern PyObject *const_str_plain_os;
static PyObject *const_str_plain_cli;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_handler_module;
static PyObject *const_str_plain_instance;
extern PyObject *const_str_plain_platform;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain___version__;
static PyObject *const_str_digest_6f655091ca4334f936d0089ffb35eec8;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_digest_6dded433d872bd76b78d868be8ac4461;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_VERSION;
static PyObject *const_str_plain_protocol_handler_packages;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_do_not_open_false_tuple;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain_java;
static PyObject *const_str_plain_serial_class_for_url;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_do_open;
static PyObject *const_list_str_digest_771255ec40852c6b303e1d896f3a3ac2_list;
extern PyObject *const_str_plain_lower;
static PyObject *const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple;
static PyObject *const_str_plain_url_lowercase;
static PyObject *const_str_digest_bbb0873ad41046cd0fabe0b761340ccf;
extern PyObject *const_str_digest_754a48779fa33a021f9b94595a1c7603;
static PyObject *const_tuple_4dd2134dac804e32c8f8bc19384431af_tuple;
static PyObject *const_str_plain_module_name;
static PyObject *const_str_plain_importlib;
static PyObject *const_str_digest_3109ec223bddba5a3ee56be5145e3196;
static PyObject *const_tuple_str_digest_a05fa8f67e9c342eb59afe566750507b_int_pos_1_tuple;
extern PyObject *const_str_digest_ca5d450d1c32d53f6bfc010c234e26bd;
extern PyObject *const_str_plain_port;
static PyObject *const_str_plain_import_module;
static PyObject *const_tuple_str_plain_Serial_tuple;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_digest_9ba51f6bdeff944f83e458f9b58790b4;
extern PyObject *const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
extern PyObject *const_str_plain_open;
static PyObject *const_str_digest_a05fa8f67e9c342eb59afe566750507b;
static PyObject *const_str_plain_nt;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_protocol = UNSTREAM_STRING( &constant_bin[ 613 ], 8, 1 );
    const_str_plain_do_not_open = UNSTREAM_STRING( &constant_bin[ 621 ], 11, 1 );
    const_str_digest_09c3ba9943fb4d8804abcbce4bb26437 = UNSTREAM_STRING( &constant_bin[ 632 ], 65, 0 );
    const_str_digest_2da1eec6b2e61e39cf51a4b63005dcfc = UNSTREAM_STRING( &constant_bin[ 697 ], 3, 0 );
    const_str_plain_package_name = UNSTREAM_STRING( &constant_bin[ 700 ], 12, 1 );
    const_str_digest_771255ec40852c6b303e1d896f3a3ac2 = UNSTREAM_STRING( &constant_bin[ 632 ], 53, 0 );
    const_str_plain_url = UNSTREAM_STRING( &constant_bin[ 712 ], 3, 1 );
    const_list_str_digest_3109ec223bddba5a3ee56be5145e3196_list = PyList_New( 1 );
    const_str_digest_3109ec223bddba5a3ee56be5145e3196 = UNSTREAM_STRING( &constant_bin[ 715 ], 17, 0 );
    PyList_SET_ITEM( const_list_str_digest_3109ec223bddba5a3ee56be5145e3196_list, 0, const_str_digest_3109ec223bddba5a3ee56be5145e3196 ); Py_INCREF( const_str_digest_3109ec223bddba5a3ee56be5145e3196 );
    const_str_plain_serial_for_url = UNSTREAM_STRING( &constant_bin[ 732 ], 14, 1 );
    const_str_plain_klass = UNSTREAM_STRING( &constant_bin[ 746 ], 5, 1 );
    const_str_plain_posix = UNSTREAM_STRING( &constant_bin[ 751 ], 5, 1 );
    const_str_digest_26b4054632d3988ebc1074dfd77ea34a = UNSTREAM_STRING( &constant_bin[ 756 ], 59, 0 );
    const_str_plain_cli = UNSTREAM_STRING( &constant_bin[ 815 ], 3, 1 );
    const_str_plain_handler_module = UNSTREAM_STRING( &constant_bin[ 818 ], 14, 1 );
    const_str_plain_instance = UNSTREAM_STRING( &constant_bin[ 832 ], 8, 1 );
    const_str_plain___version__ = UNSTREAM_STRING( &constant_bin[ 840 ], 11, 1 );
    const_str_digest_6f655091ca4334f936d0089ffb35eec8 = UNSTREAM_STRING( &constant_bin[ 851 ], 649, 0 );
    const_str_digest_6dded433d872bd76b78d868be8ac4461 = UNSTREAM_STRING( &constant_bin[ 1500 ], 36, 0 );
    const_str_plain_VERSION = UNSTREAM_STRING( &constant_bin[ 1536 ], 7, 1 );
    const_str_plain_protocol_handler_packages = UNSTREAM_STRING( &constant_bin[ 1200 ], 25, 1 );
    const_tuple_str_plain_do_not_open_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_do_not_open_false_tuple, 0, const_str_plain_do_not_open ); Py_INCREF( const_str_plain_do_not_open );
    PyTuple_SET_ITEM( const_tuple_str_plain_do_not_open_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_plain_java = UNSTREAM_STRING( &constant_bin[ 1543 ], 4, 1 );
    const_str_plain_serial_class_for_url = UNSTREAM_STRING( &constant_bin[ 1547 ], 20, 1 );
    const_str_plain_do_open = UNSTREAM_STRING( &constant_bin[ 1567 ], 7, 1 );
    const_list_str_digest_771255ec40852c6b303e1d896f3a3ac2_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_771255ec40852c6b303e1d896f3a3ac2_list, 0, const_str_digest_771255ec40852c6b303e1d896f3a3ac2 ); Py_INCREF( const_str_digest_771255ec40852c6b303e1d896f3a3ac2 );
    const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 3, const_str_plain_do_open ); Py_INCREF( const_str_plain_do_open );
    PyTuple_SET_ITEM( const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 4, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    const_str_plain_url_lowercase = UNSTREAM_STRING( &constant_bin[ 1574 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 5, const_str_plain_url_lowercase ); Py_INCREF( const_str_plain_url_lowercase );
    PyTuple_SET_ITEM( const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 6, const_str_plain_protocol ); Py_INCREF( const_str_plain_protocol );
    const_str_plain_module_name = UNSTREAM_STRING( &constant_bin[ 1587 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 7, const_str_plain_module_name ); Py_INCREF( const_str_plain_module_name );
    PyTuple_SET_ITEM( const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 8, const_str_plain_package_name ); Py_INCREF( const_str_plain_package_name );
    PyTuple_SET_ITEM( const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 9, const_str_plain_handler_module ); Py_INCREF( const_str_plain_handler_module );
    PyTuple_SET_ITEM( const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 10, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    const_str_digest_bbb0873ad41046cd0fabe0b761340ccf = UNSTREAM_STRING( &constant_bin[ 1598 ], 12, 0 );
    const_tuple_4dd2134dac804e32c8f8bc19384431af_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_4dd2134dac804e32c8f8bc19384431af_tuple, 0, const_str_plain_Serial ); Py_INCREF( const_str_plain_Serial );
    PyTuple_SET_ITEM( const_tuple_4dd2134dac804e32c8f8bc19384431af_tuple, 1, const_str_plain_PosixPollSerial ); Py_INCREF( const_str_plain_PosixPollSerial );
    PyTuple_SET_ITEM( const_tuple_4dd2134dac804e32c8f8bc19384431af_tuple, 2, const_str_plain_VTIMESerial ); Py_INCREF( const_str_plain_VTIMESerial );
    const_str_plain_importlib = UNSTREAM_STRING( &constant_bin[ 1610 ], 9, 1 );
    const_tuple_str_digest_a05fa8f67e9c342eb59afe566750507b_int_pos_1_tuple = PyTuple_New( 2 );
    const_str_digest_a05fa8f67e9c342eb59afe566750507b = UNSTREAM_STRING( &constant_bin[ 1272 ], 3, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a05fa8f67e9c342eb59afe566750507b_int_pos_1_tuple, 0, const_str_digest_a05fa8f67e9c342eb59afe566750507b ); Py_INCREF( const_str_digest_a05fa8f67e9c342eb59afe566750507b );
    PyTuple_SET_ITEM( const_tuple_str_digest_a05fa8f67e9c342eb59afe566750507b_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_plain_import_module = UNSTREAM_STRING( &constant_bin[ 1619 ], 13, 1 );
    const_tuple_str_plain_Serial_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Serial_tuple, 0, const_str_plain_Serial ); Py_INCREF( const_str_plain_Serial );
    const_str_plain_nt = UNSTREAM_STRING( &constant_bin[ 89 ], 2, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_988fb4517a230d5a329ca42ef8ddd922;
static PyCodeObject *codeobj_664b0778318b4fb4727978c3fb96d91d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_09c3ba9943fb4d8804abcbce4bb26437;
    codeobj_988fb4517a230d5a329ca42ef8ddd922 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serial, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_664b0778318b4fb4727978c3fb96d91d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serial_for_url, 41, const_tuple_c3bee401f335a8be66401d0391d4a7d9_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_serial$$$function_1_serial_for_url(  );


// The module function definitions.
static PyObject *impl_serial$$$function_1_serial_for_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_do_open = NULL;
    PyObject *var_klass = NULL;
    PyObject *var_url_lowercase = NULL;
    PyObject *var_protocol = NULL;
    PyObject *var_module_name = NULL;
    PyObject *var_package_name = NULL;
    PyObject *var_handler_module = NULL;
    PyObject *var_instance = NULL;
    PyObject *tmp_for_loop_1__break_indicator = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
    PyObject *tmp_try_except_2__unhandled_indicator = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_664b0778318b4fb4727978c3fb96d91d = NULL;

    struct Nuitka_FrameObject *frame_664b0778318b4fb4727978c3fb96d91d;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_664b0778318b4fb4727978c3fb96d91d, codeobj_664b0778318b4fb4727978c3fb96d91d, module_serial, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_664b0778318b4fb4727978c3fb96d91d = cache_frame_664b0778318b4fb4727978c3fb96d91d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_664b0778318b4fb4727978c3fb96d91d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_664b0778318b4fb4727978c3fb96d91d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = 57;
    tmp_operand_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_do_not_open_false_tuple, 0 ) );

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_do_open == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_do_open = tmp_assign_source_1;

    tmp_assign_source_2 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_Serial );

    if (unlikely( tmp_assign_source_2 == NULL ))
    {
        tmp_assign_source_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Serial );
    }

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Serial" );
        exception_tb = NULL;

        exception_lineno = 59;
        type_description = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    assert( var_klass == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_klass = tmp_assign_source_2;

    tmp_assign_source_3 = Py_True;
    assert( tmp_try_except_2__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_try_except_2__unhandled_indicator = tmp_assign_source_3;

    // Tried code:
    // Tried code:
    tmp_called_instance_2 = par_url;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = 61;
    tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description = "ooooooooooo";
        goto try_except_handler_3;
    }
    assert( var_url_lowercase == NULL );
    var_url_lowercase = tmp_assign_source_4;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_assign_source_5 = Py_False;
    {
        PyObject *old = tmp_try_except_2__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_2__unhandled_indicator = tmp_assign_source_5;
        Py_INCREF( tmp_try_except_2__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_664b0778318b4fb4727978c3fb96d91d );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_664b0778318b4fb4727978c3fb96d91d, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_664b0778318b4fb4727978c3fb96d91d, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "ooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_664b0778318b4fb4727978c3fb96d91d->m_frame) frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "ooooooooooo";
    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$$$function_1_serial_for_url );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_2__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_compare_left_3 = const_str_digest_a05fa8f67e9c342eb59afe566750507b;
    tmp_compare_right_3 = var_url_lowercase;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "url_lowercase" );
        exception_tb = NULL;

        exception_lineno = 67;
        type_description = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_instance_3 = var_url_lowercase;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "url_lowercase" );
        exception_tb = NULL;

        exception_lineno = 68;
        type_description = "ooooooooooo";
        goto try_except_handler_2;
    }

    frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = 68;
    tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_digest_a05fa8f67e9c342eb59afe566750507b_int_pos_1_tuple, 0 ) );

    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description = "ooooooooooo";
        goto try_except_handler_2;
    }
    assert( var_protocol == NULL );
    var_protocol = tmp_assign_source_6;

    tmp_called_instance_4 = const_str_digest_bbb0873ad41046cd0fabe0b761340ccf;
    tmp_args_element_name_1 = var_protocol;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_format, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "ooooooooooo";
        goto try_except_handler_2;
    }
    assert( var_module_name == NULL );
    var_module_name = tmp_assign_source_7;

    tmp_assign_source_8 = Py_False;
    assert( tmp_for_loop_1__break_indicator == NULL );
    Py_INCREF( tmp_assign_source_8 );
    tmp_for_loop_1__break_indicator = tmp_assign_source_8;

    // Tried code:
    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_protocol_handler_packages );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_protocol_handler_packages );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "protocol_handler_packages" );
        exception_tb = NULL;

        exception_lineno = 70;
        type_description = "ooooooooooo";
        goto try_except_handler_4;
    }

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description = "ooooooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_10 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description = "ooooooooooo";
        exception_lineno = 70;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_4 = exception_keeper_type_2;
    tmp_compare_right_4 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 70;
        type_description = "ooooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_11 = Py_True;
    {
        PyObject *old = tmp_for_loop_1__break_indicator;
        assert( old != NULL );
        tmp_for_loop_1__break_indicator = tmp_assign_source_11;
        Py_INCREF( tmp_for_loop_1__break_indicator );
        Py_DECREF( old );
    }

    Py_DECREF( exception_keeper_type_2 );
    Py_XDECREF( exception_keeper_value_2 );
    Py_XDECREF( exception_keeper_tb_2 );
    goto loop_end_1;
    goto branch_end_4;
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_5;
    branch_end_4:;
    // End of try:
    try_end_2:;
    tmp_assign_source_12 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_package_name;
        var_package_name = tmp_assign_source_12;
        Py_INCREF( var_package_name );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Tried code:
    // Tried code:
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_importlib );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
    }

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "importlib" );
        exception_tb = NULL;

        exception_lineno = 72;
        type_description = "ooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_2 = var_package_name;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_import_module, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description = "ooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_importlib );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "importlib" );
        exception_tb = NULL;

        exception_lineno = 73;
        type_description = "ooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_3 = var_module_name;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = var_package_name;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_13 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_import_module, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "ooooooooooo";
        goto try_except_handler_8;
    }
    assert( var_handler_module == NULL );
    var_handler_module = tmp_assign_source_13;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_assign_source_14 = Py_False;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_14 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_14;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_664b0778318b4fb4727978c3fb96d91d );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_664b0778318b4fb4727978c3fb96d91d, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_664b0778318b4fb4727978c3fb96d91d, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_5 = PyThreadState_GET()->exc_type;
    tmp_compare_right_5 = PyExc_ImportError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description = "ooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    goto try_continue_handler_7;
    goto branch_end_5;
    branch_no_5:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_664b0778318b4fb4727978c3fb96d91d->m_frame) frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "ooooooooooo";
    goto try_except_handler_7;
    branch_end_5:;
    // End of try:
    try_end_3:;
    tmp_hasattr_source_1 = var_handler_module;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain_serial_class_for_url;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description = "ooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    // Tried code:
    tmp_called_instance_7 = var_handler_module;

    CHECK_OBJECT( tmp_called_instance_7 );
    tmp_args_element_name_5 = par_url;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_serial_class_for_url, call_args );
    }

    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description = "ooooooooooo";
        goto try_except_handler_9;
    }
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description = "ooooooooooo";
        goto try_except_handler_9;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_15;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_16 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description = "ooooooooooo";
        exception_lineno = 78;
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_16;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_17 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description = "ooooooooooo";
        exception_lineno = 78;
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_17;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description = "ooooooooooo";
                exception_lineno = 78;
                goto try_except_handler_10;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description = "ooooooooooo";
        exception_lineno = 78;
        goto try_except_handler_10;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_9;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_18 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_18 );
    {
        PyObject *old = par_url;
        assert( old != NULL );
        par_url = tmp_assign_source_18;
        Py_INCREF( par_url );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_19 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_19 );
    {
        PyObject *old = var_klass;
        assert( old != NULL );
        var_klass = tmp_assign_source_19;
        Py_INCREF( var_klass );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_1 = var_handler_module;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Serial );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description = "ooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_klass;
        assert( old != NULL );
        var_klass = tmp_assign_source_20;
        Py_DECREF( old );
    }

    branch_end_6:;
    goto try_break_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$$$function_1_serial_for_url );
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_5;
    // try break handler code:
    try_break_handler_7:;
    goto loop_end_1;
    // try continue handler code:
    try_continue_handler_7:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto loop_start_1;
    // End of try:
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description = "ooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_4;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compare_left_6 = tmp_for_loop_1__break_indicator;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = Py_True;
    tmp_is_2 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if ( tmp_is_2 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_instance_8 = const_str_digest_6dded433d872bd76b78d868be8ac4461;
    tmp_args_element_name_6 = var_protocol;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_make_exception_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_format, call_args );
    }

    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description = "ooooooooooo";
        goto try_except_handler_4;
    }
    frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 83;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooooooooooo";
    goto try_except_handler_4;
    branch_no_7:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__break_indicator );
    tmp_for_loop_1__break_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_2;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__break_indicator );
    Py_DECREF( tmp_for_loop_1__break_indicator );
    tmp_for_loop_1__break_indicator = NULL;

    branch_no_3:;
    branch_no_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_try_except_2__unhandled_indicator );
    tmp_try_except_2__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_2__unhandled_indicator );
    Py_DECREF( tmp_try_except_2__unhandled_indicator );
    tmp_try_except_2__unhandled_indicator = NULL;

    tmp_dircall_arg1_1 = var_klass;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "klass" );
        exception_tb = NULL;

        exception_lineno = 85;
        type_description = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = const_tuple_none_tuple;
    tmp_dircall_arg3_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    tmp_dircall_arg4_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_assign_source_21 = impl___internal__$$$function_1_complex_call_helper_pos_star_list_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_instance == NULL );
    var_instance = tmp_assign_source_21;

    tmp_assattr_name_1 = par_url;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;

        exception_lineno = 86;
        type_description = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = var_instance;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_port, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = var_do_open;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_instance_9 = var_instance;

    CHECK_OBJECT( tmp_called_instance_9 );
    frame_664b0778318b4fb4727978c3fb96d91d->m_frame.f_lineno = 88;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_open );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_664b0778318b4fb4727978c3fb96d91d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_664b0778318b4fb4727978c3fb96d91d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_664b0778318b4fb4727978c3fb96d91d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_664b0778318b4fb4727978c3fb96d91d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_664b0778318b4fb4727978c3fb96d91d, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_664b0778318b4fb4727978c3fb96d91d, type_description ,par_url, par_args, par_kwargs, var_do_open, var_klass, var_url_lowercase, var_protocol, var_module_name, var_package_name, var_handler_module, var_instance );

    // Release cached frame.
    if ( frame_664b0778318b4fb4727978c3fb96d91d == cache_frame_664b0778318b4fb4727978c3fb96d91d )
    {
        Py_DECREF( frame_664b0778318b4fb4727978c3fb96d91d );
    }
    cache_frame_664b0778318b4fb4727978c3fb96d91d = NULL;

    assertFrameObject( frame_664b0778318b4fb4727978c3fb96d91d );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_instance;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$$$function_1_serial_for_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_do_open );
    Py_DECREF( var_do_open );
    var_do_open = NULL;

    Py_XDECREF( var_klass );
    var_klass = NULL;

    Py_XDECREF( var_url_lowercase );
    var_url_lowercase = NULL;

    Py_XDECREF( var_protocol );
    var_protocol = NULL;

    Py_XDECREF( var_module_name );
    var_module_name = NULL;

    Py_XDECREF( var_package_name );
    var_package_name = NULL;

    Py_XDECREF( var_handler_module );
    var_handler_module = NULL;

    CHECK_OBJECT( (PyObject *)var_instance );
    Py_DECREF( var_instance );
    var_instance = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_do_open );
    var_do_open = NULL;

    Py_XDECREF( var_klass );
    var_klass = NULL;

    Py_XDECREF( var_url_lowercase );
    var_url_lowercase = NULL;

    Py_XDECREF( var_protocol );
    var_protocol = NULL;

    Py_XDECREF( var_module_name );
    var_module_name = NULL;

    Py_XDECREF( var_package_name );
    var_package_name = NULL;

    Py_XDECREF( var_handler_module );
    var_handler_module = NULL;

    Py_XDECREF( var_instance );
    var_instance = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$$$function_1_serial_for_url );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_serial$$$function_1_serial_for_url(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$$$function_1_serial_for_url,
        const_str_plain_serial_for_url,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_664b0778318b4fb4727978c3fb96d91d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial,
        const_str_digest_6f655091ca4334f936d0089ffb35eec8,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial =
{
    PyModuleDef_HEAD_INIT,
    "serial",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( serial )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial = Py_InitModule4(
        "serial",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial = PyModule_Create( &mdef_serial );
#endif

    moduledict_serial = (PyDictObject *)((PyModuleObject *)module_serial)->md_dict;

    CHECK_OBJECT( module_serial );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_serial, module_serial );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_star_imported_1;
    struct Nuitka_FrameObject *frame_988fb4517a230d5a329ca42ef8ddd922;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_09c3ba9943fb4d8804abcbce4bb26437;
    UPDATE_STRING_DICT0( moduledict_serial, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_771255ec40852c6b303e1d896f3a3ac2_list );
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = ((PyModuleObject *)module_serial)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_4 != NULL );
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    // Frame without reuse.
    frame_988fb4517a230d5a329ca42ef8ddd922 = MAKE_MODULE_FRAME( codeobj_988fb4517a230d5a329ca42ef8ddd922, module_serial );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_988fb4517a230d5a329ca42ef8ddd922 );
    assert( Py_REFCNT( frame_988fb4517a230d5a329ca42ef8ddd922 ) == 2 );

    // Framed code:
    tmp_name_name_2 = const_str_plain_importlib;
    tmp_globals_name_2 = ((PyModuleObject *)module_serial)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    frame_988fb4517a230d5a329ca42ef8ddd922->m_frame.f_lineno = 11;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_importlib, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
    tmp_globals_name_3 = ((PyModuleObject *)module_serial)->md_dict;
    tmp_locals_name_3 = ((PyModuleObject *)module_serial)->md_dict;
    tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
    frame_988fb4517a230d5a329ca42ef8ddd922->m_frame.f_lineno = 13;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_serial, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = const_str_digest_2da1eec6b2e61e39cf51a4b63005dcfc;
    UPDATE_STRING_DICT0( moduledict_serial, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_2da1eec6b2e61e39cf51a4b63005dcfc;
    UPDATE_STRING_DICT0( moduledict_serial, (Nuitka_StringObject *)const_str_plain_VERSION, tmp_assign_source_7 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_platform );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_cli;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_name_name_4 = const_str_digest_ca5d450d1c32d53f6bfc010c234e26bd;
    tmp_globals_name_4 = ((PyModuleObject *)module_serial)->md_dict;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_Serial_tuple;
    frame_988fb4517a230d5a329ca42ef8ddd922->m_frame.f_lineno = 22;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Serial );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_8 );
    goto branch_end_1;
    branch_no_1:;
    tmp_name_name_5 = const_str_plain_os;
    tmp_globals_name_5 = ((PyModuleObject *)module_serial)->md_dict;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    frame_988fb4517a230d5a329ca42ef8ddd922->m_frame.f_lineno = 24;
    tmp_assign_source_9 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_9 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 26;

        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_nt;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_name_name_6 = const_str_digest_33be1aa9452ea1a35db7fc513fc42137;
    tmp_globals_name_6 = ((PyModuleObject *)module_serial)->md_dict;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_Serial_tuple;
    frame_988fb4517a230d5a329ca42ef8ddd922->m_frame.f_lineno = 27;
    tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Serial );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_10 );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 28;

        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_plain_posix;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_name_name_7 = const_str_digest_754a48779fa33a021f9b94595a1c7603;
    tmp_globals_name_7 = ((PyModuleObject *)module_serial)->md_dict;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_4dd2134dac804e32c8f8bc19384431af_tuple;
    frame_988fb4517a230d5a329ca42ef8ddd922->m_frame.f_lineno = 29;
    tmp_assign_source_11 = IMPORT_MODULE4( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Serial );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_12 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_PosixPollSerial );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_PosixPollSerial, tmp_assign_source_13 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_VTIMESerial );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_VTIMESerial, tmp_assign_source_14 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 30;

        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_str_plain_java;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_name_name_8 = const_str_digest_9ba51f6bdeff944f83e458f9b58790b4;
    tmp_globals_name_8 = ((PyModuleObject *)module_serial)->md_dict;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_Serial_tuple;
    frame_988fb4517a230d5a329ca42ef8ddd922->m_frame.f_lineno = 31;
    tmp_import_name_from_6 = IMPORT_MODULE4( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Serial );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_15 );
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_5 = const_str_digest_26b4054632d3988ebc1074dfd77ea34a;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_format );
    assert( tmp_called_name_1 != NULL );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_name );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    frame_988fb4517a230d5a329ca42ef8ddd922->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    frame_988fb4517a230d5a329ca42ef8ddd922->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 33;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

    goto frame_exception_exit_1;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_988fb4517a230d5a329ca42ef8ddd922 );
#endif
    popFrameStack();

    assertFrameObject( frame_988fb4517a230d5a329ca42ef8ddd922 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_988fb4517a230d5a329ca42ef8ddd922 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_988fb4517a230d5a329ca42ef8ddd922, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_988fb4517a230d5a329ca42ef8ddd922->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_988fb4517a230d5a329ca42ef8ddd922, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_16 = LIST_COPY( const_list_str_digest_3109ec223bddba5a3ee56be5145e3196_list );
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_protocol_handler_packages, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_serial$$$function_1_serial_for_url(  );
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_serial_for_url, tmp_assign_source_17 );

    return MOD_RETURN_VALUE( module_serial );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
