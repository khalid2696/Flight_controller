/* Generated code for Python source for module 'serial.serialjava'
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

/* The _module_serial$serialjava is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$serialjava;
PyDictObject *moduledict_serial$serialjava;

/* The module constants used, if any. */
static PyObject *const_str_plain__reconfigurePort;
static PyObject *const_str_plain_mod;
extern PyObject *const_str_plain_data;
static PyObject *const_str_plain_disableReceiveTimeout;
static PyObject *const_str_digest_18ffcab9219e00f9e39c11ee220d72ec;
extern PyObject *const_str_plain_reset_input_buffer;
extern PyObject *const_str_digest_bd2e98b142ff21c9f389c674d6946c9a;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_jstopbits;
static PyObject *const_str_digest_fd6499854436c868a15ead683ab7ca35;
static PyObject *const_str_plain_jflowin;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218;
static PyObject *const_str_plain_getInputStream;
extern PyObject *const_str_plain__rts_state;
extern PyObject *const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8;
extern PyObject *const_str_plain_STOPBITS_ONE_POINT_FIVE;
static PyObject *const_str_digest_e314ad64a0eb2cfb4f734059b1596745;
extern PyObject *const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple;
static PyObject *const_str_plain_getPortIdentifiers;
extern PyObject *const_str_plain_read;
static PyObject *const_str_plain_isCTS;
static PyObject *const_str_plain_jdatabits;
static PyObject *const_tuple_str_digest_7d92b9a3fd9230165131735b371b328c_int_pos_10_tuple;
extern PyObject *const_str_plain_in_waiting;
static PyObject *const_str_plain_detect_java_comm;
extern PyObject *const_str_plain__dtr_state;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_cts;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain__stopbits;
static PyObject *const_float_1000_0;
static PyObject *const_str_plain_DATABITS_8;
extern PyObject *const_str_plain_STOPBITS_TWO;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain__port;
static PyObject *const_str_digest_e8af2f0e191b1c5966c75e0c0e11daa6;
static PyObject *const_str_digest_894e60cdbf288c6fc5456ff09bf0409c;
extern PyObject *const_str_plain__baudrate;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain__rtscts;
extern PyObject *const_str_plain_ri;
extern PyObject *const_str_digest_72db89f2656c7536ad3ca9676d132571;
static PyObject *const_str_plain_FLOWCONTROL_RTSCTS_IN;
static PyObject *const_str_plain_jparity;
static PyObject *const_str_plain_serialjava;
extern PyObject *const_str_plain_portNotOpenError;
extern PyObject *const_str_plain_setRTS;
static PyObject *const_tuple_e0616934e29f85c7e0be39aab315204b_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple;
static PyObject *const_str_plain_getPortType;
static PyObject *const_str_plain_el;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_digest_06425a8e1b9d5eab562978eb6eacf777;
extern PyObject *const_str_plain_PARITY_EVEN;
extern PyObject *const_str_plain_ports;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_DATABITS_7;
static PyObject *const_str_plain_getPortIdentifier;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_split;
static PyObject *const_str_digest_eb13749486bdceb9d9c45045106f689c;
extern PyObject *const_str_plain_reset_output_buffer;
static PyObject *const_str_digest_5897a00b5e658aa4dd53db30760bdb06;
extern PyObject *const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc;
static PyObject *const_tuple_int_pos_30_tuple;
static PyObject *const_str_plain_getName;
extern PyObject *const_str_digest_a41f7446b10852b7fa7917c8946aa5e1;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_29554dead93ed87156471f41b2e43532;
extern PyObject *const_str_plain_SerialBase;
extern PyObject *const_str_digest_2b96e25c8d393fdf065d358454fdf25c;
static PyObject *const_tuple_ea03d0a8772479402eb733ff342bed21_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8;
static PyObject *const_str_plain_hasMoreElements;
extern PyObject *const_str_plain_PARITY_SPACE;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_portnumber;
static PyObject *const_str_plain_getOutputStream;
static PyObject *const_str_plain__instream;
extern PyObject *const_str_plain__timeout;
static PyObject *const_str_digest_65e81d7601f8f895a742ef32abea7b4a;
extern PyObject *const_str_plain_dsr;
static PyObject *const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple;
static PyObject *const_str_digest_f98c54fafbe7abdb3afa3affc3debdab;
extern PyObject *const_str_plain__bytesize;
extern PyObject *const_str_digest_c987d57c872daa303d57e57028663dbb;
extern PyObject *const_tuple_float_0_25_tuple;
extern PyObject *const_str_digest_09388aafcb6adb40da642c8223c8e7c5;
extern PyObject *const_str_digest_9ba51f6bdeff944f83e458f9b58790b4;
static PyObject *const_str_plain_isCD;
extern PyObject *const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple;
static PyObject *const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple;
static PyObject *const_str_plain_FLOWCONTROL_XONXOFF_IN;
static PyObject *const_str_plain_enum;
extern PyObject *const_str_plain_Serial;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_str_digest_145bf772d86c3cb38f291d317430df01;
extern PyObject *const_str_dot;
static PyObject *const_str_plain_PORT_SERIAL;
static PyObject *const_str_plain_portId;
static PyObject *const_str_digest_7d92b9a3fd9230165131735b371b328c;
extern PyObject *const_str_plain__xonxoff;
extern PyObject *const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9;
static PyObject *const_str_plain_setFlowControlMode;
extern PyObject *const_str_plain__update_break_state;
extern PyObject *const_str_plain_SEVENBITS;
static PyObject *const_int_pos_30;
static PyObject *const_str_digest_76b328aecf6e0180e1401f2c7b20c24e;
static PyObject *const_list_75856efb0ecca7fbce58d69489689c75_list;
extern PyObject *const_str_plain_STOPBITS_ONE;
static PyObject *const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_isRI;
extern PyObject *const_str_plain_fd;
extern PyObject *const_str_digest_088e326eed737fbd2d5feedf060c96ff;
extern PyObject *const_str_plain_SerialException;
extern PyObject *const_str_plain_SerialPort;
static PyObject *const_str_plain_comm;
static PyObject *const_str_plain_comp;
extern PyObject *const_str_digest_14aa7bed476b499178dd8a4fa54d666e;
static PyObject *const_tuple_type_str_type_bytearray_tuple;
static PyObject *const_tuple_2675dac0bbcd7574844627954a33a65d_tuple;
static PyObject *const_str_plain_FLOWCONTROL_XONXOFF_OUT;
extern PyObject *const_float_0_25;
static PyObject *const_str_plain_skip;
extern PyObject *const_str_plain_SIXBITS;
static PyObject *const_str_plain__outstream;
extern PyObject *const_str_digest_59d8c08c8b321dd488f0cfd9cc30b9cf;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_enableReceiveTimeout;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_isDSR;
extern PyObject *const_str_plain__update_dtr_state;
extern PyObject *const_str_plain_open;
extern PyObject *const_tuple_str_plain_self_str_plain_duration_tuple;
extern PyObject *const_str_plain_flush;
static PyObject *const_str_plain_STOPBITS_1_5;
extern PyObject *const_str_plain_cd;
static PyObject *const_str_digest_56312e9e44f7e28c1876ceb5a373d82d;
extern PyObject *const_str_plain_sendBreak;
static PyObject *const_str_plain_names;
static PyObject *const_str_plain_setSerialPortParams;
extern PyObject *const_str_plain__parity;
static PyObject *const_tuple_str_digest_76b328aecf6e0180e1401f2c7b20c24e_tuple;
extern PyObject *const_str_plain_duration;
static PyObject *const_str_plain_components;
static PyObject *const_str_plain_CommPortIdentifier;
static PyObject *const_str_plain_jflowout;
extern PyObject *const_str_plain_PARITY_MARK;
static PyObject *const_str_digest_496da828bc431dbb4a35a3f004364a79;
extern PyObject *const_str_plain_FIVEBITS;
static PyObject *const_str_plain_DATABITS_5;
static PyObject *const_str_plain_DATABITS_6;
extern PyObject *const_str_plain_send_break;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_PARITY_NONE;
static PyObject *const_str_plain_STOPBITS_1;
static PyObject *const_str_plain_STOPBITS_2;
static PyObject *const_str_plain_nextElement;
extern PyObject *const_str_plain_is_open;
static PyObject *const_str_plain_FLOWCONTROL_RTSCTS_OUT;
extern PyObject *const_str_plain_setDTR;
static PyObject *const_str_plain_sPort;
static PyObject *const_str_digest_6307284dff33304eb571a029dfac7803;
extern PyObject *const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple;
static PyObject *const_str_plain_device;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain__update_rts_state;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_available;
extern PyObject *const_str_digest_67381b97568fd04864d7225afb09d3b9;
extern PyObject *const_int_pos_10;
static PyObject *const_str_plain_my_import;
extern PyObject *const_str_digest_47be6feae340d11ceea1b2be1116c946;
extern PyObject *const_str_plain_EIGHTBITS;
extern PyObject *const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
extern PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
extern PyObject *const_str_plain_PARITY_ODD;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__reconfigurePort = UNSTREAM_STRING( &constant_bin[ 2269 ], 16, 1 );
    const_str_plain_mod = UNSTREAM_STRING( &constant_bin[ 70 ], 3, 1 );
    const_str_plain_disableReceiveTimeout = UNSTREAM_STRING( &constant_bin[ 2285 ], 21, 1 );
    const_str_digest_18ffcab9219e00f9e39c11ee220d72ec = UNSTREAM_STRING( &constant_bin[ 2306 ], 24, 0 );
    const_str_plain_jstopbits = UNSTREAM_STRING( &constant_bin[ 2330 ], 9, 1 );
    const_str_digest_fd6499854436c868a15ead683ab7ca35 = UNSTREAM_STRING( &constant_bin[ 2339 ], 10, 0 );
    const_str_plain_jflowin = UNSTREAM_STRING( &constant_bin[ 2349 ], 7, 1 );
    const_str_plain_getInputStream = UNSTREAM_STRING( &constant_bin[ 2356 ], 14, 1 );
    const_str_digest_e314ad64a0eb2cfb4f734059b1596745 = UNSTREAM_STRING( &constant_bin[ 2370 ], 27, 0 );
    const_str_plain_getPortIdentifiers = UNSTREAM_STRING( &constant_bin[ 2397 ], 18, 1 );
    const_str_plain_isCTS = UNSTREAM_STRING( &constant_bin[ 2415 ], 5, 1 );
    const_str_plain_jdatabits = UNSTREAM_STRING( &constant_bin[ 2420 ], 9, 1 );
    const_tuple_str_digest_7d92b9a3fd9230165131735b371b328c_int_pos_10_tuple = PyTuple_New( 2 );
    const_str_digest_7d92b9a3fd9230165131735b371b328c = UNSTREAM_STRING( &constant_bin[ 2429 ], 20, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7d92b9a3fd9230165131735b371b328c_int_pos_10_tuple, 0, const_str_digest_7d92b9a3fd9230165131735b371b328c ); Py_INCREF( const_str_digest_7d92b9a3fd9230165131735b371b328c );
    PyTuple_SET_ITEM( const_tuple_str_digest_7d92b9a3fd9230165131735b371b328c_int_pos_10_tuple, 1, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    const_str_plain_detect_java_comm = UNSTREAM_STRING( &constant_bin[ 2449 ], 16, 1 );
    const_float_1000_0 = UNSTREAM_FLOAT( &constant_bin[ 2465 ] );
    const_str_plain_DATABITS_8 = UNSTREAM_STRING( &constant_bin[ 2473 ], 10, 1 );
    const_str_digest_e8af2f0e191b1c5966c75e0c0e11daa6 = UNSTREAM_STRING( &constant_bin[ 2483 ], 23, 0 );
    const_str_digest_894e60cdbf288c6fc5456ff09bf0409c = UNSTREAM_STRING( &constant_bin[ 2506 ], 6, 0 );
    const_str_plain_FLOWCONTROL_RTSCTS_IN = UNSTREAM_STRING( &constant_bin[ 2512 ], 21, 1 );
    const_str_plain_jparity = UNSTREAM_STRING( &constant_bin[ 2533 ], 7, 1 );
    const_str_plain_serialjava = UNSTREAM_STRING( &constant_bin[ 2540 ], 10, 1 );
    const_tuple_e0616934e29f85c7e0be39aab315204b_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 1, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 2, const_str_plain_open ); Py_INCREF( const_str_plain_open );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 3, const_str_plain__reconfigurePort ); Py_INCREF( const_str_plain__reconfigurePort );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 4, const_str_plain_close ); Py_INCREF( const_str_plain_close );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 5, const_str_plain_in_waiting ); Py_INCREF( const_str_plain_in_waiting );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 6, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 7, const_str_plain_write ); Py_INCREF( const_str_plain_write );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 8, const_str_plain_reset_input_buffer ); Py_INCREF( const_str_plain_reset_input_buffer );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 9, const_str_plain_reset_output_buffer ); Py_INCREF( const_str_plain_reset_output_buffer );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 10, const_str_plain_send_break ); Py_INCREF( const_str_plain_send_break );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 11, const_str_plain__update_break_state ); Py_INCREF( const_str_plain__update_break_state );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 12, const_str_plain__update_rts_state ); Py_INCREF( const_str_plain__update_rts_state );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 13, const_str_plain__update_dtr_state ); Py_INCREF( const_str_plain__update_dtr_state );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 14, const_str_plain_cts ); Py_INCREF( const_str_plain_cts );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 15, const_str_plain_dsr ); Py_INCREF( const_str_plain_dsr );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 16, const_str_plain_ri ); Py_INCREF( const_str_plain_ri );
    PyTuple_SET_ITEM( const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 17, const_str_plain_cd ); Py_INCREF( const_str_plain_cd );
    const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple, 2, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_getPortType = UNSTREAM_STRING( &constant_bin[ 2550 ], 11, 1 );
    const_str_plain_el = UNSTREAM_STRING( &constant_bin[ 289 ], 2, 1 );
    const_str_plain_DATABITS_7 = UNSTREAM_STRING( &constant_bin[ 2561 ], 10, 1 );
    const_str_plain_getPortIdentifier = UNSTREAM_STRING( &constant_bin[ 2397 ], 17, 1 );
    const_str_digest_eb13749486bdceb9d9c45045106f689c = UNSTREAM_STRING( &constant_bin[ 2571 ], 49, 0 );
    const_str_digest_5897a00b5e658aa4dd53db30760bdb06 = UNSTREAM_STRING( &constant_bin[ 2620 ], 67, 0 );
    const_tuple_int_pos_30_tuple = PyTuple_New( 1 );
    const_int_pos_30 = PyInt_FromLong( 30l );
    PyTuple_SET_ITEM( const_tuple_int_pos_30_tuple, 0, const_int_pos_30 ); Py_INCREF( const_int_pos_30 );
    const_str_plain_getName = UNSTREAM_STRING( &constant_bin[ 2687 ], 7, 1 );
    const_str_digest_29554dead93ed87156471f41b2e43532 = UNSTREAM_STRING( &constant_bin[ 2694 ], 34, 0 );
    const_tuple_ea03d0a8772479402eb733ff342bed21_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ea03d0a8772479402eb733ff342bed21_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_ea03d0a8772479402eb733ff342bed21_tuple, 1, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    const_str_plain_components = UNSTREAM_STRING( &constant_bin[ 2728 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_ea03d0a8772479402eb733ff342bed21_tuple, 2, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    const_str_plain_comp = UNSTREAM_STRING( &constant_bin[ 2728 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_ea03d0a8772479402eb733ff342bed21_tuple, 3, const_str_plain_comp ); Py_INCREF( const_str_plain_comp );
    const_str_plain_hasMoreElements = UNSTREAM_STRING( &constant_bin[ 2738 ], 15, 1 );
    const_str_plain_portnumber = UNSTREAM_STRING( &constant_bin[ 2753 ], 10, 1 );
    const_str_plain_getOutputStream = UNSTREAM_STRING( &constant_bin[ 2763 ], 15, 1 );
    const_str_plain__instream = UNSTREAM_STRING( &constant_bin[ 2778 ], 9, 1 );
    const_str_digest_65e81d7601f8f895a742ef32abea7b4a = UNSTREAM_STRING( &constant_bin[ 2787 ], 136, 0 );
    const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple = PyTuple_New( 3 );
    const_str_plain_names = UNSTREAM_STRING( &constant_bin[ 1138 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple, 0, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple, 2, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    const_str_digest_f98c54fafbe7abdb3afa3affc3debdab = UNSTREAM_STRING( &constant_bin[ 2923 ], 32, 0 );
    const_str_plain_isCD = UNSTREAM_STRING( &constant_bin[ 2955 ], 4, 1 );
    const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 1, const_str_plain_jdatabits ); Py_INCREF( const_str_plain_jdatabits );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 2, const_str_plain_jstopbits ); Py_INCREF( const_str_plain_jstopbits );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 3, const_str_plain_jparity ); Py_INCREF( const_str_plain_jparity );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 4, const_str_plain_jflowin ); Py_INCREF( const_str_plain_jflowin );
    const_str_plain_jflowout = UNSTREAM_STRING( &constant_bin[ 2959 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 5, const_str_plain_jflowout ); Py_INCREF( const_str_plain_jflowout );
    const_str_plain_FLOWCONTROL_XONXOFF_IN = UNSTREAM_STRING( &constant_bin[ 2967 ], 22, 1 );
    const_str_plain_enum = UNSTREAM_STRING( &constant_bin[ 2989 ], 4, 1 );
    const_str_plain_PORT_SERIAL = UNSTREAM_STRING( &constant_bin[ 2993 ], 11, 1 );
    const_str_plain_portId = UNSTREAM_STRING( &constant_bin[ 3004 ], 6, 1 );
    const_str_plain_setFlowControlMode = UNSTREAM_STRING( &constant_bin[ 3010 ], 18, 1 );
    const_str_digest_76b328aecf6e0180e1401f2c7b20c24e = UNSTREAM_STRING( &constant_bin[ 3028 ], 60, 0 );
    const_list_75856efb0ecca7fbce58d69489689c75_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_75856efb0ecca7fbce58d69489689c75_list, 0, const_str_digest_fd6499854436c868a15ead683ab7ca35 ); Py_INCREF( const_str_digest_fd6499854436c868a15ead683ab7ca35 );
    PyList_SET_ITEM( const_list_75856efb0ecca7fbce58d69489689c75_list, 1, const_str_digest_894e60cdbf288c6fc5456ff09bf0409c ); Py_INCREF( const_str_digest_894e60cdbf288c6fc5456ff09bf0409c );
    const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple, 1, const_str_plain_portId ); Py_INCREF( const_str_plain_portId );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_plain_isRI = UNSTREAM_STRING( &constant_bin[ 3088 ], 4, 1 );
    const_str_plain_comm = UNSTREAM_STRING( &constant_bin[ 137 ], 4, 1 );
    const_tuple_type_str_type_bytearray_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_type_str_type_bytearray_tuple, 0, (PyObject *)&PyString_Type ); Py_INCREF( (PyObject *)&PyString_Type );
    PyTuple_SET_ITEM( const_tuple_type_str_type_bytearray_tuple, 1, (PyObject *)&PyByteArray_Type ); Py_INCREF( (PyObject *)&PyByteArray_Type );
    const_tuple_2675dac0bbcd7574844627954a33a65d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2675dac0bbcd7574844627954a33a65d_tuple, 0, const_str_plain_portnumber ); Py_INCREF( const_str_plain_portnumber );
    PyTuple_SET_ITEM( const_tuple_2675dac0bbcd7574844627954a33a65d_tuple, 1, const_str_plain_enum ); Py_INCREF( const_str_plain_enum );
    PyTuple_SET_ITEM( const_tuple_2675dac0bbcd7574844627954a33a65d_tuple, 2, const_str_plain_ports ); Py_INCREF( const_str_plain_ports );
    PyTuple_SET_ITEM( const_tuple_2675dac0bbcd7574844627954a33a65d_tuple, 3, const_str_plain_el ); Py_INCREF( const_str_plain_el );
    const_str_plain_FLOWCONTROL_XONXOFF_OUT = UNSTREAM_STRING( &constant_bin[ 3092 ], 23, 1 );
    const_str_plain_skip = UNSTREAM_STRING( &constant_bin[ 3115 ], 4, 1 );
    const_str_plain__outstream = UNSTREAM_STRING( &constant_bin[ 3119 ], 10, 1 );
    const_str_plain_enableReceiveTimeout = UNSTREAM_STRING( &constant_bin[ 3129 ], 20, 1 );
    const_str_plain_isDSR = UNSTREAM_STRING( &constant_bin[ 3149 ], 5, 1 );
    const_str_plain_STOPBITS_1_5 = UNSTREAM_STRING( &constant_bin[ 3154 ], 12, 1 );
    const_str_digest_56312e9e44f7e28c1876ceb5a373d82d = UNSTREAM_STRING( &constant_bin[ 3166 ], 37, 0 );
    const_str_plain_setSerialPortParams = UNSTREAM_STRING( &constant_bin[ 3203 ], 19, 1 );
    const_tuple_str_digest_76b328aecf6e0180e1401f2c7b20c24e_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_76b328aecf6e0180e1401f2c7b20c24e_tuple, 0, const_str_digest_76b328aecf6e0180e1401f2c7b20c24e ); Py_INCREF( const_str_digest_76b328aecf6e0180e1401f2c7b20c24e );
    const_str_plain_CommPortIdentifier = UNSTREAM_STRING( &constant_bin[ 3222 ], 18, 1 );
    const_str_digest_496da828bc431dbb4a35a3f004364a79 = UNSTREAM_STRING( &constant_bin[ 3240 ], 47, 0 );
    const_str_plain_DATABITS_5 = UNSTREAM_STRING( &constant_bin[ 3287 ], 10, 1 );
    const_str_plain_DATABITS_6 = UNSTREAM_STRING( &constant_bin[ 3297 ], 10, 1 );
    const_str_plain_STOPBITS_1 = UNSTREAM_STRING( &constant_bin[ 3154 ], 10, 1 );
    const_str_plain_STOPBITS_2 = UNSTREAM_STRING( &constant_bin[ 3307 ], 10, 1 );
    const_str_plain_nextElement = UNSTREAM_STRING( &constant_bin[ 3317 ], 11, 1 );
    const_str_plain_FLOWCONTROL_RTSCTS_OUT = UNSTREAM_STRING( &constant_bin[ 3328 ], 22, 1 );
    const_str_plain_sPort = UNSTREAM_STRING( &constant_bin[ 3350 ], 5, 1 );
    const_str_digest_6307284dff33304eb571a029dfac7803 = UNSTREAM_STRING( &constant_bin[ 3355 ], 72, 0 );
    const_str_plain_device = UNSTREAM_STRING( &constant_bin[ 3192 ], 6, 1 );
    const_str_plain_available = UNSTREAM_STRING( &constant_bin[ 806 ], 9, 1 );
    const_str_plain_my_import = UNSTREAM_STRING( &constant_bin[ 3427 ], 9, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$serialjava( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_267cab3fb63787b7ce8876fd6c64ddff;
static PyCodeObject *codeobj_ff4d855d93f6ec5eb4db49a3cdf84eda;
static PyCodeObject *codeobj_cf81f144a31fda267c021c84647db4e2;
static PyCodeObject *codeobj_3a000eaa5d809fa3339db353b6f20ddc;
static PyCodeObject *codeobj_e0b22f22571db5c597d5e27cf5b28e28;
static PyCodeObject *codeobj_96fe9197f9d30a7d92f8beb9df085e61;
static PyCodeObject *codeobj_4c4016021def4bf3b7e4da3b85505a37;
static PyCodeObject *codeobj_2d0baa5719bdfc33bfec2e0df896aeb0;
static PyCodeObject *codeobj_8b4057e67f942e6d8bcd7a6854fd89b0;
static PyCodeObject *codeobj_fab3afce980e3b610300b72865adae87;
static PyCodeObject *codeobj_5f2503d1a750ccc8e071392b44d3d33d;
static PyCodeObject *codeobj_473ed340f766ed08e12c4d9454fd356c;
static PyCodeObject *codeobj_8b0688273ff2ef6eb93d5a430b5edd7e;
static PyCodeObject *codeobj_39b59e3ddc8faf990fb3c8b8ef246de0;
static PyCodeObject *codeobj_d50c95c358dcf6e069ff743a708165f4;
static PyCodeObject *codeobj_5613b1af6f20583d22de65ec912100b7;
static PyCodeObject *codeobj_2d77bd288e68e6b4a74eac04841eb261;
static PyCodeObject *codeobj_f2d972653dab256975625541d830907d;
static PyCodeObject *codeobj_14b795ffd70488e67cd548df42fe1678;
static PyCodeObject *codeobj_9b0808b9ff43da7ac1a3324aea8a9d93;
static PyCodeObject *codeobj_eb514d4f3c0bfe6d42e52f1fe170f839;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5897a00b5e658aa4dd53db30760bdb06;
    codeobj_267cab3fb63787b7ce8876fd6c64ddff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Serial, 53, const_tuple_e0616934e29f85c7e0be39aab315204b_tuple, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_ff4d855d93f6ec5eb4db49a3cdf84eda = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reconfigurePort, 82, const_tuple_298c3abeb0f35b636c42bf53a97dcdb1_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cf81f144a31fda267c021c84647db4e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_break_state, 205, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3a000eaa5d809fa3339db353b6f20ddc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_dtr_state, 217, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e0b22f22571db5c597d5e27cf5b28e28 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_rts_state, 211, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_96fe9197f9d30a7d92f8beb9df085e61 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cd, 244, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4c4016021def4bf3b7e4da3b85505a37 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 137, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2d0baa5719bdfc33bfec2e0df896aeb0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cts, 223, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8b4057e67f942e6d8bcd7a6854fd89b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_detect_java_comm, 21, const_tuple_str_plain_names_str_plain_name_str_plain_mod_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fab3afce980e3b610300b72865adae87 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_device, 42, const_tuple_2675dac0bbcd7574844627954a33a65d_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5f2503d1a750ccc8e071392b44d3d33d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsr, 230, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_473ed340f766ed08e12c4d9454fd356c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_in_waiting, 149, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8b0688273ff2ef6eb93d5a430b5edd7e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_my_import, 13, const_tuple_ea03d0a8772479402eb733ff342bed21_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_39b59e3ddc8faf990fb3c8b8ef246de0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open, 59, const_tuple_str_plain_self_str_plain_portId_str_plain_msg_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d50c95c358dcf6e069ff743a708165f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 156, const_tuple_str_plain_self_str_plain_size_str_plain_read_str_plain_x_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5613b1af6f20583d22de65ec912100b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_input_buffer, 184, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2d77bd288e68e6b4a74eac04841eb261 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_output_buffer, 190, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f2d972653dab256975625541d830907d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ri, 237, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_14b795ffd70488e67cd548df42fe1678 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send_break, 199, const_tuple_str_plain_self_str_plain_duration_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9b0808b9ff43da7ac1a3324aea8a9d93 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serialjava, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_eb514d4f3c0bfe6d42e52f1fe170f839 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 175, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_serial$serialjava$$$class_1_Serial( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_10__update_break_state(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_11__update_rts_state(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_12__update_dtr_state(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_13_cts(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_14_dsr(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_15_ri(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_16_cd(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_1_open(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_2__reconfigurePort(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_3_close(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_4_in_waiting(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_5_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_6_write(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_7_reset_input_buffer(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_8_reset_output_buffer(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_9_send_break( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_1_my_import(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_2_detect_java_comm(  );


static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_3_device(  );


// The module function definitions.
static PyObject *impl_serial$serialjava$$$function_1_my_import( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_mod = NULL;
    PyObject *var_components = NULL;
    PyObject *var_comp = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    static struct Nuitka_FrameObject *cache_frame_8b0688273ff2ef6eb93d5a430b5edd7e = NULL;

    struct Nuitka_FrameObject *frame_8b0688273ff2ef6eb93d5a430b5edd7e;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8b0688273ff2ef6eb93d5a430b5edd7e, codeobj_8b0688273ff2ef6eb93d5a430b5edd7e, module_serial$serialjava, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_8b0688273ff2ef6eb93d5a430b5edd7e = cache_frame_8b0688273ff2ef6eb93d5a430b5edd7e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8b0688273ff2ef6eb93d5a430b5edd7e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8b0688273ff2ef6eb93d5a430b5edd7e ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = par_name;

    CHECK_OBJECT( tmp_name_name_1 );
    frame_8b0688273ff2ef6eb93d5a430b5edd7e->m_frame.f_lineno = 14;
    tmp_assign_source_1 = IMPORT_MODULE1( tmp_name_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_mod == NULL );
    var_mod = tmp_assign_source_1;

    tmp_called_instance_1 = par_name;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_8b0688273ff2ef6eb93d5a430b5edd7e->m_frame.f_lineno = 15;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_components == NULL );
    var_components = tmp_assign_source_2;

    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_components;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_iter_arg_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            type_description = "oooo";
            exception_lineno = 16;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_comp;
        var_comp = tmp_assign_source_5;
        Py_INCREF( var_comp );
        Py_XDECREF( old );
    }

    tmp_getattr_target_1 = var_mod;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mod" );
        exception_tb = NULL;

        exception_lineno = 17;
        type_description = "oooo";
        goto try_except_handler_2;
    }

    tmp_getattr_attr_1 = var_comp;

    CHECK_OBJECT( tmp_getattr_attr_1 );
    tmp_assign_source_6 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description = "oooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_mod;
        var_mod = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description = "oooo";
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

    tmp_return_value = var_mod;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mod" );
        exception_tb = NULL;

        exception_lineno = 18;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b0688273ff2ef6eb93d5a430b5edd7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b0688273ff2ef6eb93d5a430b5edd7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b0688273ff2ef6eb93d5a430b5edd7e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8b0688273ff2ef6eb93d5a430b5edd7e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8b0688273ff2ef6eb93d5a430b5edd7e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8b0688273ff2ef6eb93d5a430b5edd7e, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_8b0688273ff2ef6eb93d5a430b5edd7e, type_description ,par_name, var_mod, var_components, var_comp );

    // Release cached frame.
    if ( frame_8b0688273ff2ef6eb93d5a430b5edd7e == cache_frame_8b0688273ff2ef6eb93d5a430b5edd7e )
    {
        Py_DECREF( frame_8b0688273ff2ef6eb93d5a430b5edd7e );
    }
    cache_frame_8b0688273ff2ef6eb93d5a430b5edd7e = NULL;

    assertFrameObject( frame_8b0688273ff2ef6eb93d5a430b5edd7e );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_1_my_import );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    CHECK_OBJECT( (PyObject *)var_components );
    Py_DECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_1_my_import );
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


static PyObject *impl_serial$serialjava$$$function_2_detect_java_comm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_names = python_pars[ 0 ];
    PyObject *var_name = NULL;
    PyObject *var_mod = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8b4057e67f942e6d8bcd7a6854fd89b0 = NULL;

    struct Nuitka_FrameObject *frame_8b4057e67f942e6d8bcd7a6854fd89b0;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8b4057e67f942e6d8bcd7a6854fd89b0, codeobj_8b4057e67f942e6d8bcd7a6854fd89b0, module_serial$serialjava, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_8b4057e67f942e6d8bcd7a6854fd89b0 = cache_frame_8b4057e67f942e6d8bcd7a6854fd89b0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8b4057e67f942e6d8bcd7a6854fd89b0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8b4057e67f942e6d8bcd7a6854fd89b0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = par_names;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "ooo";
            exception_lineno = 23;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_3;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_my_import );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_my_import );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "my_import" );
        exception_tb = NULL;

        exception_lineno = 25;
        type_description = "ooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_1 = var_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_8b4057e67f942e6d8bcd7a6854fd89b0->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description = "ooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_mod;
        var_mod = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_mod;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SerialPort );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description = "ooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_mod;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_2_detect_java_comm );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_8b4057e67f942e6d8bcd7a6854fd89b0 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_8b4057e67f942e6d8bcd7a6854fd89b0, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_8b4057e67f942e6d8bcd7a6854fd89b0, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_ImportError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_AttributeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 28;
        type_description = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_right_1 );
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
    if (exception_tb && exception_tb->tb_frame == &frame_8b4057e67f942e6d8bcd7a6854fd89b0->m_frame) frame_8b4057e67f942e6d8bcd7a6854fd89b0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "ooo";
    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_2_detect_java_comm );
    return NULL;
    // End of try:
    try_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_make_exception_arg_1 = const_str_digest_496da828bc431dbb4a35a3f004364a79;
    frame_8b4057e67f942e6d8bcd7a6854fd89b0->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 30;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8b4057e67f942e6d8bcd7a6854fd89b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_8b4057e67f942e6d8bcd7a6854fd89b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8b4057e67f942e6d8bcd7a6854fd89b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8b4057e67f942e6d8bcd7a6854fd89b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8b4057e67f942e6d8bcd7a6854fd89b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8b4057e67f942e6d8bcd7a6854fd89b0, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_8b4057e67f942e6d8bcd7a6854fd89b0, type_description ,par_names, var_name, var_mod );

    // Release cached frame.
    if ( frame_8b4057e67f942e6d8bcd7a6854fd89b0 == cache_frame_8b4057e67f942e6d8bcd7a6854fd89b0 )
    {
        Py_DECREF( frame_8b4057e67f942e6d8bcd7a6854fd89b0 );
    }
    cache_frame_8b4057e67f942e6d8bcd7a6854fd89b0 = NULL;

    assertFrameObject( frame_8b4057e67f942e6d8bcd7a6854fd89b0 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_2_detect_java_comm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)var_name );
    Py_DECREF( var_name );
    var_name = NULL;

    CHECK_OBJECT( (PyObject *)var_mod );
    Py_DECREF( var_mod );
    var_mod = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_2_detect_java_comm );
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


static PyObject *impl_serial$serialjava$$$function_3_device( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_portnumber = python_pars[ 0 ];
    PyObject *var_enum = NULL;
    PyObject *var_ports = NULL;
    PyObject *var_el = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fab3afce980e3b610300b72865adae87 = NULL;

    struct Nuitka_FrameObject *frame_fab3afce980e3b610300b72865adae87;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fab3afce980e3b610300b72865adae87, codeobj_fab3afce980e3b610300b72865adae87, module_serial$serialjava, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_fab3afce980e3b610300b72865adae87 = cache_frame_fab3afce980e3b610300b72865adae87;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fab3afce980e3b610300b72865adae87 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fab3afce980e3b610300b72865adae87 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 44;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CommPortIdentifier );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    frame_fab3afce980e3b610300b72865adae87->m_frame.f_lineno = 44;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getPortIdentifiers );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_enum == NULL );
    var_enum = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_ports == NULL );
    var_ports = tmp_assign_source_2;

    loop_start_1:;
    tmp_called_instance_2 = var_enum;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_fab3afce980e3b610300b72865adae87->m_frame.f_lineno = 46;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_hasMoreElements );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 46;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_called_instance_3 = var_enum;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_fab3afce980e3b610300b72865adae87->m_frame.f_lineno = 47;
    tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_nextElement );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_el;
        var_el = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_called_instance_4 = var_el;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_fab3afce980e3b610300b72865adae87->m_frame.f_lineno = 48;
    tmp_compare_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getPortType );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 48;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_CommPortIdentifier );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 48;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PORT_SERIAL );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 48;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 48;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_5 = var_ports;

    CHECK_OBJECT( tmp_called_instance_5 );
    tmp_args_element_name_1 = var_el;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_fab3afce980e3b610300b72865adae87->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_subscribed_name_1 = var_ports;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = par_portnumber;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_called_instance_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_called_instance_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    frame_fab3afce980e3b610300b72865adae87->m_frame.f_lineno = 50;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_getName );
    Py_DECREF( tmp_called_instance_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fab3afce980e3b610300b72865adae87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fab3afce980e3b610300b72865adae87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fab3afce980e3b610300b72865adae87 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fab3afce980e3b610300b72865adae87, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fab3afce980e3b610300b72865adae87->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fab3afce980e3b610300b72865adae87, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_fab3afce980e3b610300b72865adae87, type_description ,par_portnumber, var_enum, var_ports, var_el );

    // Release cached frame.
    if ( frame_fab3afce980e3b610300b72865adae87 == cache_frame_fab3afce980e3b610300b72865adae87 )
    {
        Py_DECREF( frame_fab3afce980e3b610300b72865adae87 );
    }
    cache_frame_fab3afce980e3b610300b72865adae87 = NULL;

    assertFrameObject( frame_fab3afce980e3b610300b72865adae87 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_3_device );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_portnumber );
    Py_DECREF( par_portnumber );
    par_portnumber = NULL;

    CHECK_OBJECT( (PyObject *)var_enum );
    Py_DECREF( var_enum );
    var_enum = NULL;

    CHECK_OBJECT( (PyObject *)var_ports );
    Py_DECREF( var_ports );
    var_ports = NULL;

    Py_XDECREF( var_el );
    var_el = NULL;

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

    CHECK_OBJECT( (PyObject *)par_portnumber );
    Py_DECREF( par_portnumber );
    par_portnumber = NULL;

    Py_XDECREF( var_enum );
    var_enum = NULL;

    Py_XDECREF( var_ports );
    var_ports = NULL;

    Py_XDECREF( var_el );
    var_el = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$function_3_device );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$serialjava$$$class_1_Serial( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var_open = NULL;
    PyObject *var__reconfigurePort = NULL;
    PyObject *var_close = NULL;
    PyObject *var_in_waiting = NULL;
    PyObject *var_read = NULL;
    PyObject *var_write = NULL;
    PyObject *var_reset_input_buffer = NULL;
    PyObject *var_reset_output_buffer = NULL;
    PyObject *var_send_break = NULL;
    PyObject *var__update_break_state = NULL;
    PyObject *var__update_rts_state = NULL;
    PyObject *var__update_dtr_state = NULL;
    PyObject *var_cts = NULL;
    PyObject *var_dsr = NULL;
    PyObject *var_ri = NULL;
    PyObject *var_cd = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_267cab3fb63787b7ce8876fd6c64ddff = NULL;

    struct Nuitka_FrameObject *frame_267cab3fb63787b7ce8876fd6c64ddff;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_1_open(  );
    assert( var_open == NULL );
    var_open = tmp_assign_source_1;

    tmp_assign_source_2 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_2__reconfigurePort(  );
    assert( var__reconfigurePort == NULL );
    var__reconfigurePort = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_3_close(  );
    assert( var_close == NULL );
    var_close = tmp_assign_source_3;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_267cab3fb63787b7ce8876fd6c64ddff, codeobj_267cab3fb63787b7ce8876fd6c64ddff, module_serial$serialjava, sizeof(void *)+sizeof(void *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_267cab3fb63787b7ce8876fd6c64ddff = cache_frame_267cab3fb63787b7ce8876fd6c64ddff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_267cab3fb63787b7ce8876fd6c64ddff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_267cab3fb63787b7ce8876fd6c64ddff ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_1 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_4_in_waiting(  );
    frame_267cab3fb63787b7ce8876fd6c64ddff->m_frame.f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description = "NNoooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_in_waiting == NULL );
    var_in_waiting = tmp_assign_source_4;

    tmp_defaults_1 = const_tuple_int_pos_1_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_5 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_5_read( tmp_defaults_1 );
    assert( var_read == NULL );
    var_read = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_6_write(  );
    assert( var_write == NULL );
    var_write = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_7_reset_input_buffer(  );
    assert( var_reset_input_buffer == NULL );
    var_reset_input_buffer = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_8_reset_output_buffer(  );
    assert( var_reset_output_buffer == NULL );
    var_reset_output_buffer = tmp_assign_source_8;

    tmp_defaults_2 = const_tuple_float_0_25_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_9 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_9_send_break( tmp_defaults_2 );
    assert( var_send_break == NULL );
    var_send_break = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_10__update_break_state(  );
    assert( var__update_break_state == NULL );
    var__update_break_state = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_11__update_rts_state(  );
    assert( var__update_rts_state == NULL );
    var__update_rts_state = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_12__update_dtr_state(  );
    assert( var__update_dtr_state == NULL );
    var__update_dtr_state = tmp_assign_source_12;

    tmp_called_name_2 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_2 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_13_cts(  );
    frame_267cab3fb63787b7ce8876fd6c64ddff->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description = "NNoooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cts == NULL );
    var_cts = tmp_assign_source_13;

    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_3 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_14_dsr(  );
    frame_267cab3fb63787b7ce8876fd6c64ddff->m_frame.f_lineno = 230;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description = "NNoooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dsr == NULL );
    var_dsr = tmp_assign_source_14;

    tmp_called_name_4 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_4 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_15_ri(  );
    frame_267cab3fb63787b7ce8876fd6c64ddff->m_frame.f_lineno = 237;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description = "NNoooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ri == NULL );
    var_ri = tmp_assign_source_15;

    tmp_called_name_5 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_5 = MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_16_cd(  );
    frame_267cab3fb63787b7ce8876fd6c64ddff->m_frame.f_lineno = 244;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description = "NNoooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cd == NULL );
    var_cd = tmp_assign_source_16;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_267cab3fb63787b7ce8876fd6c64ddff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_267cab3fb63787b7ce8876fd6c64ddff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_267cab3fb63787b7ce8876fd6c64ddff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_267cab3fb63787b7ce8876fd6c64ddff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_267cab3fb63787b7ce8876fd6c64ddff, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_267cab3fb63787b7ce8876fd6c64ddff, type_description ,NULL, NULL, var_open, var__reconfigurePort, var_close, var_in_waiting, var_read, var_write, var_reset_input_buffer, var_reset_output_buffer, var_send_break, var__update_break_state, var__update_rts_state, var__update_dtr_state, var_cts, var_dsr, var_ri, var_cd );

    // Release cached frame.
    if ( frame_267cab3fb63787b7ce8876fd6c64ddff == cache_frame_267cab3fb63787b7ce8876fd6c64ddff )
    {
        Py_DECREF( frame_267cab3fb63787b7ce8876fd6c64ddff );
    }
    cache_frame_267cab3fb63787b7ce8876fd6c64ddff = NULL;

    assertFrameObject( frame_267cab3fb63787b7ce8876fd6c64ddff );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = _PyDict_NewPresized( 18 );
    tmp_dict_value_1 = const_str_digest_9ba51f6bdeff944f83e458f9b58790b4;
    tmp_dict_key_1 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = const_str_digest_65e81d7601f8f895a742ef32abea7b4a;
    tmp_dict_key_2 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = var_open;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_open;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = var__reconfigurePort;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain__reconfigurePort;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = var_close;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_close;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = var_in_waiting;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_in_waiting;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = var_read;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_read;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = var_write;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_write;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = var_reset_input_buffer;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_reset_input_buffer;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = var_reset_output_buffer;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_reset_output_buffer;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = var_send_break;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain_send_break;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = var__update_break_state;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain__update_break_state;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_13 = var__update_rts_state;

    CHECK_OBJECT( tmp_dict_value_13 );
    tmp_dict_key_13 = const_str_plain__update_rts_state;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = var__update_dtr_state;

    CHECK_OBJECT( tmp_dict_value_14 );
    tmp_dict_key_14 = const_str_plain__update_dtr_state;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_15 = var_cts;

    CHECK_OBJECT( tmp_dict_value_15 );
    tmp_dict_key_15 = const_str_plain_cts;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_16 = var_dsr;

    CHECK_OBJECT( tmp_dict_value_16 );
    tmp_dict_key_16 = const_str_plain_dsr;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_17 = var_ri;

    CHECK_OBJECT( tmp_dict_value_17 );
    tmp_dict_key_17 = const_str_plain_ri;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_18 = var_cd;

    CHECK_OBJECT( tmp_dict_value_18 );
    tmp_dict_key_18 = const_str_plain_cd;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_18, tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_open );
    Py_DECREF( var_open );
    var_open = NULL;

    CHECK_OBJECT( (PyObject *)var__reconfigurePort );
    Py_DECREF( var__reconfigurePort );
    var__reconfigurePort = NULL;

    CHECK_OBJECT( (PyObject *)var_close );
    Py_DECREF( var_close );
    var_close = NULL;

    CHECK_OBJECT( (PyObject *)var_in_waiting );
    Py_DECREF( var_in_waiting );
    var_in_waiting = NULL;

    CHECK_OBJECT( (PyObject *)var_read );
    Py_DECREF( var_read );
    var_read = NULL;

    CHECK_OBJECT( (PyObject *)var_write );
    Py_DECREF( var_write );
    var_write = NULL;

    CHECK_OBJECT( (PyObject *)var_reset_input_buffer );
    Py_DECREF( var_reset_input_buffer );
    var_reset_input_buffer = NULL;

    CHECK_OBJECT( (PyObject *)var_reset_output_buffer );
    Py_DECREF( var_reset_output_buffer );
    var_reset_output_buffer = NULL;

    CHECK_OBJECT( (PyObject *)var_send_break );
    Py_DECREF( var_send_break );
    var_send_break = NULL;

    CHECK_OBJECT( (PyObject *)var__update_break_state );
    Py_DECREF( var__update_break_state );
    var__update_break_state = NULL;

    CHECK_OBJECT( (PyObject *)var__update_rts_state );
    Py_DECREF( var__update_rts_state );
    var__update_rts_state = NULL;

    CHECK_OBJECT( (PyObject *)var__update_dtr_state );
    Py_DECREF( var__update_dtr_state );
    var__update_dtr_state = NULL;

    CHECK_OBJECT( (PyObject *)var_cts );
    Py_DECREF( var_cts );
    var_cts = NULL;

    CHECK_OBJECT( (PyObject *)var_dsr );
    Py_DECREF( var_dsr );
    var_dsr = NULL;

    CHECK_OBJECT( (PyObject *)var_ri );
    Py_DECREF( var_ri );
    var_ri = NULL;

    CHECK_OBJECT( (PyObject *)var_cd );
    Py_DECREF( var_cd );
    var_cd = NULL;

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

    CHECK_OBJECT( (PyObject *)var_open );
    Py_DECREF( var_open );
    var_open = NULL;

    CHECK_OBJECT( (PyObject *)var__reconfigurePort );
    Py_DECREF( var__reconfigurePort );
    var__reconfigurePort = NULL;

    CHECK_OBJECT( (PyObject *)var_close );
    Py_DECREF( var_close );
    var_close = NULL;

    Py_XDECREF( var_in_waiting );
    var_in_waiting = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_write );
    var_write = NULL;

    Py_XDECREF( var_reset_input_buffer );
    var_reset_input_buffer = NULL;

    Py_XDECREF( var_reset_output_buffer );
    var_reset_output_buffer = NULL;

    Py_XDECREF( var_send_break );
    var_send_break = NULL;

    Py_XDECREF( var__update_break_state );
    var__update_break_state = NULL;

    Py_XDECREF( var__update_rts_state );
    var__update_rts_state = NULL;

    Py_XDECREF( var__update_dtr_state );
    var__update_dtr_state = NULL;

    Py_XDECREF( var_cts );
    var_cts = NULL;

    Py_XDECREF( var_dsr );
    var_dsr = NULL;

    Py_XDECREF( var_ri );
    var_ri = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_1_open( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_portId = NULL;
    PyObject *var_msg = NULL;
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_39b59e3ddc8faf990fb3c8b8ef246de0 = NULL;

    struct Nuitka_FrameObject *frame_39b59e3ddc8faf990fb3c8b8ef246de0;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_39b59e3ddc8faf990fb3c8b8ef246de0, codeobj_39b59e3ddc8faf990fb3c8b8ef246de0, module_serial$serialjava, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_39b59e3ddc8faf990fb3c8b8ef246de0 = cache_frame_39b59e3ddc8faf990fb3c8b8ef246de0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_39b59e3ddc8faf990fb3c8b8ef246de0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_39b59e3ddc8faf990fb3c8b8ef246de0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__port );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SerialException" );
        exception_tb = NULL;

        exception_lineno = 65;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame.f_lineno = 65;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 65;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 66;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SerialException" );
        exception_tb = NULL;

        exception_lineno = 67;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame.f_lineno = 67;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 67;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_type_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = (PyObject *)&PyString_Type;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 68;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 69;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CommPortIdentifier );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_getPortIdentifier );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 69;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_portId == NULL );
    var_portId = tmp_assign_source_1;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 71;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_CommPortIdentifier );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_getPortIdentifier );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_device );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_device );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "device" );
        exception_tb = NULL;

        exception_lineno = 71;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__port );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 71;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 71;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_portId == NULL );
    var_portId = tmp_assign_source_2;

    branch_end_3:;
    // Tried code:
    tmp_called_instance_1 = var_portId;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame.f_lineno = 73;
    tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_open, &PyTuple_GET_ITEM( const_tuple_str_digest_7d92b9a3fd9230165131735b371b328c_int_pos_10_tuple, 0 ) );

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "ooo";
        goto try_except_handler_2;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sPort, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 73;
        type_description = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_1 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_39b59e3ddc8faf990fb3c8b8ef246de0 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_39b59e3ddc8faf990fb3c8b8ef246de0, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_39b59e3ddc8faf990fb3c8b8ef246de0, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_Exception;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_msg == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_msg = tmp_assign_source_3;

    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_sPort, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SerialException" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_e8af2f0e191b1c5966c75e0c0e11daa6;
    tmp_right_name_1 = var_msg;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 76;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame) frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_end_4:;
    // End of try:
    try_end_1:;
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame.f_lineno = 77;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__reconfigurePort );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_sPort );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame.f_lineno = 78;
    tmp_assattr_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getInputStream );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__instream, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 78;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_sPort );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame.f_lineno = 79;
    tmp_assattr_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getOutputStream );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__outstream, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 79;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_assattr_name_5 = Py_True;
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_is_open, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_39b59e3ddc8faf990fb3c8b8ef246de0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_39b59e3ddc8faf990fb3c8b8ef246de0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_39b59e3ddc8faf990fb3c8b8ef246de0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_39b59e3ddc8faf990fb3c8b8ef246de0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_39b59e3ddc8faf990fb3c8b8ef246de0, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_39b59e3ddc8faf990fb3c8b8ef246de0, type_description ,par_self, var_portId, var_msg );

    // Release cached frame.
    if ( frame_39b59e3ddc8faf990fb3c8b8ef246de0 == cache_frame_39b59e3ddc8faf990fb3c8b8ef246de0 )
    {
        Py_DECREF( frame_39b59e3ddc8faf990fb3c8b8ef246de0 );
    }
    cache_frame_39b59e3ddc8faf990fb3c8b8ef246de0 = NULL;

    assertFrameObject( frame_39b59e3ddc8faf990fb3c8b8ef246de0 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_1_open );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_portId );
    Py_DECREF( var_portId );
    var_portId = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_portId );
    var_portId = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_1_open );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_2__reconfigurePort( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_jdatabits = NULL;
    PyObject *var_jstopbits = NULL;
    PyObject *var_jparity = NULL;
    PyObject *var_jflowin = NULL;
    PyObject *var_jflowout = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Eq_6;
    int tmp_cmp_Eq_7;
    int tmp_cmp_Eq_8;
    int tmp_cmp_Eq_9;
    int tmp_cmp_Eq_10;
    int tmp_cmp_Eq_11;
    int tmp_cmp_Eq_12;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    PyObject *tmp_source_name_50;
    PyObject *tmp_source_name_51;
    PyObject *tmp_source_name_52;
    PyObject *tmp_source_name_53;
    PyObject *tmp_source_name_54;
    PyObject *tmp_source_name_55;
    PyObject *tmp_source_name_56;
    PyObject *tmp_source_name_57;
    PyObject *tmp_source_name_58;
    PyObject *tmp_source_name_59;
    PyObject *tmp_source_name_60;
    PyObject *tmp_source_name_61;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ff4d855d93f6ec5eb4db49a3cdf84eda = NULL;

    struct Nuitka_FrameObject *frame_ff4d855d93f6ec5eb4db49a3cdf84eda;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ff4d855d93f6ec5eb4db49a3cdf84eda, codeobj_ff4d855d93f6ec5eb4db49a3cdf84eda, module_serial$serialjava, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_ff4d855d93f6ec5eb4db49a3cdf84eda = cache_frame_ff4d855d93f6ec5eb4db49a3cdf84eda;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ff4d855d93f6ec5eb4db49a3cdf84eda );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ff4d855d93f6ec5eb4db49a3cdf84eda ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 84;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SerialException" );
        exception_tb = NULL;

        exception_lineno = 85;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_ff4d855d93f6ec5eb4db49a3cdf84eda->m_frame.f_lineno = 85;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 85;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ff4d855d93f6ec5eb4db49a3cdf84eda->m_frame.f_lineno = 87;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_enableReceiveTimeout, &PyTuple_GET_ITEM( const_tuple_int_pos_30_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__bytesize );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_FIVEBITS );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIVEBITS );
    }

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FIVEBITS" );
        exception_tb = NULL;

        exception_lineno = 88;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 88;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 89;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_SerialPort );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_DATABITS_5 );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jdatabits == NULL );
    var_jdatabits = tmp_assign_source_1;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__bytesize );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SIXBITS );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SIXBITS );
    }

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SIXBITS" );
        exception_tb = NULL;

        exception_lineno = 90;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 90;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 91;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_SerialPort );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_DATABITS_6 );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jdatabits == NULL );
    var_jdatabits = tmp_assign_source_2;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__bytesize );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SEVENBITS );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SEVENBITS );
    }

    if ( tmp_compare_right_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SEVENBITS" );
        exception_tb = NULL;

        exception_lineno = 92;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 92;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 93;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SerialPort );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_DATABITS_7 );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jdatabits == NULL );
    var_jdatabits = tmp_assign_source_3;

    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_12 = par_self;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__bytesize );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_EIGHTBITS );

    if (unlikely( tmp_compare_right_4 == NULL ))
    {
        tmp_compare_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EIGHTBITS );
    }

    if ( tmp_compare_right_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "EIGHTBITS" );
        exception_tb = NULL;

        exception_lineno = 94;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 94;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 95;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_SerialPort );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_DATABITS_8 );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jdatabits == NULL );
    var_jdatabits = tmp_assign_source_4;

    goto branch_end_5;
    branch_no_5:;
    tmp_left_name_1 = const_str_digest_18ffcab9219e00f9e39c11ee220d72ec;
    tmp_source_name_15 = par_self;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__bytesize );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ff4d855d93f6ec5eb4db49a3cdf84eda->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 97;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooo";
    goto frame_exception_exit_1;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    tmp_source_name_16 = par_self;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__stopbits );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE );

    if (unlikely( tmp_compare_right_5 == NULL ))
    {
        tmp_compare_right_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE );
    }

    if ( tmp_compare_right_5 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STOPBITS_ONE" );
        exception_tb = NULL;

        exception_lineno = 99;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 99;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_cmp_Eq_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 100;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_SerialPort );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_STOPBITS_1 );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jstopbits == NULL );
    var_jstopbits = tmp_assign_source_5;

    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_19 = par_self;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__stopbits );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE_POINT_FIVE );

    if (unlikely( tmp_compare_right_6 == NULL ))
    {
        tmp_compare_right_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE_POINT_FIVE );
    }

    if ( tmp_compare_right_6 == NULL )
    {
        Py_DECREF( tmp_compare_left_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STOPBITS_ONE_POINT_FIVE" );
        exception_tb = NULL;

        exception_lineno = 101;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        exception_lineno = 101;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_cmp_Eq_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 102;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_SerialPort );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_STOPBITS_1_5 );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jstopbits == NULL );
    var_jstopbits = tmp_assign_source_6;

    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_22 = par_self;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__stopbits );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_STOPBITS_TWO );

    if (unlikely( tmp_compare_right_7 == NULL ))
    {
        tmp_compare_right_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_TWO );
    }

    if ( tmp_compare_right_7 == NULL )
    {
        Py_DECREF( tmp_compare_left_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STOPBITS_TWO" );
        exception_tb = NULL;

        exception_lineno = 103;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 103;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_7 );
    if ( tmp_cmp_Eq_7 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 104;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_SerialPort );
    if ( tmp_source_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_STOPBITS_2 );
    Py_DECREF( tmp_source_name_23 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jstopbits == NULL );
    var_jstopbits = tmp_assign_source_7;

    goto branch_end_8;
    branch_no_8:;
    tmp_left_name_2 = const_str_digest_29554dead93ed87156471f41b2e43532;
    tmp_source_name_25 = par_self;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__stopbits );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ff4d855d93f6ec5eb4db49a3cdf84eda->m_frame.f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 106;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooo";
    goto frame_exception_exit_1;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    tmp_source_name_26 = par_self;

    CHECK_OBJECT( tmp_source_name_26 );
    tmp_compare_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__parity );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_PARITY_NONE );

    if (unlikely( tmp_compare_right_8 == NULL ))
    {
        tmp_compare_right_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_NONE );
    }

    if ( tmp_compare_right_8 == NULL )
    {
        Py_DECREF( tmp_compare_left_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PARITY_NONE" );
        exception_tb = NULL;

        exception_lineno = 108;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_8 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 108;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_cmp_Eq_8 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 109;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_SerialPort );
    if ( tmp_source_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_PARITY_NONE );
    Py_DECREF( tmp_source_name_27 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jparity == NULL );
    var_jparity = tmp_assign_source_8;

    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_29 = par_self;

    CHECK_OBJECT( tmp_source_name_29 );
    tmp_compare_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__parity );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_PARITY_EVEN );

    if (unlikely( tmp_compare_right_9 == NULL ))
    {
        tmp_compare_right_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_EVEN );
    }

    if ( tmp_compare_right_9 == NULL )
    {
        Py_DECREF( tmp_compare_left_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PARITY_EVEN" );
        exception_tb = NULL;

        exception_lineno = 110;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_9 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        exception_lineno = 110;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_9 );
    if ( tmp_cmp_Eq_9 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 111;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_SerialPort );
    if ( tmp_source_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_PARITY_EVEN );
    Py_DECREF( tmp_source_name_30 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jparity == NULL );
    var_jparity = tmp_assign_source_9;

    goto branch_end_10;
    branch_no_10:;
    tmp_source_name_32 = par_self;

    CHECK_OBJECT( tmp_source_name_32 );
    tmp_compare_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__parity );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_PARITY_ODD );

    if (unlikely( tmp_compare_right_10 == NULL ))
    {
        tmp_compare_right_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_ODD );
    }

    if ( tmp_compare_right_10 == NULL )
    {
        Py_DECREF( tmp_compare_left_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PARITY_ODD" );
        exception_tb = NULL;

        exception_lineno = 112;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_10 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        exception_lineno = 112;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_cmp_Eq_10 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 113;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_SerialPort );
    if ( tmp_source_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_PARITY_ODD );
    Py_DECREF( tmp_source_name_33 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jparity == NULL );
    var_jparity = tmp_assign_source_10;

    goto branch_end_11;
    branch_no_11:;
    tmp_source_name_35 = par_self;

    CHECK_OBJECT( tmp_source_name_35 );
    tmp_compare_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__parity );
    if ( tmp_compare_left_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_PARITY_MARK );

    if (unlikely( tmp_compare_right_11 == NULL ))
    {
        tmp_compare_right_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_MARK );
    }

    if ( tmp_compare_right_11 == NULL )
    {
        Py_DECREF( tmp_compare_left_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PARITY_MARK" );
        exception_tb = NULL;

        exception_lineno = 114;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_11 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_11 );

        exception_lineno = 114;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_11 );
    if ( tmp_cmp_Eq_11 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 115;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_SerialPort );
    if ( tmp_source_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_PARITY_MARK );
    Py_DECREF( tmp_source_name_36 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jparity == NULL );
    var_jparity = tmp_assign_source_11;

    goto branch_end_12;
    branch_no_12:;
    tmp_source_name_38 = par_self;

    CHECK_OBJECT( tmp_source_name_38 );
    tmp_compare_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain__parity );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_PARITY_SPACE );

    if (unlikely( tmp_compare_right_12 == NULL ))
    {
        tmp_compare_right_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_SPACE );
    }

    if ( tmp_compare_right_12 == NULL )
    {
        Py_DECREF( tmp_compare_left_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PARITY_SPACE" );
        exception_tb = NULL;

        exception_lineno = 116;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_12 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Eq_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        exception_lineno = 116;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_12 );
    if ( tmp_cmp_Eq_12 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_40 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_40 == NULL ))
    {
        tmp_source_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_40 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 117;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_SerialPort );
    if ( tmp_source_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_PARITY_SPACE );
    Py_DECREF( tmp_source_name_39 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jparity == NULL );
    var_jparity = tmp_assign_source_12;

    goto branch_end_13;
    branch_no_13:;
    tmp_left_name_3 = const_str_digest_e314ad64a0eb2cfb4f734059b1596745;
    tmp_source_name_41 = par_self;

    CHECK_OBJECT( tmp_source_name_41 );
    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain__parity );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ff4d855d93f6ec5eb4db49a3cdf84eda->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_3 );
    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 119;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooo";
    goto frame_exception_exit_1;
    branch_end_13:;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    tmp_assign_source_13 = const_int_0;
    assert( var_jflowin == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_jflowin = tmp_assign_source_13;

    tmp_assign_source_14 = const_int_0;
    assert( var_jflowout == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_jflowout = tmp_assign_source_14;

    tmp_source_name_42 = par_self;

    CHECK_OBJECT( tmp_source_name_42 );
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain__rtscts );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 122;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_left_name_4 = const_int_0;
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 123;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_SerialPort );
    if ( tmp_source_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_FLOWCONTROL_RTSCTS_IN );
    Py_DECREF( tmp_source_name_43 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_jflowin;
        assert( old != NULL );
        var_jflowin = tmp_assign_source_15;
        Py_DECREF( old );
    }

    tmp_left_name_5 = const_int_0;
    tmp_source_name_46 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_46 == NULL ))
    {
        tmp_source_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_46 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 124;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_SerialPort );
    if ( tmp_source_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_FLOWCONTROL_RTSCTS_OUT );
    Py_DECREF( tmp_source_name_45 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_jflowout;
        assert( old != NULL );
        var_jflowout = tmp_assign_source_16;
        Py_DECREF( old );
    }

    branch_no_14:;
    tmp_source_name_47 = par_self;

    CHECK_OBJECT( tmp_source_name_47 );
    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain__xonxoff );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 125;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_left_name_6 = var_jflowin;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_source_name_49 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_49 == NULL ))
    {
        tmp_source_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_49 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 126;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_SerialPort );
    if ( tmp_source_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_FLOWCONTROL_XONXOFF_IN );
    Py_DECREF( tmp_source_name_48 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_17 = tmp_left_name_6;
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    var_jflowin = tmp_assign_source_17;

    tmp_left_name_7 = var_jflowout;

    CHECK_OBJECT( tmp_left_name_7 );
    tmp_source_name_51 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm );

    if (unlikely( tmp_source_name_51 == NULL ))
    {
        tmp_source_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comm );
    }

    if ( tmp_source_name_51 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "comm" );
        exception_tb = NULL;

        exception_lineno = 127;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_50 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_SerialPort );
    if ( tmp_source_name_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_FLOWCONTROL_XONXOFF_OUT );
    Py_DECREF( tmp_source_name_50 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_18 = tmp_left_name_7;
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    var_jflowout = tmp_assign_source_18;

    branch_no_15:;
    tmp_source_name_53 = par_self;

    CHECK_OBJECT( tmp_source_name_53 );
    tmp_source_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_sPort );
    if ( tmp_source_name_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_setSerialPortParams );
    Py_DECREF( tmp_source_name_52 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_54 = par_self;

    CHECK_OBJECT( tmp_source_name_54 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain__baudrate );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 129;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_jdatabits;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "jdatabits" );
        exception_tb = NULL;

        exception_lineno = 129;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_jstopbits;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "jstopbits" );
        exception_tb = NULL;

        exception_lineno = 129;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_jparity;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "jparity" );
        exception_tb = NULL;

        exception_lineno = 129;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_ff4d855d93f6ec5eb4db49a3cdf84eda->m_frame.f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_56 = par_self;

    CHECK_OBJECT( tmp_source_name_56 );
    tmp_source_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_sPort );
    if ( tmp_source_name_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_setFlowControlMode );
    Py_DECREF( tmp_source_name_55 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_8 = var_jflowin;

    if ( tmp_left_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "jflowin" );
        exception_tb = NULL;

        exception_lineno = 130;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = var_jflowout;

    if ( tmp_right_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "jflowout" );
        exception_tb = NULL;

        exception_lineno = 130;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 130;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ff4d855d93f6ec5eb4db49a3cdf84eda->m_frame.f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_57 = par_self;

    CHECK_OBJECT( tmp_source_name_57 );
    tmp_compare_left_13 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain__timeout );
    if ( tmp_compare_left_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_13 = const_int_0;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_13 );

        exception_lineno = 132;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_13 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_59 = par_self;

    CHECK_OBJECT( tmp_source_name_59 );
    tmp_source_name_58 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_sPort );
    if ( tmp_source_name_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_enableReceiveTimeout );
    Py_DECREF( tmp_source_name_58 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_60 = par_self;

    CHECK_OBJECT( tmp_source_name_60 );
    tmp_left_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain__timeout );
    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 133;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_9 = const_int_pos_1000;
    tmp_int_arg_1 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_9 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 133;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 133;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ff4d855d93f6ec5eb4db49a3cdf84eda->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_16;
    branch_no_16:;
    tmp_source_name_61 = par_self;

    CHECK_OBJECT( tmp_source_name_61 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_sPort );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ff4d855d93f6ec5eb4db49a3cdf84eda->m_frame.f_lineno = 135;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_disableReceiveTimeout );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_16:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff4d855d93f6ec5eb4db49a3cdf84eda );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff4d855d93f6ec5eb4db49a3cdf84eda );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ff4d855d93f6ec5eb4db49a3cdf84eda, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ff4d855d93f6ec5eb4db49a3cdf84eda->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ff4d855d93f6ec5eb4db49a3cdf84eda, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_ff4d855d93f6ec5eb4db49a3cdf84eda, type_description ,par_self, var_jdatabits, var_jstopbits, var_jparity, var_jflowin, var_jflowout );

    // Release cached frame.
    if ( frame_ff4d855d93f6ec5eb4db49a3cdf84eda == cache_frame_ff4d855d93f6ec5eb4db49a3cdf84eda )
    {
        Py_DECREF( frame_ff4d855d93f6ec5eb4db49a3cdf84eda );
    }
    cache_frame_ff4d855d93f6ec5eb4db49a3cdf84eda = NULL;

    assertFrameObject( frame_ff4d855d93f6ec5eb4db49a3cdf84eda );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_2__reconfigurePort );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_jdatabits );
    var_jdatabits = NULL;

    Py_XDECREF( var_jstopbits );
    var_jstopbits = NULL;

    Py_XDECREF( var_jparity );
    var_jparity = NULL;

    Py_XDECREF( var_jflowin );
    var_jflowin = NULL;

    Py_XDECREF( var_jflowout );
    var_jflowout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_jdatabits );
    var_jdatabits = NULL;

    Py_XDECREF( var_jstopbits );
    var_jstopbits = NULL;

    Py_XDECREF( var_jparity );
    var_jparity = NULL;

    Py_XDECREF( var_jflowin );
    var_jflowin = NULL;

    Py_XDECREF( var_jflowout );
    var_jflowout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_2__reconfigurePort );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_3_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4c4016021def4bf3b7e4da3b85505a37 = NULL;

    struct Nuitka_FrameObject *frame_4c4016021def4bf3b7e4da3b85505a37;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4c4016021def4bf3b7e4da3b85505a37, codeobj_4c4016021def4bf3b7e4da3b85505a37, module_serial$serialjava, sizeof(PyObject *) );
    frame_4c4016021def4bf3b7e4da3b85505a37 = cache_frame_4c4016021def4bf3b7e4da3b85505a37;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4c4016021def4bf3b7e4da3b85505a37 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4c4016021def4bf3b7e4da3b85505a37 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 139;
        type_description = "o";
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
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 140;
        type_description = "o";
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
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__instream );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_4c4016021def4bf3b7e4da3b85505a37->m_frame.f_lineno = 141;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__outstream );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_4c4016021def4bf3b7e4da3b85505a37->m_frame.f_lineno = 142;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sPort );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_4c4016021def4bf3b7e4da3b85505a37->m_frame.f_lineno = 143;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sPort, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_assattr_name_2 = Py_False;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_is_open, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c4016021def4bf3b7e4da3b85505a37 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c4016021def4bf3b7e4da3b85505a37 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c4016021def4bf3b7e4da3b85505a37, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c4016021def4bf3b7e4da3b85505a37->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c4016021def4bf3b7e4da3b85505a37, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_4c4016021def4bf3b7e4da3b85505a37, type_description ,par_self );

    // Release cached frame.
    if ( frame_4c4016021def4bf3b7e4da3b85505a37 == cache_frame_4c4016021def4bf3b7e4da3b85505a37 )
    {
        Py_DECREF( frame_4c4016021def4bf3b7e4da3b85505a37 );
    }
    cache_frame_4c4016021def4bf3b7e4da3b85505a37 = NULL;

    assertFrameObject( frame_4c4016021def4bf3b7e4da3b85505a37 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_3_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_3_close );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_4_in_waiting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_473ed340f766ed08e12c4d9454fd356c = NULL;

    struct Nuitka_FrameObject *frame_473ed340f766ed08e12c4d9454fd356c;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_473ed340f766ed08e12c4d9454fd356c, codeobj_473ed340f766ed08e12c4d9454fd356c, module_serial$serialjava, sizeof(PyObject *) );
    frame_473ed340f766ed08e12c4d9454fd356c = cache_frame_473ed340f766ed08e12c4d9454fd356c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_473ed340f766ed08e12c4d9454fd356c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_473ed340f766ed08e12c4d9454fd356c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 152;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 153;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 153;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__instream );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_473ed340f766ed08e12c4d9454fd356c->m_frame.f_lineno = 154;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_available );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_473ed340f766ed08e12c4d9454fd356c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_473ed340f766ed08e12c4d9454fd356c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_473ed340f766ed08e12c4d9454fd356c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_473ed340f766ed08e12c4d9454fd356c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_473ed340f766ed08e12c4d9454fd356c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_473ed340f766ed08e12c4d9454fd356c, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_473ed340f766ed08e12c4d9454fd356c, type_description ,par_self );

    // Release cached frame.
    if ( frame_473ed340f766ed08e12c4d9454fd356c == cache_frame_473ed340f766ed08e12c4d9454fd356c )
    {
        Py_DECREF( frame_473ed340f766ed08e12c4d9454fd356c );
    }
    cache_frame_473ed340f766ed08e12c4d9454fd356c = NULL;

    assertFrameObject( frame_473ed340f766ed08e12c4d9454fd356c );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_4_in_waiting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_4_in_waiting );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_5_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_read = NULL;
    PyObject *var_x = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_GtE_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_str_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d50c95c358dcf6e069ff743a708165f4 = NULL;

    struct Nuitka_FrameObject *frame_d50c95c358dcf6e069ff743a708165f4;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d50c95c358dcf6e069ff743a708165f4, codeobj_d50c95c358dcf6e069ff743a708165f4, module_serial$serialjava, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_d50c95c358dcf6e069ff743a708165f4 = cache_frame_d50c95c358dcf6e069ff743a708165f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d50c95c358dcf6e069ff743a708165f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d50c95c358dcf6e069ff743a708165f4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 162;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 163;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 163;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = BYTEARRAY_COPY( const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e );
    assert( var_read == NULL );
    var_read = tmp_assign_source_1;

    tmp_compare_left_1 = par_size;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    loop_start_1:;
    tmp_len_arg_1 = var_read;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    assert( tmp_compare_left_2 != NULL );
    tmp_compare_right_2 = par_size;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 166;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__instream );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    frame_d50c95c358dcf6e069ff743a708165f4->m_frame.f_lineno = 167;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_read );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = var_x;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = const_int_neg_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_timeout );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_int_0;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 169;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    goto loop_end_1;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_called_instance_2 = var_read;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_1 = var_x;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d50c95c358dcf6e069ff743a708165f4->m_frame.f_lineno = 172;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    branch_no_2:;
    tmp_str_arg_1 = var_read;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_return_value = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d50c95c358dcf6e069ff743a708165f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d50c95c358dcf6e069ff743a708165f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d50c95c358dcf6e069ff743a708165f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d50c95c358dcf6e069ff743a708165f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d50c95c358dcf6e069ff743a708165f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d50c95c358dcf6e069ff743a708165f4, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_d50c95c358dcf6e069ff743a708165f4, type_description ,par_self, par_size, var_read, var_x );

    // Release cached frame.
    if ( frame_d50c95c358dcf6e069ff743a708165f4 == cache_frame_d50c95c358dcf6e069ff743a708165f4 )
    {
        Py_DECREF( frame_d50c95c358dcf6e069ff743a708165f4 );
    }
    cache_frame_d50c95c358dcf6e069ff743a708165f4 = NULL;

    assertFrameObject( frame_d50c95c358dcf6e069ff743a708165f4 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_5_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)var_read );
    Py_DECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_5_read );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_6_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_eb514d4f3c0bfe6d42e52f1fe170f839 = NULL;

    struct Nuitka_FrameObject *frame_eb514d4f3c0bfe6d42e52f1fe170f839;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb514d4f3c0bfe6d42e52f1fe170f839, codeobj_eb514d4f3c0bfe6d42e52f1fe170f839, module_serial$serialjava, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_eb514d4f3c0bfe6d42e52f1fe170f839 = cache_frame_eb514d4f3c0bfe6d42e52f1fe170f839;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb514d4f3c0bfe6d42e52f1fe170f839 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb514d4f3c0bfe6d42e52f1fe170f839 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 177;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 178;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 178;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_data;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = const_tuple_type_str_type_bytearray_tuple;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = const_str_digest_f98c54fafbe7abdb3afa3affc3debdab;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = (PyObject *)&PyString_Type;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_type_arg_1 = par_data;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_tuple_element_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_tuple_element_1 != NULL );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_eb514d4f3c0bfe6d42e52f1fe170f839->m_frame.f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 180;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__outstream );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_data;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_eb514d4f3c0bfe6d42e52f1fe170f839->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_write, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_len_arg_1 = par_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_return_value = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb514d4f3c0bfe6d42e52f1fe170f839 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb514d4f3c0bfe6d42e52f1fe170f839 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb514d4f3c0bfe6d42e52f1fe170f839 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb514d4f3c0bfe6d42e52f1fe170f839, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb514d4f3c0bfe6d42e52f1fe170f839->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb514d4f3c0bfe6d42e52f1fe170f839, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_eb514d4f3c0bfe6d42e52f1fe170f839, type_description ,par_self, par_data );

    // Release cached frame.
    if ( frame_eb514d4f3c0bfe6d42e52f1fe170f839 == cache_frame_eb514d4f3c0bfe6d42e52f1fe170f839 )
    {
        Py_DECREF( frame_eb514d4f3c0bfe6d42e52f1fe170f839 );
    }
    cache_frame_eb514d4f3c0bfe6d42e52f1fe170f839 = NULL;

    assertFrameObject( frame_eb514d4f3c0bfe6d42e52f1fe170f839 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_6_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_6_write );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_7_reset_input_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5613b1af6f20583d22de65ec912100b7 = NULL;

    struct Nuitka_FrameObject *frame_5613b1af6f20583d22de65ec912100b7;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5613b1af6f20583d22de65ec912100b7, codeobj_5613b1af6f20583d22de65ec912100b7, module_serial$serialjava, sizeof(PyObject *) );
    frame_5613b1af6f20583d22de65ec912100b7 = cache_frame_5613b1af6f20583d22de65ec912100b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5613b1af6f20583d22de65ec912100b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5613b1af6f20583d22de65ec912100b7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 186;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 187;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 187;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__instream );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_skip );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__instream );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 188;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_5613b1af6f20583d22de65ec912100b7->m_frame.f_lineno = 188;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_available );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 188;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_5613b1af6f20583d22de65ec912100b7->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5613b1af6f20583d22de65ec912100b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5613b1af6f20583d22de65ec912100b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5613b1af6f20583d22de65ec912100b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5613b1af6f20583d22de65ec912100b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5613b1af6f20583d22de65ec912100b7, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_5613b1af6f20583d22de65ec912100b7, type_description ,par_self );

    // Release cached frame.
    if ( frame_5613b1af6f20583d22de65ec912100b7 == cache_frame_5613b1af6f20583d22de65ec912100b7 )
    {
        Py_DECREF( frame_5613b1af6f20583d22de65ec912100b7 );
    }
    cache_frame_5613b1af6f20583d22de65ec912100b7 = NULL;

    assertFrameObject( frame_5613b1af6f20583d22de65ec912100b7 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_7_reset_input_buffer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_7_reset_input_buffer );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_8_reset_output_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2d77bd288e68e6b4a74eac04841eb261 = NULL;

    struct Nuitka_FrameObject *frame_2d77bd288e68e6b4a74eac04841eb261;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d77bd288e68e6b4a74eac04841eb261, codeobj_2d77bd288e68e6b4a74eac04841eb261, module_serial$serialjava, sizeof(PyObject *) );
    frame_2d77bd288e68e6b4a74eac04841eb261 = cache_frame_2d77bd288e68e6b4a74eac04841eb261;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d77bd288e68e6b4a74eac04841eb261 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d77bd288e68e6b4a74eac04841eb261 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 195;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 196;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 196;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__outstream );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_2d77bd288e68e6b4a74eac04841eb261->m_frame.f_lineno = 197;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flush );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d77bd288e68e6b4a74eac04841eb261 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d77bd288e68e6b4a74eac04841eb261 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d77bd288e68e6b4a74eac04841eb261, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d77bd288e68e6b4a74eac04841eb261->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d77bd288e68e6b4a74eac04841eb261, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_2d77bd288e68e6b4a74eac04841eb261, type_description ,par_self );

    // Release cached frame.
    if ( frame_2d77bd288e68e6b4a74eac04841eb261 == cache_frame_2d77bd288e68e6b4a74eac04841eb261 )
    {
        Py_DECREF( frame_2d77bd288e68e6b4a74eac04841eb261 );
    }
    cache_frame_2d77bd288e68e6b4a74eac04841eb261 = NULL;

    assertFrameObject( frame_2d77bd288e68e6b4a74eac04841eb261 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_8_reset_output_buffer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_8_reset_output_buffer );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_9_send_break( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_duration = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_14b795ffd70488e67cd548df42fe1678 = NULL;

    struct Nuitka_FrameObject *frame_14b795ffd70488e67cd548df42fe1678;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_14b795ffd70488e67cd548df42fe1678, codeobj_14b795ffd70488e67cd548df42fe1678, module_serial$serialjava, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_14b795ffd70488e67cd548df42fe1678 = cache_frame_14b795ffd70488e67cd548df42fe1678;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_14b795ffd70488e67cd548df42fe1678 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_14b795ffd70488e67cd548df42fe1678 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 201;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 202;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 202;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sPort );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sendBreak );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = par_duration;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_float_1000_0;
    tmp_args_element_name_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 203;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_14b795ffd70488e67cd548df42fe1678->m_frame.f_lineno = 203;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14b795ffd70488e67cd548df42fe1678 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14b795ffd70488e67cd548df42fe1678 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_14b795ffd70488e67cd548df42fe1678, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_14b795ffd70488e67cd548df42fe1678->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_14b795ffd70488e67cd548df42fe1678, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_14b795ffd70488e67cd548df42fe1678, type_description ,par_self, par_duration );

    // Release cached frame.
    if ( frame_14b795ffd70488e67cd548df42fe1678 == cache_frame_14b795ffd70488e67cd548df42fe1678 )
    {
        Py_DECREF( frame_14b795ffd70488e67cd548df42fe1678 );
    }
    cache_frame_14b795ffd70488e67cd548df42fe1678 = NULL;

    assertFrameObject( frame_14b795ffd70488e67cd548df42fe1678 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_9_send_break );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_9_send_break );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_10__update_break_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_cf81f144a31fda267c021c84647db4e2 = NULL;

    struct Nuitka_FrameObject *frame_cf81f144a31fda267c021c84647db4e2;

    char const *type_description;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cf81f144a31fda267c021c84647db4e2, codeobj_cf81f144a31fda267c021c84647db4e2, module_serial$serialjava, sizeof(PyObject *) );
    frame_cf81f144a31fda267c021c84647db4e2 = cache_frame_cf81f144a31fda267c021c84647db4e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cf81f144a31fda267c021c84647db4e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cf81f144a31fda267c021c84647db4e2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fd );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 208;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 208;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SerialException" );
        exception_tb = NULL;

        exception_lineno = 209;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    frame_cf81f144a31fda267c021c84647db4e2->m_frame.f_lineno = 209;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_76b328aecf6e0180e1401f2c7b20c24e_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 209;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf81f144a31fda267c021c84647db4e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf81f144a31fda267c021c84647db4e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cf81f144a31fda267c021c84647db4e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cf81f144a31fda267c021c84647db4e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cf81f144a31fda267c021c84647db4e2, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_cf81f144a31fda267c021c84647db4e2, type_description ,par_self );

    // Release cached frame.
    if ( frame_cf81f144a31fda267c021c84647db4e2 == cache_frame_cf81f144a31fda267c021c84647db4e2 )
    {
        Py_DECREF( frame_cf81f144a31fda267c021c84647db4e2 );
    }
    cache_frame_cf81f144a31fda267c021c84647db4e2 = NULL;

    assertFrameObject( frame_cf81f144a31fda267c021c84647db4e2 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_10__update_break_state );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_10__update_break_state );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_11__update_rts_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e0b22f22571db5c597d5e27cf5b28e28 = NULL;

    struct Nuitka_FrameObject *frame_e0b22f22571db5c597d5e27cf5b28e28;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e0b22f22571db5c597d5e27cf5b28e28, codeobj_e0b22f22571db5c597d5e27cf5b28e28, module_serial$serialjava, sizeof(PyObject *) );
    frame_e0b22f22571db5c597d5e27cf5b28e28 = cache_frame_e0b22f22571db5c597d5e27cf5b28e28;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e0b22f22571db5c597d5e27cf5b28e28 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e0b22f22571db5c597d5e27cf5b28e28 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 213;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 214;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 214;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sPort );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setRTS );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__rts_state );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 215;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_e0b22f22571db5c597d5e27cf5b28e28->m_frame.f_lineno = 215;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0b22f22571db5c597d5e27cf5b28e28 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0b22f22571db5c597d5e27cf5b28e28 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e0b22f22571db5c597d5e27cf5b28e28, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e0b22f22571db5c597d5e27cf5b28e28->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e0b22f22571db5c597d5e27cf5b28e28, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_e0b22f22571db5c597d5e27cf5b28e28, type_description ,par_self );

    // Release cached frame.
    if ( frame_e0b22f22571db5c597d5e27cf5b28e28 == cache_frame_e0b22f22571db5c597d5e27cf5b28e28 )
    {
        Py_DECREF( frame_e0b22f22571db5c597d5e27cf5b28e28 );
    }
    cache_frame_e0b22f22571db5c597d5e27cf5b28e28 = NULL;

    assertFrameObject( frame_e0b22f22571db5c597d5e27cf5b28e28 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_11__update_rts_state );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_11__update_rts_state );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_12__update_dtr_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3a000eaa5d809fa3339db353b6f20ddc = NULL;

    struct Nuitka_FrameObject *frame_3a000eaa5d809fa3339db353b6f20ddc;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3a000eaa5d809fa3339db353b6f20ddc, codeobj_3a000eaa5d809fa3339db353b6f20ddc, module_serial$serialjava, sizeof(PyObject *) );
    frame_3a000eaa5d809fa3339db353b6f20ddc = cache_frame_3a000eaa5d809fa3339db353b6f20ddc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3a000eaa5d809fa3339db353b6f20ddc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3a000eaa5d809fa3339db353b6f20ddc ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 219;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 220;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 220;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sPort );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setDTR );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__dtr_state );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 221;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_3a000eaa5d809fa3339db353b6f20ddc->m_frame.f_lineno = 221;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a000eaa5d809fa3339db353b6f20ddc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a000eaa5d809fa3339db353b6f20ddc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3a000eaa5d809fa3339db353b6f20ddc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3a000eaa5d809fa3339db353b6f20ddc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3a000eaa5d809fa3339db353b6f20ddc, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_3a000eaa5d809fa3339db353b6f20ddc, type_description ,par_self );

    // Release cached frame.
    if ( frame_3a000eaa5d809fa3339db353b6f20ddc == cache_frame_3a000eaa5d809fa3339db353b6f20ddc )
    {
        Py_DECREF( frame_3a000eaa5d809fa3339db353b6f20ddc );
    }
    cache_frame_3a000eaa5d809fa3339db353b6f20ddc = NULL;

    assertFrameObject( frame_3a000eaa5d809fa3339db353b6f20ddc );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_12__update_dtr_state );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_12__update_dtr_state );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_13_cts( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2d0baa5719bdfc33bfec2e0df896aeb0 = NULL;

    struct Nuitka_FrameObject *frame_2d0baa5719bdfc33bfec2e0df896aeb0;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d0baa5719bdfc33bfec2e0df896aeb0, codeobj_2d0baa5719bdfc33bfec2e0df896aeb0, module_serial$serialjava, sizeof(PyObject *) );
    frame_2d0baa5719bdfc33bfec2e0df896aeb0 = cache_frame_2d0baa5719bdfc33bfec2e0df896aeb0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d0baa5719bdfc33bfec2e0df896aeb0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d0baa5719bdfc33bfec2e0df896aeb0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 226;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 227;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 227;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_2d0baa5719bdfc33bfec2e0df896aeb0->m_frame.f_lineno = 228;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isCTS );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d0baa5719bdfc33bfec2e0df896aeb0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d0baa5719bdfc33bfec2e0df896aeb0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d0baa5719bdfc33bfec2e0df896aeb0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d0baa5719bdfc33bfec2e0df896aeb0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d0baa5719bdfc33bfec2e0df896aeb0, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_2d0baa5719bdfc33bfec2e0df896aeb0, type_description ,par_self );

    // Release cached frame.
    if ( frame_2d0baa5719bdfc33bfec2e0df896aeb0 == cache_frame_2d0baa5719bdfc33bfec2e0df896aeb0 )
    {
        Py_DECREF( frame_2d0baa5719bdfc33bfec2e0df896aeb0 );
    }
    cache_frame_2d0baa5719bdfc33bfec2e0df896aeb0 = NULL;

    assertFrameObject( frame_2d0baa5719bdfc33bfec2e0df896aeb0 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_13_cts );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_13_cts );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_14_dsr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5f2503d1a750ccc8e071392b44d3d33d = NULL;

    struct Nuitka_FrameObject *frame_5f2503d1a750ccc8e071392b44d3d33d;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5f2503d1a750ccc8e071392b44d3d33d, codeobj_5f2503d1a750ccc8e071392b44d3d33d, module_serial$serialjava, sizeof(PyObject *) );
    frame_5f2503d1a750ccc8e071392b44d3d33d = cache_frame_5f2503d1a750ccc8e071392b44d3d33d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5f2503d1a750ccc8e071392b44d3d33d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5f2503d1a750ccc8e071392b44d3d33d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 233;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 234;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 234;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_5f2503d1a750ccc8e071392b44d3d33d->m_frame.f_lineno = 235;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isDSR );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f2503d1a750ccc8e071392b44d3d33d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f2503d1a750ccc8e071392b44d3d33d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5f2503d1a750ccc8e071392b44d3d33d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5f2503d1a750ccc8e071392b44d3d33d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5f2503d1a750ccc8e071392b44d3d33d, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_5f2503d1a750ccc8e071392b44d3d33d, type_description ,par_self );

    // Release cached frame.
    if ( frame_5f2503d1a750ccc8e071392b44d3d33d == cache_frame_5f2503d1a750ccc8e071392b44d3d33d )
    {
        Py_DECREF( frame_5f2503d1a750ccc8e071392b44d3d33d );
    }
    cache_frame_5f2503d1a750ccc8e071392b44d3d33d = NULL;

    assertFrameObject( frame_5f2503d1a750ccc8e071392b44d3d33d );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_14_dsr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_14_dsr );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_15_ri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f2d972653dab256975625541d830907d = NULL;

    struct Nuitka_FrameObject *frame_f2d972653dab256975625541d830907d;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f2d972653dab256975625541d830907d, codeobj_f2d972653dab256975625541d830907d, module_serial$serialjava, sizeof(PyObject *) );
    frame_f2d972653dab256975625541d830907d = cache_frame_f2d972653dab256975625541d830907d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f2d972653dab256975625541d830907d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f2d972653dab256975625541d830907d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 240;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 241;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 241;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_f2d972653dab256975625541d830907d->m_frame.f_lineno = 242;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isRI );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2d972653dab256975625541d830907d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2d972653dab256975625541d830907d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f2d972653dab256975625541d830907d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f2d972653dab256975625541d830907d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f2d972653dab256975625541d830907d, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_f2d972653dab256975625541d830907d, type_description ,par_self );

    // Release cached frame.
    if ( frame_f2d972653dab256975625541d830907d == cache_frame_f2d972653dab256975625541d830907d )
    {
        Py_DECREF( frame_f2d972653dab256975625541d830907d );
    }
    cache_frame_f2d972653dab256975625541d830907d = NULL;

    assertFrameObject( frame_f2d972653dab256975625541d830907d );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_15_ri );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_15_ri );
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


static PyObject *impl_serial$serialjava$$$class_1_Serial$$$function_16_cd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_96fe9197f9d30a7d92f8beb9df085e61 = NULL;

    struct Nuitka_FrameObject *frame_96fe9197f9d30a7d92f8beb9df085e61;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_96fe9197f9d30a7d92f8beb9df085e61, codeobj_96fe9197f9d30a7d92f8beb9df085e61, module_serial$serialjava, sizeof(PyObject *) );
    frame_96fe9197f9d30a7d92f8beb9df085e61 = cache_frame_96fe9197f9d30a7d92f8beb9df085e61;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_96fe9197f9d30a7d92f8beb9df085e61 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_96fe9197f9d30a7d92f8beb9df085e61 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 247;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "portNotOpenError" );
        exception_tb = NULL;

        exception_lineno = 248;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 248;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sPort );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_96fe9197f9d30a7d92f8beb9df085e61->m_frame.f_lineno = 249;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isCD );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96fe9197f9d30a7d92f8beb9df085e61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96fe9197f9d30a7d92f8beb9df085e61 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_96fe9197f9d30a7d92f8beb9df085e61, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_96fe9197f9d30a7d92f8beb9df085e61->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_96fe9197f9d30a7d92f8beb9df085e61, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_96fe9197f9d30a7d92f8beb9df085e61, type_description ,par_self );

    // Release cached frame.
    if ( frame_96fe9197f9d30a7d92f8beb9df085e61 == cache_frame_96fe9197f9d30a7d92f8beb9df085e61 )
    {
        Py_DECREF( frame_96fe9197f9d30a7d92f8beb9df085e61 );
    }
    cache_frame_96fe9197f9d30a7d92f8beb9df085e61 = NULL;

    assertFrameObject( frame_96fe9197f9d30a7d92f8beb9df085e61 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_16_cd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava$$$class_1_Serial$$$function_16_cd );
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



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_10__update_break_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_10__update_break_state,
        const_str_plain__update_break_state,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cf81f144a31fda267c021c84647db4e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_09388aafcb6adb40da642c8223c8e7c5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_11__update_rts_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_11__update_rts_state,
        const_str_plain__update_rts_state,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e0b22f22571db5c597d5e27cf5b28e28,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_12__update_dtr_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_12__update_dtr_state,
        const_str_plain__update_dtr_state,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3a000eaa5d809fa3339db353b6f20ddc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_2b96e25c8d393fdf065d358454fdf25c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_13_cts(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_13_cts,
        const_str_plain_cts,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2d0baa5719bdfc33bfec2e0df896aeb0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_06425a8e1b9d5eab562978eb6eacf777,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_14_dsr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_14_dsr,
        const_str_plain_dsr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5f2503d1a750ccc8e071392b44d3d33d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_15_ri(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_15_ri,
        const_str_plain_ri,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f2d972653dab256975625541d830907d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_c987d57c872daa303d57e57028663dbb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_16_cd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_16_cd,
        const_str_plain_cd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_96fe9197f9d30a7d92f8beb9df085e61,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_1_open(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_1_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_39b59e3ddc8faf990fb3c8b8ef246de0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_2__reconfigurePort(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_2__reconfigurePort,
        const_str_plain__reconfigurePort,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ff4d855d93f6ec5eb4db49a3cdf84eda,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_47be6feae340d11ceea1b2be1116c946,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_3_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_3_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4c4016021def4bf3b7e4da3b85505a37,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_4_in_waiting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_4_in_waiting,
        const_str_plain_in_waiting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_473ed340f766ed08e12c4d9454fd356c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_72db89f2656c7536ad3ca9676d132571,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_5_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_5_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d50c95c358dcf6e069ff743a708165f4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_67381b97568fd04864d7225afb09d3b9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_6_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_6_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eb514d4f3c0bfe6d42e52f1fe170f839,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_59d8c08c8b321dd488f0cfd9cc30b9cf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_7_reset_input_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_7_reset_input_buffer,
        const_str_plain_reset_input_buffer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5613b1af6f20583d22de65ec912100b7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_bd2e98b142ff21c9f389c674d6946c9a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_8_reset_output_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_8_reset_output_buffer,
        const_str_plain_reset_output_buffer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2d77bd288e68e6b4a74eac04841eb261,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_14aa7bed476b499178dd8a4fa54d666e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$class_1_Serial$$$function_9_send_break( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$class_1_Serial$$$function_9_send_break,
        const_str_plain_send_break,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_14b795ffd70488e67cd548df42fe1678,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_6307284dff33304eb571a029dfac7803,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_1_my_import(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_1_my_import,
        const_str_plain_my_import,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8b0688273ff2ef6eb93d5a430b5edd7e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_2_detect_java_comm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_2_detect_java_comm,
        const_str_plain_detect_java_comm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8b4057e67f942e6d8bcd7a6854fd89b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_eb13749486bdceb9d9c45045106f689c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialjava$$$function_3_device(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialjava$$$function_3_device,
        const_str_plain_device,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fab3afce980e3b610300b72865adae87,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialjava,
        const_str_digest_56312e9e44f7e28c1876ceb5a373d82d,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$serialjava =
{
    PyModuleDef_HEAD_INIT,
    "serial.serialjava",   /* m_name */
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

MOD_INIT_DECL( serial$serialjava )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$serialjava );
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
    puts("serial.serialjava: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.serialjava: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial$serialjava" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$serialjava = Py_InitModule4(
        "serial.serialjava",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial$serialjava = PyModule_Create( &mdef_serial$serialjava );
#endif

    moduledict_serial$serialjava = (PyDictObject *)((PyModuleObject *)module_serial$serialjava)->md_dict;

    CHECK_OBJECT( module_serial$serialjava );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9ba51f6bdeff944f83e458f9b58790b4, module_serial$serialjava );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial$serialjava );

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
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    tmp_outline_return_value_1 = NULL;
    struct Nuitka_FrameObject *frame_9b0808b9ff43da7ac1a3324aea8a9d93;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_5897a00b5e658aa4dd53db30760bdb06;
    UPDATE_STRING_DICT0( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_9b0808b9ff43da7ac1a3324aea8a9d93 = MAKE_MODULE_FRAME( codeobj_9b0808b9ff43da7ac1a3324aea8a9d93, module_serial$serialjava );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_9b0808b9ff43da7ac1a3324aea8a9d93 );
    assert( Py_REFCNT( frame_9b0808b9ff43da7ac1a3324aea8a9d93 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
    tmp_globals_name_1 = ((PyModuleObject *)module_serial$serialjava)->md_dict;
    tmp_locals_name_1 = ((PyModuleObject *)module_serial$serialjava)->md_dict;
    tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
    frame_9b0808b9ff43da7ac1a3324aea8a9d93->m_frame.f_lineno = 10;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_serial$serialjava, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_FUNCTION_serial$serialjava$$$function_1_my_import(  );
    UPDATE_STRING_DICT1( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_my_import, tmp_assign_source_3 );
    tmp_assign_source_4 = MAKE_FUNCTION_serial$serialjava$$$function_2_detect_java_comm(  );
    UPDATE_STRING_DICT1( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_detect_java_comm, tmp_assign_source_4 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_detect_java_comm );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_detect_java_comm );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "detect_java_comm" );
        exception_tb = NULL;

        exception_lineno = 36;

        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LIST_COPY( const_list_75856efb0ecca7fbce58d69489689c75_list );
    frame_9b0808b9ff43da7ac1a3324aea8a9d93->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_comm, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_serial$serialjava$$$function_3_device(  );
    UPDATE_STRING_DICT1( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_device, tmp_assign_source_6 );
    // Tried code:
    tmp_assign_source_7 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_SerialBase );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialBase );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SerialBase" );
        exception_tb = NULL;

        exception_lineno = 53;

        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_7;

    tmp_assign_source_8 = impl_serial$serialjava$$$class_1_Serial( NULL );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_8;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_9 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_1;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_10;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_3;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava );
    return MOD_RETURN_VALUE( NULL );
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

    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_1 != NULL );
    goto try_return_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialjava );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialjava );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_9 = tmp_outline_return_value_1;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_9;

    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_1 = const_str_plain_Serial;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_9b0808b9ff43da7ac1a3324aea8a9d93->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_11;

    goto try_end_1;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b0808b9ff43da7ac1a3324aea8a9d93 );
#endif
    popFrameStack();

    assertFrameObject( frame_9b0808b9ff43da7ac1a3324aea8a9d93 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b0808b9ff43da7ac1a3324aea8a9d93 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9b0808b9ff43da7ac1a3324aea8a9d93, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9b0808b9ff43da7ac1a3324aea8a9d93->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9b0808b9ff43da7ac1a3324aea8a9d93, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_12 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_12 );
    UPDATE_STRING_DICT0( moduledict_serial$serialjava, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_12 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_serial$serialjava );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
