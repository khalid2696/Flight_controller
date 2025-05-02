/* Generated code for Python source for module 'serial_Object_handling'
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

/* The _module_serial_Object_handling is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial_Object_handling;
PyDictObject *moduledict_serial_Object_handling;

/* The module constants used, if any. */
static PyObject *const_tuple_str_plain_kd_pitch_float_3_1_tuple;
extern PyObject *const_str_plain_write;
static PyObject *const_tuple_str_plain_1_tuple;
extern PyObject *const_str_plain_params;
static PyObject *const_tuple_str_newline_tuple;
static PyObject *const_tuple_1efe5ec828d19087412a9d9b95d427b7_tuple;
extern PyObject *const_str_plain_kp_yaw;
static PyObject *const_str_plain_1;
static PyObject *const_str_plain_done;
extern PyObject *const_str_plain_active_port;
extern PyObject *const_str_plain_kd_roll;
static PyObject *const_str_plain_OrderedDict;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_ki_roll;
static PyObject *const_tuple_str_plain_kp_yaw_float_10_0_tuple;
static PyObject *const_tuple_str_plain_ki_pitch_float_5_2_tuple;
static PyObject *const_tuple_str_plain_kd_yaw_float_3_1_tuple;
static PyObject *const_str_plain_values;
extern PyObject *const_str_plain_kd_pitch;
static PyObject *const_str_plain_sr;
extern PyObject *const_str_plain_kp_roll;
extern PyObject *const_str_plain_serial;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_kp_roll_float_10_0_tuple;
static PyObject *const_str_plain_dataToWrite;
static PyObject *const_str_digest_064bc2d5ab31e99b26d813b119c1ca08;
static PyObject *const_str_chr_35;
static PyObject *const_tuple_str_plain_ki_roll_float_5_2_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_ki_yaw_float_5_2_tuple;
static PyObject *const_str_digest_031e3960591a22f031f80ceb83131229;
static PyObject *const_tuple_str_plain_OrderedDict_tuple;
static PyObject *const_str_plain_2;
static PyObject *const_float_10_0;
extern PyObject *const_str_plain_ki_pitch;
static PyObject *const_float_5_2;
static PyObject *const_list_b24ab44cb116691d30e9e09946797bb5_list;
extern PyObject *const_str_plain_kp_pitch;
extern PyObject *const_str_plain___file__;
static PyObject *const_float_3_1;
static PyObject *const_dict_d8a3e4fbe75ff4e1b87ced9ee47907b1;
static PyObject *const_str_plain_startByte;
extern PyObject *const_str_plain_Serial;
extern PyObject *const_str_plain_kd_yaw;
static PyObject *const_str_plain_collections;
static PyObject *const_str_plain_writeCommand;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_92a28ce736f8bf437aed3dc431919b16;
extern PyObject *const_str_plain_ki_yaw;
extern PyObject *const_str_plain_serial_Object_handling;
extern PyObject *const_str_plain_n;
extern PyObject *const_int_pos_57600;
extern PyObject *const_str_plain_i;
static PyObject *const_str_newline;
static PyObject *const_tuple_int_pos_2_tuple;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain_close;
static PyObject *const_tuple_str_chr_35_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_kd_roll_float_3_1_tuple;
static PyObject *const_tuple_str_plain_kp_pitch_float_10_0_tuple;
extern PyObject *const_str_plain_transmit_Data;
extern PyObject *const_str_plain_port;
static PyObject *const_str_plain_serialWriter;
static PyObject *const_tuple_str_plain_n_str_plain_dataToWrite_str_plain_i_str_plain_port_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_kd_pitch_float_3_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kd_pitch_float_3_1_tuple, 0, const_str_plain_kd_pitch ); Py_INCREF( const_str_plain_kd_pitch );
    const_float_3_1 = UNSTREAM_FLOAT( &constant_bin[ 16584 ] );
    PyTuple_SET_ITEM( const_tuple_str_plain_kd_pitch_float_3_1_tuple, 1, const_float_3_1 ); Py_INCREF( const_float_3_1 );
    const_tuple_str_plain_1_tuple = PyTuple_New( 1 );
    const_str_plain_1 = UNSTREAM_CHAR( 49, 0 );
    PyTuple_SET_ITEM( const_tuple_str_plain_1_tuple, 0, const_str_plain_1 ); Py_INCREF( const_str_plain_1 );
    const_tuple_str_newline_tuple = PyTuple_New( 1 );
    const_str_newline = UNSTREAM_CHAR( 10, 0 );
    PyTuple_SET_ITEM( const_tuple_str_newline_tuple, 0, const_str_newline ); Py_INCREF( const_str_newline );
    const_tuple_1efe5ec828d19087412a9d9b95d427b7_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_1efe5ec828d19087412a9d9b95d427b7_tuple, 0, const_str_plain_active_port ); Py_INCREF( const_str_plain_active_port );
    const_str_plain_sr = UNSTREAM_STRING( &constant_bin[ 1857 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_1efe5ec828d19087412a9d9b95d427b7_tuple, 1, const_str_plain_sr ); Py_INCREF( const_str_plain_sr );
    PyTuple_SET_ITEM( const_tuple_1efe5ec828d19087412a9d9b95d427b7_tuple, 2, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_1efe5ec828d19087412a9d9b95d427b7_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_serialWriter = UNSTREAM_STRING( &constant_bin[ 16592 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_1efe5ec828d19087412a9d9b95d427b7_tuple, 4, const_str_plain_serialWriter ); Py_INCREF( const_str_plain_serialWriter );
    const_str_plain_startByte = UNSTREAM_STRING( &constant_bin[ 16604 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_1efe5ec828d19087412a9d9b95d427b7_tuple, 5, const_str_plain_startByte ); Py_INCREF( const_str_plain_startByte );
    const_str_plain_writeCommand = UNSTREAM_STRING( &constant_bin[ 16613 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_1efe5ec828d19087412a9d9b95d427b7_tuple, 6, const_str_plain_writeCommand ); Py_INCREF( const_str_plain_writeCommand );
    const_str_plain_done = UNSTREAM_STRING( &constant_bin[ 3525 ], 4, 1 );
    const_str_plain_OrderedDict = UNSTREAM_STRING( &constant_bin[ 16625 ], 11, 1 );
    const_tuple_str_plain_kp_yaw_float_10_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kp_yaw_float_10_0_tuple, 0, const_str_plain_kp_yaw ); Py_INCREF( const_str_plain_kp_yaw );
    const_float_10_0 = UNSTREAM_FLOAT( &constant_bin[ 16636 ] );
    PyTuple_SET_ITEM( const_tuple_str_plain_kp_yaw_float_10_0_tuple, 1, const_float_10_0 ); Py_INCREF( const_float_10_0 );
    const_tuple_str_plain_ki_pitch_float_5_2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ki_pitch_float_5_2_tuple, 0, const_str_plain_ki_pitch ); Py_INCREF( const_str_plain_ki_pitch );
    const_float_5_2 = UNSTREAM_FLOAT( &constant_bin[ 16644 ] );
    PyTuple_SET_ITEM( const_tuple_str_plain_ki_pitch_float_5_2_tuple, 1, const_float_5_2 ); Py_INCREF( const_float_5_2 );
    const_tuple_str_plain_kd_yaw_float_3_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kd_yaw_float_3_1_tuple, 0, const_str_plain_kd_yaw ); Py_INCREF( const_str_plain_kd_yaw );
    PyTuple_SET_ITEM( const_tuple_str_plain_kd_yaw_float_3_1_tuple, 1, const_float_3_1 ); Py_INCREF( const_float_3_1 );
    const_str_plain_values = UNSTREAM_STRING( &constant_bin[ 10492 ], 6, 1 );
    const_tuple_str_plain_kp_roll_float_10_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kp_roll_float_10_0_tuple, 0, const_str_plain_kp_roll ); Py_INCREF( const_str_plain_kp_roll );
    PyTuple_SET_ITEM( const_tuple_str_plain_kp_roll_float_10_0_tuple, 1, const_float_10_0 ); Py_INCREF( const_float_10_0 );
    const_str_plain_dataToWrite = UNSTREAM_STRING( &constant_bin[ 16652 ], 11, 1 );
    const_str_digest_064bc2d5ab31e99b26d813b119c1ca08 = UNSTREAM_STRING( &constant_bin[ 16663 ], 127, 0 );
    const_str_chr_35 = UNSTREAM_CHAR( 35, 0 );
    const_tuple_str_plain_ki_roll_float_5_2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ki_roll_float_5_2_tuple, 0, const_str_plain_ki_roll ); Py_INCREF( const_str_plain_ki_roll );
    PyTuple_SET_ITEM( const_tuple_str_plain_ki_roll_float_5_2_tuple, 1, const_float_5_2 ); Py_INCREF( const_float_5_2 );
    const_tuple_str_plain_ki_yaw_float_5_2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ki_yaw_float_5_2_tuple, 0, const_str_plain_ki_yaw ); Py_INCREF( const_str_plain_ki_yaw );
    PyTuple_SET_ITEM( const_tuple_str_plain_ki_yaw_float_5_2_tuple, 1, const_float_5_2 ); Py_INCREF( const_float_5_2 );
    const_str_digest_031e3960591a22f031f80ceb83131229 = UNSTREAM_STRING( &constant_bin[ 16790 ], 25, 0 );
    const_tuple_str_plain_OrderedDict_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_OrderedDict_tuple, 0, const_str_plain_OrderedDict ); Py_INCREF( const_str_plain_OrderedDict );
    const_str_plain_2 = UNSTREAM_CHAR( 50, 0 );
    const_list_b24ab44cb116691d30e9e09946797bb5_list = PyList_New( 9 );
    const_tuple_str_plain_kp_pitch_float_10_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kp_pitch_float_10_0_tuple, 0, const_str_plain_kp_pitch ); Py_INCREF( const_str_plain_kp_pitch );
    PyTuple_SET_ITEM( const_tuple_str_plain_kp_pitch_float_10_0_tuple, 1, const_float_10_0 ); Py_INCREF( const_float_10_0 );
    PyList_SET_ITEM( const_list_b24ab44cb116691d30e9e09946797bb5_list, 0, const_tuple_str_plain_kp_pitch_float_10_0_tuple ); Py_INCREF( const_tuple_str_plain_kp_pitch_float_10_0_tuple );
    PyList_SET_ITEM( const_list_b24ab44cb116691d30e9e09946797bb5_list, 1, const_tuple_str_plain_ki_pitch_float_5_2_tuple ); Py_INCREF( const_tuple_str_plain_ki_pitch_float_5_2_tuple );
    PyList_SET_ITEM( const_list_b24ab44cb116691d30e9e09946797bb5_list, 2, const_tuple_str_plain_kd_pitch_float_3_1_tuple ); Py_INCREF( const_tuple_str_plain_kd_pitch_float_3_1_tuple );
    PyList_SET_ITEM( const_list_b24ab44cb116691d30e9e09946797bb5_list, 3, const_tuple_str_plain_kp_yaw_float_10_0_tuple ); Py_INCREF( const_tuple_str_plain_kp_yaw_float_10_0_tuple );
    PyList_SET_ITEM( const_list_b24ab44cb116691d30e9e09946797bb5_list, 4, const_tuple_str_plain_ki_yaw_float_5_2_tuple ); Py_INCREF( const_tuple_str_plain_ki_yaw_float_5_2_tuple );
    PyList_SET_ITEM( const_list_b24ab44cb116691d30e9e09946797bb5_list, 5, const_tuple_str_plain_kd_yaw_float_3_1_tuple ); Py_INCREF( const_tuple_str_plain_kd_yaw_float_3_1_tuple );
    PyList_SET_ITEM( const_list_b24ab44cb116691d30e9e09946797bb5_list, 6, const_tuple_str_plain_kp_roll_float_10_0_tuple ); Py_INCREF( const_tuple_str_plain_kp_roll_float_10_0_tuple );
    PyList_SET_ITEM( const_list_b24ab44cb116691d30e9e09946797bb5_list, 7, const_tuple_str_plain_ki_roll_float_5_2_tuple ); Py_INCREF( const_tuple_str_plain_ki_roll_float_5_2_tuple );
    const_tuple_str_plain_kd_roll_float_3_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kd_roll_float_3_1_tuple, 0, const_str_plain_kd_roll ); Py_INCREF( const_str_plain_kd_roll );
    PyTuple_SET_ITEM( const_tuple_str_plain_kd_roll_float_3_1_tuple, 1, const_float_3_1 ); Py_INCREF( const_float_3_1 );
    PyList_SET_ITEM( const_list_b24ab44cb116691d30e9e09946797bb5_list, 8, const_tuple_str_plain_kd_roll_float_3_1_tuple ); Py_INCREF( const_tuple_str_plain_kd_roll_float_3_1_tuple );
    const_dict_d8a3e4fbe75ff4e1b87ced9ee47907b1 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d8a3e4fbe75ff4e1b87ced9ee47907b1, const_str_plain_timeout, const_int_pos_2 );
    assert( PyDict_Size( const_dict_d8a3e4fbe75ff4e1b87ced9ee47907b1 ) == 1 );
    const_str_plain_collections = UNSTREAM_STRING( &constant_bin[ 16815 ], 11, 1 );
    const_str_digest_92a28ce736f8bf437aed3dc431919b16 = UNSTREAM_STRING( &constant_bin[ 16826 ], 25, 0 );
    const_tuple_int_pos_2_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_tuple, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_tuple_str_chr_35_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_35_tuple, 0, const_str_chr_35 ); Py_INCREF( const_str_chr_35 );
    const_tuple_str_plain_n_str_plain_dataToWrite_str_plain_i_str_plain_port_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_dataToWrite_str_plain_i_str_plain_port_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_dataToWrite_str_plain_i_str_plain_port_tuple, 1, const_str_plain_dataToWrite ); Py_INCREF( const_str_plain_dataToWrite );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_dataToWrite_str_plain_i_str_plain_port_tuple, 2, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_dataToWrite_str_plain_i_str_plain_port_tuple, 3, const_str_plain_port ); Py_INCREF( const_str_plain_port );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial_Object_handling( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_98a56fae192d6972a132b2a553c735f7;
static PyCodeObject *codeobj_5723d473ba57a38a34ec7216a9ca5f7c;
static PyCodeObject *codeobj_6db7fbec3d55bc317454b3fa4b87b431;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_064bc2d5ab31e99b26d813b119c1ca08;
    codeobj_98a56fae192d6972a132b2a553c735f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serialWriter, 32, const_tuple_str_plain_n_str_plain_dataToWrite_str_plain_i_str_plain_port_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_5723d473ba57a38a34ec7216a9ca5f7c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serial_Object_handling, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_6db7fbec3d55bc317454b3fa4b87b431 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_transmit_Data, 27, const_tuple_1efe5ec828d19087412a9d9b95d427b7_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_serial_Object_handling$$$function_1_transmit_Data(  );


static PyObject *MAKE_FUNCTION_serial_Object_handling$$$function_1_transmit_Data$$$function_1_serialWriter( struct Nuitka_CellObject *closure_port );


// The module function definitions.
static PyObject *impl_serial_Object_handling$$$function_1_transmit_Data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_active_port = python_pars[ 0 ];
    PyObject *var_sr = NULL;
    struct Nuitka_CellObject *var_port = PyCell_EMPTY();
    PyObject *var_serialWriter = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_print_value;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6db7fbec3d55bc317454b3fa4b87b431 = NULL;

    struct Nuitka_FrameObject *frame_6db7fbec3d55bc317454b3fa4b87b431;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6db7fbec3d55bc317454b3fa4b87b431, codeobj_6db7fbec3d55bc317454b3fa4b87b431, module_serial_Object_handling, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(struct Nuitka_CellObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_6db7fbec3d55bc317454b3fa4b87b431 = cache_frame_6db7fbec3d55bc317454b3fa4b87b431;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6db7fbec3d55bc317454b3fa4b87b431 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6db7fbec3d55bc317454b3fa4b87b431 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_92a28ce736f8bf437aed3dc431919b16;
    tmp_right_name_1 = par_active_port;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_print_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 28;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    tmp_name_name_1 = const_str_plain_serial;
    tmp_globals_name_1 = ((PyModuleObject *)module_serial_Object_handling)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_6db7fbec3d55bc317454b3fa4b87b431->m_frame.f_lineno = 29;
    tmp_assign_source_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    assert( var_sr == NULL );
    var_sr = tmp_assign_source_1;

    tmp_source_name_1 = var_sr;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Serial );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_active_port;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_57600;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_d8a3e4fbe75ff4e1b87ced9ee47907b1 );
    frame_6db7fbec3d55bc317454b3fa4b87b431->m_frame.f_lineno = 30;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_port );
        PyCell_SET( var_port, tmp_assign_source_2 );
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = MAKE_FUNCTION_serial_Object_handling$$$function_1_transmit_Data$$$function_1_serialWriter( var_port );
    assert( var_serialWriter == NULL );
    var_serialWriter = tmp_assign_source_3;

    if ( var_port == NULL )
    {
        tmp_called_instance_1 = NULL;
    }
    else
    {
        tmp_called_instance_1 = PyCell_GET( var_port );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;

        exception_lineno = 40;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }

    frame_6db7fbec3d55bc317454b3fa4b87b431->m_frame.f_lineno = 40;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_chr_35_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( var_port == NULL )
    {
        tmp_called_instance_2 = NULL;
    }
    else
    {
        tmp_called_instance_2 = PyCell_GET( var_port );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;

        exception_lineno = 42;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }

    frame_6db7fbec3d55bc317454b3fa4b87b431->m_frame.f_lineno = 42;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_plain_1_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_2 = var_serialWriter;

    CHECK_OBJECT( tmp_called_name_2 );
    frame_6db7fbec3d55bc317454b3fa4b87b431->m_frame.f_lineno = 44;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( var_port == NULL )
    {
        tmp_called_instance_3 = NULL;
    }
    else
    {
        tmp_called_instance_3 = PyCell_GET( var_port );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;

        exception_lineno = 45;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }

    frame_6db7fbec3d55bc317454b3fa4b87b431->m_frame.f_lineno = 45;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_print_value = const_str_plain_2;
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_str_digest_031e3960591a22f031f80ceb83131229;
    tmp_right_name_2 = par_active_port;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_print_value = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 47;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oocNoNN";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6db7fbec3d55bc317454b3fa4b87b431 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6db7fbec3d55bc317454b3fa4b87b431 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6db7fbec3d55bc317454b3fa4b87b431, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6db7fbec3d55bc317454b3fa4b87b431->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6db7fbec3d55bc317454b3fa4b87b431, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_6db7fbec3d55bc317454b3fa4b87b431, type_description ,par_active_port, var_sr, var_port, NULL, var_serialWriter, NULL, NULL );

    // Release cached frame.
    if ( frame_6db7fbec3d55bc317454b3fa4b87b431 == cache_frame_6db7fbec3d55bc317454b3fa4b87b431 )
    {
        Py_DECREF( frame_6db7fbec3d55bc317454b3fa4b87b431 );
    }
    cache_frame_6db7fbec3d55bc317454b3fa4b87b431 = NULL;

    assertFrameObject( frame_6db7fbec3d55bc317454b3fa4b87b431 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial_Object_handling$$$function_1_transmit_Data );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_active_port );
    Py_DECREF( par_active_port );
    par_active_port = NULL;

    CHECK_OBJECT( (PyObject *)var_sr );
    Py_DECREF( var_sr );
    var_sr = NULL;

    CHECK_OBJECT( (PyObject *)var_port );
    Py_DECREF( var_port );
    var_port = NULL;

    CHECK_OBJECT( (PyObject *)var_serialWriter );
    Py_DECREF( var_serialWriter );
    var_serialWriter = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_active_port );
    Py_DECREF( par_active_port );
    par_active_port = NULL;

    Py_XDECREF( var_sr );
    var_sr = NULL;

    CHECK_OBJECT( (PyObject *)var_port );
    Py_DECREF( var_port );
    var_port = NULL;

    Py_XDECREF( var_serialWriter );
    var_serialWriter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial_Object_handling$$$function_1_transmit_Data );
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


static PyObject *impl_serial_Object_handling$$$function_1_transmit_Data$$$function_1_serialWriter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *var_dataToWrite = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_print_value;
    PyObject *tmp_range2_high_1;
    PyObject *tmp_range2_low_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_98a56fae192d6972a132b2a553c735f7 = NULL;

    struct Nuitka_FrameObject *frame_98a56fae192d6972a132b2a553c735f7;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_98a56fae192d6972a132b2a553c735f7, codeobj_98a56fae192d6972a132b2a553c735f7, module_serial_Object_handling, sizeof(struct Nuitka_CellObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_98a56fae192d6972a132b2a553c735f7 = cache_frame_98a56fae192d6972a132b2a553c735f7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_98a56fae192d6972a132b2a553c735f7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_98a56fae192d6972a132b2a553c735f7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_serial_Object_handling, (Nuitka_StringObject *)const_str_plain_params );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_params );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "params" );
        exception_tb = NULL;

        exception_lineno = 33;
        type_description = "oooc";
        goto frame_exception_exit_1;
    }

    frame_98a56fae192d6972a132b2a553c735f7->m_frame.f_lineno = 33;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_values );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description = "oooc";
        goto frame_exception_exit_1;
    }
    assert( var_dataToWrite == NULL );
    var_dataToWrite = tmp_assign_source_1;

    tmp_range2_low_1 = const_int_0;
    tmp_len_arg_1 = var_dataToWrite;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_range2_high_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range2_high_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description = "oooc";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    Py_DECREF( tmp_range2_high_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description = "oooc";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description = "oooc";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooc";
            exception_lineno = 34;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_4;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = par_n;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 35;
        type_description = "oooc";
        goto try_except_handler_2;
    }

    if ( self->m_closure[0] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "port" );
        exception_tb = NULL;

        exception_lineno = 35;
        type_description = "oooc";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_write );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description = "oooc";
        goto try_except_handler_2;
    }
    tmp_subscribed_name_1 = var_dataToWrite;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = var_i;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_str_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 35;
        type_description = "oooc";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 35;
        type_description = "oooc";
        goto try_except_handler_2;
    }
    frame_98a56fae192d6972a132b2a553c735f7->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description = "oooc";
        goto try_except_handler_2;
    }
    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description = "oooc";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_n;
        par_n = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = par_n;

    CHECK_OBJECT( tmp_left_name_2 );
    if ( self->m_closure[0] == NULL )
    {
        tmp_called_instance_2 = NULL;
    }
    else
    {
        tmp_called_instance_2 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "port" );
        exception_tb = NULL;

        exception_lineno = 36;
        type_description = "oooc";
        goto try_except_handler_2;
    }

    frame_98a56fae192d6972a132b2a553c735f7->m_frame.f_lineno = 36;
    tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_newline_tuple, 0 ) );

    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description = "oooc";
        goto try_except_handler_2;
    }
    tmp_assign_source_6 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description = "oooc";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_n;
        assert( old != NULL );
        par_n = tmp_assign_source_6;
        Py_DECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description = "oooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_print_value = const_str_plain_done;
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description = "oooc";
        goto frame_exception_exit_1;
    }
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description = "oooc";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_98a56fae192d6972a132b2a553c735f7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_98a56fae192d6972a132b2a553c735f7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_98a56fae192d6972a132b2a553c735f7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_98a56fae192d6972a132b2a553c735f7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_98a56fae192d6972a132b2a553c735f7, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_98a56fae192d6972a132b2a553c735f7, type_description ,par_n, var_dataToWrite, var_i, self->m_closure[0] );

    // Release cached frame.
    if ( frame_98a56fae192d6972a132b2a553c735f7 == cache_frame_98a56fae192d6972a132b2a553c735f7 )
    {
        Py_DECREF( frame_98a56fae192d6972a132b2a553c735f7 );
    }
    cache_frame_98a56fae192d6972a132b2a553c735f7 = NULL;

    assertFrameObject( frame_98a56fae192d6972a132b2a553c735f7 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial_Object_handling$$$function_1_transmit_Data$$$function_1_serialWriter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_dataToWrite );
    Py_DECREF( var_dataToWrite );
    var_dataToWrite = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_dataToWrite );
    var_dataToWrite = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial_Object_handling$$$function_1_transmit_Data$$$function_1_serialWriter );
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



static PyObject *MAKE_FUNCTION_serial_Object_handling$$$function_1_transmit_Data(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial_Object_handling$$$function_1_transmit_Data,
        const_str_plain_transmit_Data,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6db7fbec3d55bc317454b3fa4b87b431,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial_Object_handling,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial_Object_handling$$$function_1_transmit_Data$$$function_1_serialWriter( struct Nuitka_CellObject *closure_port )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial_Object_handling$$$function_1_transmit_Data$$$function_1_serialWriter,
        const_str_plain_serialWriter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_98a56fae192d6972a132b2a553c735f7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial_Object_handling,
        Py_None,
        1
    );

result->m_closure[0] = closure_port;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial_Object_handling =
{
    PyModuleDef_HEAD_INIT,
    "serial_Object_handling",   /* m_name */
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

MOD_INIT_DECL( serial_Object_handling )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial_Object_handling );
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
    puts("serial_Object_handling: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial_Object_handling: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial_Object_handling" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial_Object_handling = Py_InitModule4(
        "serial_Object_handling",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial_Object_handling = PyModule_Create( &mdef_serial_Object_handling );
#endif

    moduledict_serial_Object_handling = (PyDictObject *)((PyModuleObject *)module_serial_Object_handling)->md_dict;

    CHECK_OBJECT( module_serial_Object_handling );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_serial_Object_handling, module_serial_Object_handling );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial_Object_handling );

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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_5723d473ba57a38a34ec7216a9ca5f7c;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial_Object_handling, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_064bc2d5ab31e99b26d813b119c1ca08;
    UPDATE_STRING_DICT0( moduledict_serial_Object_handling, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_5723d473ba57a38a34ec7216a9ca5f7c = MAKE_MODULE_FRAME( codeobj_5723d473ba57a38a34ec7216a9ca5f7c, module_serial_Object_handling );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_5723d473ba57a38a34ec7216a9ca5f7c );
    assert( Py_REFCNT( frame_5723d473ba57a38a34ec7216a9ca5f7c ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_collections;
    tmp_globals_name_1 = ((PyModuleObject *)module_serial_Object_handling)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_OrderedDict_tuple;
    frame_5723d473ba57a38a34ec7216a9ca5f7c->m_frame.f_lineno = 12;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_OrderedDict );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial_Object_handling, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_3 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial_Object_handling, (Nuitka_StringObject *)const_str_plain_OrderedDict );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OrderedDict );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "OrderedDict" );
        exception_tb = NULL;

        exception_lineno = 15;

        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LIST_COPY( const_list_b24ab44cb116691d30e9e09946797bb5_list );
    frame_5723d473ba57a38a34ec7216a9ca5f7c->m_frame.f_lineno = 15;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial_Object_handling, (Nuitka_StringObject *)const_str_plain_params, tmp_assign_source_4 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5723d473ba57a38a34ec7216a9ca5f7c );
#endif
    popFrameStack();

    assertFrameObject( frame_5723d473ba57a38a34ec7216a9ca5f7c );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5723d473ba57a38a34ec7216a9ca5f7c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5723d473ba57a38a34ec7216a9ca5f7c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5723d473ba57a38a34ec7216a9ca5f7c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5723d473ba57a38a34ec7216a9ca5f7c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_5 = MAKE_FUNCTION_serial_Object_handling$$$function_1_transmit_Data(  );
    UPDATE_STRING_DICT1( moduledict_serial_Object_handling, (Nuitka_StringObject *)const_str_plain_transmit_Data, tmp_assign_source_5 );

    return MOD_RETURN_VALUE( module_serial_Object_handling );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
