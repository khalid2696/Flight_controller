/* Generated code for Python source for module 'serialportsExample'
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

/* The _module_serialportsExample is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serialportsExample;
PyDictObject *moduledict_serialportsExample;

/* The module constants used, if any. */
static PyObject *const_tuple_str_plain_cygwin_tuple;
extern PyObject *const_int_pos_256;
static PyObject *const_str_plain_glob;
static PyObject *const_str_digest_eda42c17b8b01e2b88b12311c313da32;
static PyObject *const_tuple_str_plain_win_tuple;
extern PyObject *const_str_plain_serialportsExample;
static PyObject *const_tuple_str_plain_darwin_tuple;
extern PyObject *const_str_plain_ports;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_digest_3cd7008eb7e45c8870f46c6008d909cf_tuple;
static PyObject *const_tuple_str_plain_linux_tuple;
extern PyObject *const_str_plain_startswith;
static PyObject *const_str_digest_3cd7008eb7e45c8870f46c6008d909cf;
extern PyObject *const_str_plain_darwin;
extern PyObject *const_str_plain_serial;
static PyObject *const_tuple_str_digest_55b78e65c9eb4d598f40ddde35e4b207_tuple;
extern PyObject *const_str_plain_SerialException;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_platform;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_Serial;
static PyObject *const_str_digest_f739384d2cc9d9846afc7191fe283acf;
static PyObject *const_str_plain_win;
static PyObject *const_str_plain_result;
static PyObject *const_str_digest_55b78e65c9eb4d598f40ddde35e4b207;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_serial_ports;
static PyObject *const_str_digest_02a542f06214c7e3f8a7ecf1aefabe4c;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_cygwin;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_close;
static PyObject *const_tuple_3b579184c8d5da8c2e06fc3b2376d529_tuple;
extern PyObject *const_str_plain_linux;
static PyObject *const_str_digest_27e0f4aed058ea951ac3f35d63f15231;
extern PyObject *const_str_plain_s;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_cygwin_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cygwin_tuple, 0, const_str_plain_cygwin ); Py_INCREF( const_str_plain_cygwin );
    const_str_plain_glob = UNSTREAM_STRING( &constant_bin[ 16851 ], 4, 1 );
    const_str_digest_eda42c17b8b01e2b88b12311c313da32 = UNSTREAM_STRING( &constant_bin[ 16855 ], 5, 0 );
    const_tuple_str_plain_win_tuple = PyTuple_New( 1 );
    const_str_plain_win = UNSTREAM_STRING( &constant_bin[ 2353 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_win_tuple, 0, const_str_plain_win ); Py_INCREF( const_str_plain_win );
    const_tuple_str_plain_darwin_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_darwin_tuple, 0, const_str_plain_darwin ); Py_INCREF( const_str_plain_darwin );
    const_tuple_str_digest_3cd7008eb7e45c8870f46c6008d909cf_tuple = PyTuple_New( 1 );
    const_str_digest_3cd7008eb7e45c8870f46c6008d909cf = UNSTREAM_STRING( &constant_bin[ 16860 ], 17, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3cd7008eb7e45c8870f46c6008d909cf_tuple, 0, const_str_digest_3cd7008eb7e45c8870f46c6008d909cf ); Py_INCREF( const_str_digest_3cd7008eb7e45c8870f46c6008d909cf );
    const_tuple_str_plain_linux_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_linux_tuple, 0, const_str_plain_linux ); Py_INCREF( const_str_plain_linux );
    const_tuple_str_digest_55b78e65c9eb4d598f40ddde35e4b207_tuple = PyTuple_New( 1 );
    const_str_digest_55b78e65c9eb4d598f40ddde35e4b207 = UNSTREAM_STRING( &constant_bin[ 16877 ], 10, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_55b78e65c9eb4d598f40ddde35e4b207_tuple, 0, const_str_digest_55b78e65c9eb4d598f40ddde35e4b207 ); Py_INCREF( const_str_digest_55b78e65c9eb4d598f40ddde35e4b207 );
    const_str_digest_f739384d2cc9d9846afc7191fe283acf = UNSTREAM_STRING( &constant_bin[ 16887 ], 20, 0 );
    const_str_plain_result = UNSTREAM_STRING( &constant_bin[ 13065 ], 6, 1 );
    const_str_digest_02a542f06214c7e3f8a7ecf1aefabe4c = UNSTREAM_STRING( &constant_bin[ 16907 ], 193, 0 );
    const_tuple_3b579184c8d5da8c2e06fc3b2376d529_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_3b579184c8d5da8c2e06fc3b2376d529_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_3b579184c8d5da8c2e06fc3b2376d529_tuple, 1, const_str_plain_ports ); Py_INCREF( const_str_plain_ports );
    PyTuple_SET_ITEM( const_tuple_3b579184c8d5da8c2e06fc3b2376d529_tuple, 2, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_3b579184c8d5da8c2e06fc3b2376d529_tuple, 3, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_3b579184c8d5da8c2e06fc3b2376d529_tuple, 4, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_digest_27e0f4aed058ea951ac3f35d63f15231 = UNSTREAM_STRING( &constant_bin[ 17100 ], 123, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serialportsExample( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9a938af2842ae3d42c833137a4e9fc2d;
static PyCodeObject *codeobj_ed142be12531fe6ee34a6ed5344384ea;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_27e0f4aed058ea951ac3f35d63f15231;
    codeobj_9a938af2842ae3d42c833137a4e9fc2d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serial_ports, 9, const_tuple_3b579184c8d5da8c2e06fc3b2376d529_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ed142be12531fe6ee34a6ed5344384ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serialportsExample, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_serialportsExample$$$function_1_serial_ports(  );


// The module function definitions.
static PyObject *impl_serialportsExample$$$function_1_serial_ports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_i = NULL;
    PyObject *var_ports = NULL;
    PyObject *var_result = NULL;
    PyObject *var_port = NULL;
    PyObject *var_s = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9a938af2842ae3d42c833137a4e9fc2d = NULL;

    struct Nuitka_FrameObject *frame_9a938af2842ae3d42c833137a4e9fc2d;

    char const *type_description;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9a938af2842ae3d42c833137a4e9fc2d, codeobj_9a938af2842ae3d42c833137a4e9fc2d, module_serialportsExample, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_9a938af2842ae3d42c833137a4e9fc2d = cache_frame_9a938af2842ae3d42c833137a4e9fc2d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9a938af2842ae3d42c833137a4e9fc2d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9a938af2842ae3d42c833137a4e9fc2d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 17;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_platform );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame.f_lineno = 17;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_win_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 17;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_range_arg_1 = const_int_pos_256;
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    assert( tmp_iter_arg_1 != NULL );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    assert( tmp_assign_source_2 != NULL );
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "ooooo";
            exception_lineno = 18;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_5;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_left_name_1 = const_str_digest_eda42c17b8b01e2b88b12311c313da32;
    tmp_left_name_2 = var_i;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = const_int_pos_1;
    tmp_right_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description = "ooooo";
        goto try_except_handler_2;
    }
    tmp_append_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description = "ooooo";
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description = "ooooo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serialportsExample$$$function_1_serial_ports );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serialportsExample$$$function_1_serial_ports );
    return NULL;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_ports == NULL );
    var_ports = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 19;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_platform );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame.f_lineno = 19;
    tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_linux_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 19;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    Py_DECREF( tmp_or_left_value_1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 19;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_platform );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame.f_lineno = 19;
    tmp_or_right_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_cygwin_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 19;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "glob" );
        exception_tb = NULL;

        exception_lineno = 21;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame.f_lineno = 21;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_glob, &PyTuple_GET_ITEM( const_tuple_str_digest_3cd7008eb7e45c8870f46c6008d909cf_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ports == NULL );
    var_ports = tmp_assign_source_6;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 22;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_platform );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame.f_lineno = 22;
    tmp_cond_value_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_darwin_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 22;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "glob" );
        exception_tb = NULL;

        exception_lineno = 23;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame.f_lineno = 23;
    tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_glob, &PyTuple_GET_ITEM( const_tuple_str_digest_55b78e65c9eb4d598f40ddde35e4b207_tuple, 0 ) );

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ports == NULL );
    var_ports = tmp_assign_source_7;

    goto branch_end_3;
    branch_no_3:;
    tmp_make_exception_arg_1 = const_str_digest_f739384d2cc9d9846afc7191fe283acf;
    frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_EnvironmentError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 25;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooooo";
    goto frame_exception_exit_1;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    tmp_assign_source_8 = PyList_New( 0 );
    assert( var_result == NULL );
    var_result = tmp_assign_source_8;

    tmp_iter_arg_2 = var_ports;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ports" );
        exception_tb = NULL;

        exception_lineno = 28;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "ooooo";
            exception_lineno = 28;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_port;
        var_port = tmp_assign_source_11;
        Py_INCREF( var_port );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_called_instance_7 == NULL ))
    {
        tmp_called_instance_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 30;
        type_description = "ooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_1 = var_port;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_Serial, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description = "ooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_s;
        var_s = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_called_instance_8 = var_s;

    CHECK_OBJECT( tmp_called_instance_8 );
    frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame.f_lineno = 31;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description = "ooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_9 = var_result;

    CHECK_OBJECT( tmp_called_instance_9 );
    tmp_args_element_name_2 = var_port;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description = "ooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_9a938af2842ae3d42c833137a4e9fc2d );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_9a938af2842ae3d42c833137a4e9fc2d, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_9a938af2842ae3d42c833137a4e9fc2d, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_OSError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_compare_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 33;
        type_description = "ooooo";
        goto try_except_handler_3;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_SerialException );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 33;
        type_description = "ooooo";
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 33;
        type_description = "ooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame) frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "ooooo";
    goto try_except_handler_3;
    branch_no_4:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serialportsExample$$$function_1_serial_ports );
    return NULL;
    // End of try:
    try_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description = "ooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9a938af2842ae3d42c833137a4e9fc2d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9a938af2842ae3d42c833137a4e9fc2d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9a938af2842ae3d42c833137a4e9fc2d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9a938af2842ae3d42c833137a4e9fc2d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9a938af2842ae3d42c833137a4e9fc2d, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_9a938af2842ae3d42c833137a4e9fc2d, type_description ,var_i, var_ports, var_result, var_port, var_s );

    // Release cached frame.
    if ( frame_9a938af2842ae3d42c833137a4e9fc2d == cache_frame_9a938af2842ae3d42c833137a4e9fc2d )
    {
        Py_DECREF( frame_9a938af2842ae3d42c833137a4e9fc2d );
    }
    cache_frame_9a938af2842ae3d42c833137a4e9fc2d = NULL;

    assertFrameObject( frame_9a938af2842ae3d42c833137a4e9fc2d );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_result;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serialportsExample$$$function_1_serial_ports );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_ports );
    var_ports = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_ports );
    var_ports = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serialportsExample$$$function_1_serial_ports );
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



static PyObject *MAKE_FUNCTION_serialportsExample$$$function_1_serial_ports(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serialportsExample$$$function_1_serial_ports,
        const_str_plain_serial_ports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9a938af2842ae3d42c833137a4e9fc2d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serialportsExample,
        const_str_digest_02a542f06214c7e3f8a7ecf1aefabe4c,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serialportsExample =
{
    PyModuleDef_HEAD_INIT,
    "serialportsExample",   /* m_name */
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

MOD_INIT_DECL( serialportsExample )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serialportsExample );
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
    puts("serialportsExample: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serialportsExample: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserialportsExample" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serialportsExample = Py_InitModule4(
        "serialportsExample",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serialportsExample = PyModule_Create( &mdef_serialportsExample );
#endif

    moduledict_serialportsExample = (PyDictObject *)((PyModuleObject *)module_serialportsExample)->md_dict;

    CHECK_OBJECT( module_serialportsExample );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_serialportsExample, module_serialportsExample );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serialportsExample );

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
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    struct Nuitka_FrameObject *frame_ed142be12531fe6ee34a6ed5344384ea;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_27e0f4aed058ea951ac3f35d63f15231;
    UPDATE_STRING_DICT0( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = ((PyModuleObject *)module_serialportsExample)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_3 != NULL );
    UPDATE_STRING_DICT1( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_3 );
    // Frame without reuse.
    frame_ed142be12531fe6ee34a6ed5344384ea = MAKE_MODULE_FRAME( codeobj_ed142be12531fe6ee34a6ed5344384ea, module_serialportsExample );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ed142be12531fe6ee34a6ed5344384ea );
    assert( Py_REFCNT( frame_ed142be12531fe6ee34a6ed5344384ea ) == 2 );

    // Framed code:
    tmp_name_name_2 = const_str_plain_glob;
    tmp_globals_name_2 = ((PyModuleObject *)module_serialportsExample)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    frame_ed142be12531fe6ee34a6ed5344384ea->m_frame.f_lineno = 5;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_glob, tmp_assign_source_4 );
    tmp_name_name_3 = const_str_plain_serial;
    tmp_globals_name_3 = ((PyModuleObject *)module_serialportsExample)->md_dict;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    frame_ed142be12531fe6ee34a6ed5344384ea->m_frame.f_lineno = 6;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_serial, tmp_assign_source_5 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed142be12531fe6ee34a6ed5344384ea );
#endif
    popFrameStack();

    assertFrameObject( frame_ed142be12531fe6ee34a6ed5344384ea );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed142be12531fe6ee34a6ed5344384ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed142be12531fe6ee34a6ed5344384ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed142be12531fe6ee34a6ed5344384ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed142be12531fe6ee34a6ed5344384ea, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_6 = MAKE_FUNCTION_serialportsExample$$$function_1_serial_ports(  );
    UPDATE_STRING_DICT1( moduledict_serialportsExample, (Nuitka_StringObject *)const_str_plain_serial_ports, tmp_assign_source_6 );

    return MOD_RETURN_VALUE( module_serialportsExample );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
