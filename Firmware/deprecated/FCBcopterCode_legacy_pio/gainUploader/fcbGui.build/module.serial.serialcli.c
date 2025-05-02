/* Generated code for Python source for module 'serial.serialcli'
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

/* The _module_serial$serialcli is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$serialcli;
PyDictObject *moduledict_serial$serialcli;

/* The module constants used, if any. */
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_reset_input_buffer;
extern PyObject *const_str_digest_bd2e98b142ff21c9f389c674d6946c9a;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_msg_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218;
static PyObject *const_str_digest_a3cfca8a8e05d3d04838f7526d9fe242;
static PyObject *const_str_plain_BreakState;
extern PyObject *const_str_plain__rts_state;
extern PyObject *const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_STOPBITS_ONE_POINT_FIVE;
static PyObject *const_str_plain_Two;
extern PyObject *const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple;
extern PyObject *const_str_plain_read;
static PyObject *const_str_plain_One;
extern PyObject *const_int_pos_75;
extern PyObject *const_str_plain_in_waiting;
static PyObject *const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple;
extern PyObject *const_int_pos_200;
extern PyObject *const_str_plain__dtr_state;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_cts;
static PyObject *const_str_digest_0d38497bfe7c04f466ec0cb6cfde083e;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_STOPBITS_TWO;
extern PyObject *const_tuple_5aee5ca7adb77075f0cc1cb4927b0a43_tuple;
static PyObject *const_str_plain_CtsHolding;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain__port;
extern PyObject *const_int_pos_110;
extern PyObject *const_str_plain__baudrate;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain__port_handle;
extern PyObject *const_str_plain__rtscts;
static PyObject *const_str_plain_RequestToSend;
extern PyObject *const_str_plain_ri;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_digest_72db89f2656c7536ad3ca9676d132571;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_str_plain_BAUDRATES;
static PyObject *const_tuple_str_plain_self_str_plain_e_tuple;
static PyObject *const_str_plain_as_byte_array;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_digest_06425a8e1b9d5eab562978eb6eacf777;
extern PyObject *const_str_plain_PARITY_EVEN;
static PyObject *const_str_digest_b06d534de12d92bc7ff7632e40ce2608;
extern PyObject *const_int_pos_19200;
static PyObject *const_str_plain_ReadTimeout;
extern PyObject *const_str_plain_portstr;
static PyObject *const_str_plain_ReadByte;
static PyObject *const_str_plain_IO;
extern PyObject *const_str_plain__reconfigure_port;
extern PyObject *const_int_pos_600;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_reset_output_buffer;
extern PyObject *const_str_plain_writeTimeoutError;
static PyObject *const_str_plain_Byte;
static PyObject *const_str_plain_TimeoutException;
extern PyObject *const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc;
extern PyObject *const_str_plain_Odd;
static PyObject *const_str_plain_RtsEnable;
extern PyObject *const_str_digest_a41f7446b10852b7fa7917c8946aa5e1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_SerialBase;
extern PyObject *const_str_digest_2b96e25c8d393fdf065d358454fdf25c;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_7;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_134;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8;
static PyObject *const_str_plain_DsrHolding;
extern PyObject *const_str_plain_PARITY_SPACE;
extern PyObject *const_str_plain___module__;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain__timeout;
extern PyObject *const_str_plain_dsr;
extern PyObject *const_str_plain__bytesize;
extern PyObject *const_str_plain_portNotOpenError;
extern PyObject *const_str_digest_c987d57c872daa303d57e57028663dbb;
static PyObject *const_str_plain_DataBits;
extern PyObject *const_str_digest_ca5d450d1c32d53f6bfc010c234e26bd;
extern PyObject *const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple;
extern PyObject *const_int_pos_4800;
extern PyObject *const_str_plain__write_timeout;
static PyObject *const_str_digest_3fd5154979a26655e9349e6e2691935b;
static PyObject *const_str_plain_string;
extern PyObject *const_str_plain_Serial;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_digest_145bf772d86c3cb38f291d317430df01;
extern PyObject *const_str_plain_StopBits;
static PyObject *const_str_plain_XOnXOff;
extern PyObject *const_int_pos_300;
static PyObject *const_str_plain_BytesToRead;
extern PyObject *const_str_plain__xonxoff;
extern PyObject *const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9;
static PyObject *const_str_plain_RequestToSendXOnXOff;
extern PyObject *const_str_plain_Parity;
static PyObject *const_str_plain_DtrEnable;
extern PyObject *const_str_plain__update_break_state;
static PyObject *const_str_plain_System;
extern PyObject *const_str_plain_SEVENBITS;
static PyObject *const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple;
static PyObject *const_str_plain_InvalidOperationException;
static PyObject *const_str_plain_DiscardInBuffer;
extern PyObject *const_str_plain_STOPBITS_ONE;
static PyObject *const_str_digest_62fd83f650899ac7d4fc07ed944eccec;
static PyObject *const_str_digest_38086bdc3fad8f6ffed0ae55cb1f1a49;
extern PyObject *const_str_plain_SerialException;
extern PyObject *const_str_plain_SerialPort;
static PyObject *const_str_digest_78056270b5e1d9467b1949982f3c3271;
extern PyObject *const_str_digest_14aa7bed476b499178dd8a4fa54d666e;
extern PyObject *const_int_pos_150;
static PyObject *const_str_plain_InfiniteTimeout;
static PyObject *const_str_plain_Handshake;
extern PyObject *const_int_pos_57600;
extern PyObject *const_str_plain_BaudRate;
static PyObject *const_str_plain_Write;
extern PyObject *const_str_plain_SIXBITS;
extern PyObject *const_str_digest_59d8c08c8b321dd488f0cfd9cc30b9cf;
extern PyObject *const_str_plain_x;
extern PyObject *const_int_pos_38400;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_int_pos_1200;
static PyObject *const_str_plain_WriteTimeout;
extern PyObject *const_int_pos_115200;
extern PyObject *const_str_plain__update_dtr_state;
extern PyObject *const_str_plain_open;
extern PyObject *const_int_pos_9600;
static PyObject *const_str_plain_OnePointFive;
extern PyObject *const_str_plain_cd;
extern PyObject *const_int_pos_1800;
extern PyObject *const_str_plain__dsrdtr;
extern PyObject *const_str_plain__parity;
static PyObject *const_str_digest_e52ef25c86ecc45d727cc8ac51fe36f4;
static PyObject *const_str_plain_CDHolding;
static PyObject *const_str_plain_DiscardOutBuffer;
extern PyObject *const_str_plain__break_state;
extern PyObject *const_str_plain_PARITY_MARK;
static PyObject *const_str_plain_sab;
extern PyObject *const_str_digest_088e326eed737fbd2d5feedf060c96ff;
extern PyObject *const_str_plain_FIVEBITS;
extern PyObject *const_int_pos_50;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_Mark;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_PARITY_NONE;
extern PyObject *const_str_plain_is_open;
static PyObject *const_str_plain_Close;
static PyObject *const_str_plain_Array;
extern PyObject *const_str_plain__stopbits;
extern PyObject *const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple;
extern PyObject *const_str_plain_Space;
static PyObject *const_str_plain_Open;
static PyObject *const_tuple_str_plain_string_str_plain_x_tuple;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain__update_rts_state;
extern PyObject *const_str_plain_Even;
extern PyObject *const_str_digest_67381b97568fd04864d7225afb09d3b9;
extern PyObject *const_str_digest_47be6feae340d11ceea1b2be1116c946;
static PyObject *const_str_plain_Ports;
extern PyObject *const_str_plain_EIGHTBITS;
extern PyObject *const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
extern PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
extern PyObject *const_str_plain_PARITY_ODD;
static PyObject *const_str_plain_serialcli;
extern PyObject *const_int_pos_2400;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_self_str_plain_msg_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_msg_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_msg_tuple, 1, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_digest_a3cfca8a8e05d3d04838f7526d9fe242 = UNSTREAM_STRING( &constant_bin[ 1632 ], 35, 0 );
    const_str_plain_BreakState = UNSTREAM_STRING( &constant_bin[ 1667 ], 10, 1 );
    const_str_plain_Two = UNSTREAM_STRING( &constant_bin[ 1677 ], 3, 1 );
    const_str_plain_One = UNSTREAM_STRING( &constant_bin[ 1680 ], 3, 1 );
    const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 1, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 2, const_str_plain_BAUDRATES ); Py_INCREF( const_str_plain_BAUDRATES );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 3, const_str_plain_open ); Py_INCREF( const_str_plain_open );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 4, const_str_plain__reconfigure_port ); Py_INCREF( const_str_plain__reconfigure_port );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 5, const_str_plain_close ); Py_INCREF( const_str_plain_close );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 6, const_str_plain_in_waiting ); Py_INCREF( const_str_plain_in_waiting );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 7, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 8, const_str_plain_write ); Py_INCREF( const_str_plain_write );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 9, const_str_plain_reset_input_buffer ); Py_INCREF( const_str_plain_reset_input_buffer );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 10, const_str_plain_reset_output_buffer ); Py_INCREF( const_str_plain_reset_output_buffer );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 11, const_str_plain__update_break_state ); Py_INCREF( const_str_plain__update_break_state );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 12, const_str_plain__update_rts_state ); Py_INCREF( const_str_plain__update_rts_state );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 13, const_str_plain__update_dtr_state ); Py_INCREF( const_str_plain__update_dtr_state );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 14, const_str_plain_cts ); Py_INCREF( const_str_plain_cts );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 15, const_str_plain_dsr ); Py_INCREF( const_str_plain_dsr );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 16, const_str_plain_ri ); Py_INCREF( const_str_plain_ri );
    PyTuple_SET_ITEM( const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 17, const_str_plain_cd ); Py_INCREF( const_str_plain_cd );
    const_str_digest_0d38497bfe7c04f466ec0cb6cfde083e = UNSTREAM_STRING( &constant_bin[ 1683 ], 27, 0 );
    const_str_plain_CtsHolding = UNSTREAM_STRING( &constant_bin[ 1710 ], 10, 1 );
    const_str_plain_RequestToSend = UNSTREAM_STRING( &constant_bin[ 1720 ], 13, 1 );
    const_tuple_str_plain_self_str_plain_e_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_tuple, 1, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain_as_byte_array = UNSTREAM_STRING( &constant_bin[ 1733 ], 13, 1 );
    const_str_digest_b06d534de12d92bc7ff7632e40ce2608 = UNSTREAM_STRING( &constant_bin[ 1746 ], 66, 0 );
    const_str_plain_ReadTimeout = UNSTREAM_STRING( &constant_bin[ 1812 ], 11, 1 );
    const_str_plain_ReadByte = UNSTREAM_STRING( &constant_bin[ 1823 ], 8, 1 );
    const_str_plain_IO = UNSTREAM_STRING( &constant_bin[ 1540 ], 2, 1 );
    const_str_plain_Byte = UNSTREAM_STRING( &constant_bin[ 1827 ], 4, 1 );
    const_str_plain_TimeoutException = UNSTREAM_STRING( &constant_bin[ 1831 ], 16, 1 );
    const_str_plain_RtsEnable = UNSTREAM_STRING( &constant_bin[ 1847 ], 9, 1 );
    const_str_plain_DsrHolding = UNSTREAM_STRING( &constant_bin[ 1856 ], 10, 1 );
    const_str_plain_DataBits = UNSTREAM_STRING( &constant_bin[ 1866 ], 8, 1 );
    const_str_digest_3fd5154979a26655e9349e6e2691935b = UNSTREAM_STRING( &constant_bin[ 1874 ], 35, 0 );
    const_str_plain_string = UNSTREAM_STRING( &constant_bin[ 1909 ], 6, 1 );
    const_str_plain_XOnXOff = UNSTREAM_STRING( &constant_bin[ 1915 ], 7, 1 );
    const_str_plain_BytesToRead = UNSTREAM_STRING( &constant_bin[ 1922 ], 11, 1 );
    const_str_plain_RequestToSendXOnXOff = UNSTREAM_STRING( &constant_bin[ 1933 ], 20, 1 );
    const_str_plain_DtrEnable = UNSTREAM_STRING( &constant_bin[ 1953 ], 9, 1 );
    const_str_plain_System = UNSTREAM_STRING( &constant_bin[ 1962 ], 6, 1 );
    const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_plain_InvalidOperationException = UNSTREAM_STRING( &constant_bin[ 1968 ], 25, 1 );
    const_str_plain_DiscardInBuffer = UNSTREAM_STRING( &constant_bin[ 1993 ], 15, 1 );
    const_str_digest_62fd83f650899ac7d4fc07ed944eccec = UNSTREAM_STRING( &constant_bin[ 2008 ], 26, 0 );
    const_str_digest_38086bdc3fad8f6ffed0ae55cb1f1a49 = UNSTREAM_STRING( &constant_bin[ 2034 ], 84, 0 );
    const_str_digest_78056270b5e1d9467b1949982f3c3271 = UNSTREAM_STRING( &constant_bin[ 2118 ], 15, 0 );
    const_str_plain_InfiniteTimeout = UNSTREAM_STRING( &constant_bin[ 2133 ], 15, 1 );
    const_str_plain_Handshake = UNSTREAM_STRING( &constant_bin[ 2148 ], 9, 1 );
    const_str_plain_Write = UNSTREAM_STRING( &constant_bin[ 2157 ], 5, 1 );
    const_str_plain_WriteTimeout = UNSTREAM_STRING( &constant_bin[ 2162 ], 12, 1 );
    const_str_plain_OnePointFive = UNSTREAM_STRING( &constant_bin[ 2174 ], 12, 1 );
    const_str_digest_e52ef25c86ecc45d727cc8ac51fe36f4 = UNSTREAM_STRING( &constant_bin[ 2186 ], 41, 0 );
    const_str_plain_CDHolding = UNSTREAM_STRING( &constant_bin[ 2227 ], 9, 1 );
    const_str_plain_DiscardOutBuffer = UNSTREAM_STRING( &constant_bin[ 2236 ], 16, 1 );
    const_str_plain_sab = UNSTREAM_STRING( &constant_bin[ 2252 ], 3, 1 );
    const_str_plain_Close = UNSTREAM_STRING( &constant_bin[ 2255 ], 5, 1 );
    const_str_plain_Array = UNSTREAM_STRING( &constant_bin[ 2260 ], 5, 1 );
    const_str_plain_Open = UNSTREAM_STRING( &constant_bin[ 2265 ], 4, 1 );
    const_tuple_str_plain_string_str_plain_x_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_str_plain_x_tuple, 0, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_str_plain_x_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_Ports = UNSTREAM_STRING( &constant_bin[ 411 ], 5, 1 );
    const_str_plain_serialcli = UNSTREAM_STRING( &constant_bin[ 1800 ], 9, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$serialcli( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_19e35ed895ab81bbaf206edcd9e8edc7;
static PyCodeObject *codeobj_8eaa06ce9c0041cb437ec4b5e1d9c292;
static PyCodeObject *codeobj_dd233eb6e60d85d76fecef3f631c6daa;
static PyCodeObject *codeobj_cb0c8f715bffc69475df809dec708e3a;
static PyCodeObject *codeobj_cbf9cb8a5deae198452ef0b70596b8cf;
static PyCodeObject *codeobj_ec2cfa8a45bbc0e07cc294a64a3ca0fd;
static PyCodeObject *codeobj_72bb37c78f966a6c51cd31ff8b671317;
static PyCodeObject *codeobj_f17baec1f354bda108daf71a63a71f24;
static PyCodeObject *codeobj_c8c4cbca6a23bedb3bd76b75819e12f2;
static PyCodeObject *codeobj_cfef913a2880e05c7c78e4eff89ea6f8;
static PyCodeObject *codeobj_e2d88408c4d56dda41160303d8d2b7fe;
static PyCodeObject *codeobj_ed32e38df8bf42d8ac636a1c3b7838e5;
static PyCodeObject *codeobj_914195006f982708d37359fe5aeadd8e;
static PyCodeObject *codeobj_8eae9a9f0ec1ce0afae5510f2e99c506;
static PyCodeObject *codeobj_0aaac4922b6ca2eaf8add9a6fcc2ece7;
static PyCodeObject *codeobj_a5d09ed682f62228fd1ef31d6cc4fae9;
static PyCodeObject *codeobj_d761aa24490bbb8fcc0ed6b0129ae1c1;
static PyCodeObject *codeobj_ee822752acc1958ac4870235bce538c5;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_b06d534de12d92bc7ff7632e40ce2608;
    codeobj_19e35ed895ab81bbaf206edcd9e8edc7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Serial, 23, const_tuple_8ba8bba03bc353ec854b03475ff8f732_tuple, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_8eaa06ce9c0041cb437ec4b5e1d9c292 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reconfigure_port, 59, const_tuple_str_plain_self_str_plain_e_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dd233eb6e60d85d76fecef3f631c6daa = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_break_state, 201, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cb0c8f715bffc69475df809dec708e3a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_dtr_state, 215, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cbf9cb8a5deae198452ef0b70596b8cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_rts_state, 209, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ec2cfa8a45bbc0e07cc294a64a3ca0fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_byte_array, 19, const_tuple_str_plain_string_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_72bb37c78f966a6c51cd31ff8b671317 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cd, 243, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f17baec1f354bda108daf71a63a71f24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 131, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c8c4cbca6a23bedb3bd76b75819e12f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cts, 221, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cfef913a2880e05c7c78e4eff89ea6f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsr, 228, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e2d88408c4d56dda41160303d8d2b7fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_in_waiting, 145, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ed32e38df8bf42d8ac636a1c3b7838e5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open, 29, const_tuple_str_plain_self_str_plain_msg_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_914195006f982708d37359fe5aeadd8e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 152, const_tuple_str_plain_self_str_plain_size_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8eae9a9f0ec1ce0afae5510f2e99c506 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_input_buffer, 186, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0aaac4922b6ca2eaf8add9a6fcc2ece7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_output_buffer, 192, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a5d09ed682f62228fd1ef31d6cc4fae9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ri, 235, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d761aa24490bbb8fcc0ed6b0129ae1c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serialcli, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_ee822752acc1958ac4870235bce538c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 172, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_serial$serialcli$$$class_1_Serial( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_10__update_rts_state(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_11__update_dtr_state(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_12_cts(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_13_dsr(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_14_ri(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_15_cd(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_1_open(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_2__reconfigure_port(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_3_close(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_4_in_waiting(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_5_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_6_write(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_7_reset_input_buffer(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_8_reset_output_buffer(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_9__update_break_state(  );


static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_1_as_byte_array(  );


// The module function definitions.
static PyObject *impl_serial$serialcli$$$function_1_as_byte_array( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[ 0 ];
    PyObject *var_x = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_ord_arg_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd = NULL;

    struct Nuitka_FrameObject *frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd;

    char const *type_description;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd, codeobj_ec2cfa8a45bbc0e07cc294a64a3ca0fd, module_serial$serialcli, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd = cache_frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_sab );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sab );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sab" );
        exception_tb = NULL;

        exception_lineno = 20;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    // Tried code:
    tmp_iter_arg_1 = par_string;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description = "oo";
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_2;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

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
            type_description = "oo";
            exception_lineno = 20;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_4;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_ord_arg_1 = var_x;

    CHECK_OBJECT( tmp_ord_arg_1 );
    tmp_append_value_1 = BUILTIN_ORD( tmp_ord_arg_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description = "oo";
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description = "oo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_1_as_byte_array );
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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_1_as_byte_array );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_1 = tmp_outline_return_value_1;
    frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd, type_description ,par_string, var_x );

    // Release cached frame.
    if ( frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd == cache_frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd )
    {
        Py_DECREF( frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd );
    }
    cache_frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd = NULL;

    assertFrameObject( frame_ec2cfa8a45bbc0e07cc294a64a3ca0fd );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_1_as_byte_array );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$function_1_as_byte_array );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$serialcli$$$class_1_Serial( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var_open = NULL;
    PyObject *var__reconfigure_port = NULL;
    PyObject *var_close = NULL;
    PyObject *var_in_waiting = NULL;
    PyObject *var_read = NULL;
    PyObject *var_write = NULL;
    PyObject *var_reset_input_buffer = NULL;
    PyObject *var_reset_output_buffer = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_defaults_1;
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
    static struct Nuitka_FrameObject *cache_frame_19e35ed895ab81bbaf206edcd9e8edc7 = NULL;

    struct Nuitka_FrameObject *frame_19e35ed895ab81bbaf206edcd9e8edc7;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_1_open(  );
    assert( var_open == NULL );
    var_open = tmp_assign_source_1;

    tmp_assign_source_2 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_2__reconfigure_port(  );
    assert( var__reconfigure_port == NULL );
    var__reconfigure_port = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_3_close(  );
    assert( var_close == NULL );
    var_close = tmp_assign_source_3;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_19e35ed895ab81bbaf206edcd9e8edc7, codeobj_19e35ed895ab81bbaf206edcd9e8edc7, module_serial$serialcli, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_19e35ed895ab81bbaf206edcd9e8edc7 = cache_frame_19e35ed895ab81bbaf206edcd9e8edc7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19e35ed895ab81bbaf206edcd9e8edc7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19e35ed895ab81bbaf206edcd9e8edc7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_1 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_4_in_waiting(  );
    frame_19e35ed895ab81bbaf206edcd9e8edc7->m_frame.f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description = "NNNooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_in_waiting == NULL );
    var_in_waiting = tmp_assign_source_4;

    tmp_defaults_1 = const_tuple_int_pos_1_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_5 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_5_read( tmp_defaults_1 );
    assert( var_read == NULL );
    var_read = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_6_write(  );
    assert( var_write == NULL );
    var_write = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_7_reset_input_buffer(  );
    assert( var_reset_input_buffer == NULL );
    var_reset_input_buffer = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_8_reset_output_buffer(  );
    assert( var_reset_output_buffer == NULL );
    var_reset_output_buffer = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_9__update_break_state(  );
    assert( var__update_break_state == NULL );
    var__update_break_state = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_10__update_rts_state(  );
    assert( var__update_rts_state == NULL );
    var__update_rts_state = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_11__update_dtr_state(  );
    assert( var__update_dtr_state == NULL );
    var__update_dtr_state = tmp_assign_source_11;

    tmp_called_name_2 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_2 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_12_cts(  );
    frame_19e35ed895ab81bbaf206edcd9e8edc7->m_frame.f_lineno = 221;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description = "NNNooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cts == NULL );
    var_cts = tmp_assign_source_12;

    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_3 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_13_dsr(  );
    frame_19e35ed895ab81bbaf206edcd9e8edc7->m_frame.f_lineno = 228;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description = "NNNooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dsr == NULL );
    var_dsr = tmp_assign_source_13;

    tmp_called_name_4 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_4 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_14_ri(  );
    frame_19e35ed895ab81bbaf206edcd9e8edc7->m_frame.f_lineno = 235;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description = "NNNooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ri == NULL );
    var_ri = tmp_assign_source_14;

    tmp_called_name_5 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_5 = MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_15_cd(  );
    frame_19e35ed895ab81bbaf206edcd9e8edc7->m_frame.f_lineno = 243;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description = "NNNooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cd == NULL );
    var_cd = tmp_assign_source_15;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_19e35ed895ab81bbaf206edcd9e8edc7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19e35ed895ab81bbaf206edcd9e8edc7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19e35ed895ab81bbaf206edcd9e8edc7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19e35ed895ab81bbaf206edcd9e8edc7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19e35ed895ab81bbaf206edcd9e8edc7, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_19e35ed895ab81bbaf206edcd9e8edc7, type_description ,NULL, NULL, NULL, var_open, var__reconfigure_port, var_close, var_in_waiting, var_read, var_write, var_reset_input_buffer, var_reset_output_buffer, var__update_break_state, var__update_rts_state, var__update_dtr_state, var_cts, var_dsr, var_ri, var_cd );

    // Release cached frame.
    if ( frame_19e35ed895ab81bbaf206edcd9e8edc7 == cache_frame_19e35ed895ab81bbaf206edcd9e8edc7 )
    {
        Py_DECREF( frame_19e35ed895ab81bbaf206edcd9e8edc7 );
    }
    cache_frame_19e35ed895ab81bbaf206edcd9e8edc7 = NULL;

    assertFrameObject( frame_19e35ed895ab81bbaf206edcd9e8edc7 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = _PyDict_NewPresized( 18 );
    tmp_dict_value_1 = const_str_digest_ca5d450d1c32d53f6bfc010c234e26bd;
    tmp_dict_key_1 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = const_str_digest_e52ef25c86ecc45d727cc8ac51fe36f4;
    tmp_dict_key_2 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = const_tuple_5aee5ca7adb77075f0cc1cb4927b0a43_tuple;
    tmp_dict_key_3 = const_str_plain_BAUDRATES;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = var_open;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_open;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = var__reconfigure_port;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain__reconfigure_port;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = var_close;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_close;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = var_in_waiting;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_in_waiting;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = var_read;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_read;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = var_write;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_write;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = var_reset_input_buffer;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_reset_input_buffer;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = var_reset_output_buffer;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain_reset_output_buffer;
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_open );
    Py_DECREF( var_open );
    var_open = NULL;

    CHECK_OBJECT( (PyObject *)var__reconfigure_port );
    Py_DECREF( var__reconfigure_port );
    var__reconfigure_port = NULL;

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

    CHECK_OBJECT( (PyObject *)var__reconfigure_port );
    Py_DECREF( var__reconfigure_port );
    var__reconfigure_port = NULL;

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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_1_open( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
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
    PyObject *tmp_source_name_12;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ed32e38df8bf42d8ac636a1c3b7838e5 = NULL;

    struct Nuitka_FrameObject *frame_ed32e38df8bf42d8ac636a1c3b7838e5;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ed32e38df8bf42d8ac636a1c3b7838e5, codeobj_ed32e38df8bf42d8ac636a1c3b7838e5, module_serial$serialcli, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_ed32e38df8bf42d8ac636a1c3b7838e5 = cache_frame_ed32e38df8bf42d8ac636a1c3b7838e5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ed32e38df8bf42d8ac636a1c3b7838e5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ed32e38df8bf42d8ac636a1c3b7838e5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__port );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description = "oo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SerialException );

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

        exception_lineno = 35;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame.f_lineno = 35;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 35;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 36;
        type_description = "oo";
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SerialException );

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

        exception_lineno = 37;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame.f_lineno = 37;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 37;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;
    // Tried code:
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 39;
        type_description = "oo";
        goto try_except_handler_2;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_IO );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SerialPort );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_portstr );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 39;
        type_description = "oo";
        goto try_except_handler_2;
    }
    frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__port_handle, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 39;
        type_description = "oo";
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
    PRESERVE_FRAME_EXCEPTION( frame_ed32e38df8bf42d8ac636a1c3b7838e5 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_ed32e38df8bf42d8ac636a1c3b7838e5, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_ed32e38df8bf42d8ac636a1c3b7838e5, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_Exception;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_1 = PyThreadState_GET()->exc_value;
    assert( var_msg == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_msg = tmp_assign_source_1;

    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__port_handle, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SerialException" );
        exception_tb = NULL;

        exception_lineno = 42;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_62fd83f650899ac7d4fc07ed944eccec;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_portstr );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 42;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_msg;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame.f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 42;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame) frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_end_3:;
    // End of try:
    try_end_1:;
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__rts_state );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = Py_None;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_3 = Py_True;
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__rts_state, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__dtr_state );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = Py_None;
    tmp_is_3 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_is_3 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assattr_name_4 = Py_True;
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__dtr_state, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame.f_lineno = 50;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__reconfigure_port );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__port_handle );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame.f_lineno = 51;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_Open );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_5 = Py_True;
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_is_open, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__dsrdtr );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 53;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_called_instance_3 = par_self;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame.f_lineno = 54;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain__update_dtr_state );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_source_name_12 = par_self;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__rtscts );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 55;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_called_instance_4 = par_self;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame.f_lineno = 56;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain__update_rts_state );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    tmp_called_instance_5 = par_self;

    CHECK_OBJECT( tmp_called_instance_5 );
    frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame.f_lineno = 57;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_reset_input_buffer );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ed32e38df8bf42d8ac636a1c3b7838e5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ed32e38df8bf42d8ac636a1c3b7838e5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed32e38df8bf42d8ac636a1c3b7838e5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed32e38df8bf42d8ac636a1c3b7838e5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed32e38df8bf42d8ac636a1c3b7838e5, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_ed32e38df8bf42d8ac636a1c3b7838e5, type_description ,par_self, var_msg );

    // Release cached frame.
    if ( frame_ed32e38df8bf42d8ac636a1c3b7838e5 == cache_frame_ed32e38df8bf42d8ac636a1c3b7838e5 )
    {
        Py_DECREF( frame_ed32e38df8bf42d8ac636a1c3b7838e5 );
    }
    cache_frame_ed32e38df8bf42d8ac636a1c3b7838e5 = NULL;

    assertFrameObject( frame_ed32e38df8bf42d8ac636a1c3b7838e5 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_1_open );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_1_open );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_2__reconfigure_port( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_e = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_name_16;
    PyObject *tmp_assattr_name_17;
    PyObject *tmp_assattr_name_18;
    PyObject *tmp_assattr_name_19;
    PyObject *tmp_assattr_name_20;
    PyObject *tmp_assattr_name_21;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assattr_target_14;
    PyObject *tmp_assattr_target_15;
    PyObject *tmp_assattr_target_16;
    PyObject *tmp_assattr_target_17;
    PyObject *tmp_assattr_target_18;
    PyObject *tmp_assattr_target_19;
    PyObject *tmp_assattr_target_20;
    PyObject *tmp_assattr_target_21;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
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
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
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
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
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
    PyObject *tmp_source_name_62;
    PyObject *tmp_source_name_63;
    PyObject *tmp_source_name_64;
    PyObject *tmp_source_name_65;
    PyObject *tmp_source_name_66;
    PyObject *tmp_source_name_67;
    PyObject *tmp_source_name_68;
    PyObject *tmp_source_name_69;
    PyObject *tmp_source_name_70;
    PyObject *tmp_source_name_71;
    PyObject *tmp_source_name_72;
    PyObject *tmp_source_name_73;
    PyObject *tmp_source_name_74;
    PyObject *tmp_source_name_75;
    PyObject *tmp_source_name_76;
    PyObject *tmp_source_name_77;
    PyObject *tmp_source_name_78;
    PyObject *tmp_source_name_79;
    PyObject *tmp_source_name_80;
    PyObject *tmp_source_name_81;
    PyObject *tmp_source_name_82;
    PyObject *tmp_source_name_83;
    PyObject *tmp_source_name_84;
    PyObject *tmp_source_name_85;
    PyObject *tmp_source_name_86;
    PyObject *tmp_source_name_87;
    PyObject *tmp_source_name_88;
    PyObject *tmp_source_name_89;
    PyObject *tmp_source_name_90;
    PyObject *tmp_source_name_91;
    PyObject *tmp_source_name_92;
    PyObject *tmp_source_name_93;
    PyObject *tmp_source_name_94;
    PyObject *tmp_source_name_95;
    PyObject *tmp_source_name_96;
    PyObject *tmp_source_name_97;
    PyObject *tmp_source_name_98;
    PyObject *tmp_source_name_99;
    PyObject *tmp_source_name_100;
    PyObject *tmp_str_arg_1;
    static struct Nuitka_FrameObject *cache_frame_8eaa06ce9c0041cb437ec4b5e1d9c292 = NULL;

    struct Nuitka_FrameObject *frame_8eaa06ce9c0041cb437ec4b5e1d9c292;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8eaa06ce9c0041cb437ec4b5e1d9c292, codeobj_8eaa06ce9c0041cb437ec4b5e1d9c292, module_serial$serialcli, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_8eaa06ce9c0041cb437ec4b5e1d9c292 = cache_frame_8eaa06ce9c0041cb437ec4b5e1d9c292;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8eaa06ce9c0041cb437ec4b5e1d9c292 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8eaa06ce9c0041cb437ec4b5e1d9c292 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__port_handle );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 61;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SerialException );

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

        exception_lineno = 62;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    frame_8eaa06ce9c0041cb437ec4b5e1d9c292->m_frame.f_lineno = 62;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 62;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__timeout );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 67;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_IO );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SerialPort );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_InfiniteTimeout );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__port_handle );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 67;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ReadTimeout, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 67;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_target_1 );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__timeout );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1000;
    tmp_int_arg_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__port_handle );
    if ( tmp_assattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 69;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_ReadTimeout, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_target_2 );

        exception_lineno = 69;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_target_2 );
    branch_end_2:;
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__write_timeout );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 75;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_IO );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_SerialPort );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_InfiniteTimeout );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = par_self;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__port_handle );
    if ( tmp_assattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 75;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_WriteTimeout, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_target_3 );

        exception_lineno = 75;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_target_3 );
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_16 = par_self;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__write_timeout );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1000;
    tmp_int_arg_2 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = par_self;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_assattr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__port_handle );
    if ( tmp_assattr_target_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 77;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_WriteTimeout, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_target_4 );

        exception_lineno = 77;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_target_4 );
    branch_end_3:;
    // Tried code:
    tmp_source_name_18 = par_self;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__baudrate );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_19 = par_self;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_assattr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__port_handle );
    if ( tmp_assattr_target_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 81;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_BaudRate, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_target_5 );

        exception_lineno = 81;
        type_description = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_5 );
    Py_DECREF( tmp_assattr_target_5 );
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
    PRESERVE_FRAME_EXCEPTION( frame_8eaa06ce9c0041cb437ec4b5e1d9c292 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_8eaa06ce9c0041cb437ec4b5e1d9c292, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_8eaa06ce9c0041cb437ec4b5e1d9c292, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_IOError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description = "oo";
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
    tmp_assign_source_1 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_e = tmp_assign_source_1;

    tmp_str_arg_1 = var_e;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_make_exception_arg_1 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_8eaa06ce9c0041cb437ec4b5e1d9c292->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 84;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_8eaa06ce9c0041cb437ec4b5e1d9c292->m_frame) frame_8eaa06ce9c0041cb437ec4b5e1d9c292->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_end_4:;
    // End of try:
    try_end_1:;
    tmp_source_name_20 = par_self;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__bytesize );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_FIVEBITS );

    if (unlikely( tmp_compare_right_4 == NULL ))
    {
        tmp_compare_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIVEBITS );
    }

    if ( tmp_compare_right_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FIVEBITS" );
        exception_tb = NULL;

        exception_lineno = 86;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 86;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assattr_name_6 = const_int_pos_5;
    tmp_source_name_21 = par_self;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_assattr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__port_handle );
    if ( tmp_assattr_target_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_DataBits, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_6 );

        exception_lineno = 87;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_6 );
    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_22 = par_self;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__bytesize );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SIXBITS );

    if (unlikely( tmp_compare_right_5 == NULL ))
    {
        tmp_compare_right_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SIXBITS );
    }

    if ( tmp_compare_right_5 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SIXBITS" );
        exception_tb = NULL;

        exception_lineno = 88;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 88;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assattr_name_7 = const_int_pos_6;
    tmp_source_name_23 = par_self;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_assattr_target_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__port_handle );
    if ( tmp_assattr_target_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_DataBits, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_7 );

        exception_lineno = 89;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_7 );
    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_24 = par_self;

    CHECK_OBJECT( tmp_source_name_24 );
    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__bytesize );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SEVENBITS );

    if (unlikely( tmp_compare_right_6 == NULL ))
    {
        tmp_compare_right_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SEVENBITS );
    }

    if ( tmp_compare_right_6 == NULL )
    {
        Py_DECREF( tmp_compare_left_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SEVENBITS" );
        exception_tb = NULL;

        exception_lineno = 90;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        exception_lineno = 90;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assattr_name_8 = const_int_pos_7;
    tmp_source_name_25 = par_self;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_assattr_target_8 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__port_handle );
    if ( tmp_assattr_target_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_DataBits, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_8 );

        exception_lineno = 91;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_8 );
    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_26 = par_self;

    CHECK_OBJECT( tmp_source_name_26 );
    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__bytesize );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_EIGHTBITS );

    if (unlikely( tmp_compare_right_7 == NULL ))
    {
        tmp_compare_right_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EIGHTBITS );
    }

    if ( tmp_compare_right_7 == NULL )
    {
        Py_DECREF( tmp_compare_left_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "EIGHTBITS" );
        exception_tb = NULL;

        exception_lineno = 92;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 92;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_7 );
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assattr_name_9 = const_int_pos_8;
    tmp_source_name_27 = par_self;

    CHECK_OBJECT( tmp_source_name_27 );
    tmp_assattr_target_9 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__port_handle );
    if ( tmp_assattr_target_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_DataBits, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_9 );

        exception_lineno = 93;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_9 );
    goto branch_end_8;
    branch_no_8:;
    tmp_left_name_3 = const_str_digest_a3cfca8a8e05d3d04838f7526d9fe242;
    tmp_source_name_28 = par_self;

    CHECK_OBJECT( tmp_source_name_28 );
    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain__bytesize );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_8eaa06ce9c0041cb437ec4b5e1d9c292->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 95;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    tmp_source_name_29 = par_self;

    CHECK_OBJECT( tmp_source_name_29 );
    tmp_compare_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__parity );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_PARITY_NONE );

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

        exception_lineno = 97;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 97;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_cmp_Eq_5 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 98;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_IO );
    if ( tmp_source_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_31 );
    if ( tmp_source_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_Parity );
    Py_DECREF( tmp_source_name_30 );
    if ( tmp_getattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_1 = const_str_plain_None;
    tmp_assattr_name_10 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    Py_DECREF( tmp_getattr_target_1 );
    if ( tmp_assattr_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_33 = par_self;

    CHECK_OBJECT( tmp_source_name_33 );
    tmp_assattr_target_10 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain__port_handle );
    if ( tmp_assattr_target_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        exception_lineno = 98;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_Parity, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );
        Py_DECREF( tmp_assattr_target_10 );

        exception_lineno = 98;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    Py_DECREF( tmp_assattr_target_10 );
    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_34 = par_self;

    CHECK_OBJECT( tmp_source_name_34 );
    tmp_compare_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain__parity );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_PARITY_EVEN );

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

        exception_lineno = 99;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        exception_lineno = 99;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_9 );
    if ( tmp_cmp_Eq_6 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_38 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 100;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_IO );
    if ( tmp_source_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_37 );
    if ( tmp_source_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_Parity );
    Py_DECREF( tmp_source_name_36 );
    if ( tmp_source_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_Even );
    Py_DECREF( tmp_source_name_35 );
    if ( tmp_assattr_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_39 = par_self;

    CHECK_OBJECT( tmp_source_name_39 );
    tmp_assattr_target_11 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain__port_handle );
    if ( tmp_assattr_target_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 100;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_Parity, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );
        Py_DECREF( tmp_assattr_target_11 );

        exception_lineno = 100;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    Py_DECREF( tmp_assattr_target_11 );
    goto branch_end_10;
    branch_no_10:;
    tmp_source_name_40 = par_self;

    CHECK_OBJECT( tmp_source_name_40 );
    tmp_compare_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain__parity );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_PARITY_ODD );

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

        exception_lineno = 101;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        exception_lineno = 101;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_cmp_Eq_7 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 102;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_IO );
    if ( tmp_source_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_43 );
    if ( tmp_source_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_Parity );
    Py_DECREF( tmp_source_name_42 );
    if ( tmp_source_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_Odd );
    Py_DECREF( tmp_source_name_41 );
    if ( tmp_assattr_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_45 = par_self;

    CHECK_OBJECT( tmp_source_name_45 );
    tmp_assattr_target_12 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain__port_handle );
    if ( tmp_assattr_target_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 102;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_Parity, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );
        Py_DECREF( tmp_assattr_target_12 );

        exception_lineno = 102;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    Py_DECREF( tmp_assattr_target_12 );
    goto branch_end_11;
    branch_no_11:;
    tmp_source_name_46 = par_self;

    CHECK_OBJECT( tmp_source_name_46 );
    tmp_compare_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain__parity );
    if ( tmp_compare_left_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_PARITY_MARK );

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

        exception_lineno = 103;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_8 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_11 );

        exception_lineno = 103;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_11 );
    if ( tmp_cmp_Eq_8 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_50 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_50 == NULL ))
    {
        tmp_source_name_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_50 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 104;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_49 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_IO );
    if ( tmp_source_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_49 );
    if ( tmp_source_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_Parity );
    Py_DECREF( tmp_source_name_48 );
    if ( tmp_source_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_Mark );
    Py_DECREF( tmp_source_name_47 );
    if ( tmp_assattr_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_51 = par_self;

    CHECK_OBJECT( tmp_source_name_51 );
    tmp_assattr_target_13 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain__port_handle );
    if ( tmp_assattr_target_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_13 );

        exception_lineno = 104;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_Parity, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_13 );
        Py_DECREF( tmp_assattr_target_13 );

        exception_lineno = 104;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_13 );
    Py_DECREF( tmp_assattr_target_13 );
    goto branch_end_12;
    branch_no_12:;
    tmp_source_name_52 = par_self;

    CHECK_OBJECT( tmp_source_name_52 );
    tmp_compare_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain__parity );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_PARITY_SPACE );

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

        exception_lineno = 105;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_9 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Eq_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        exception_lineno = 105;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_12 );
    if ( tmp_cmp_Eq_9 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_56 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_56 == NULL ))
    {
        tmp_source_name_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_56 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 106;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_IO );
    if ( tmp_source_name_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_54 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_55 );
    if ( tmp_source_name_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_53 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_Parity );
    Py_DECREF( tmp_source_name_54 );
    if ( tmp_source_name_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_Space );
    Py_DECREF( tmp_source_name_53 );
    if ( tmp_assattr_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_57 = par_self;

    CHECK_OBJECT( tmp_source_name_57 );
    tmp_assattr_target_14 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain__port_handle );
    if ( tmp_assattr_target_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        exception_lineno = 106;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_Parity, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_14 );
        Py_DECREF( tmp_assattr_target_14 );

        exception_lineno = 106;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_14 );
    Py_DECREF( tmp_assattr_target_14 );
    goto branch_end_13;
    branch_no_13:;
    tmp_left_name_4 = const_str_digest_0d38497bfe7c04f466ec0cb6cfde083e;
    tmp_source_name_58 = par_self;

    CHECK_OBJECT( tmp_source_name_58 );
    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain__parity );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_8eaa06ce9c0041cb437ec4b5e1d9c292->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_3 );
    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 108;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_end_13:;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    tmp_source_name_59 = par_self;

    CHECK_OBJECT( tmp_source_name_59 );
    tmp_compare_left_13 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain__stopbits );
    if ( tmp_compare_left_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE );

    if (unlikely( tmp_compare_right_13 == NULL ))
    {
        tmp_compare_right_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE );
    }

    if ( tmp_compare_right_13 == NULL )
    {
        Py_DECREF( tmp_compare_left_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STOPBITS_ONE" );
        exception_tb = NULL;

        exception_lineno = 110;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_10 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_Eq_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_13 );

        exception_lineno = 110;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_13 );
    if ( tmp_cmp_Eq_10 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_63 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_63 == NULL ))
    {
        tmp_source_name_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_63 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 111;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_62 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_IO );
    if ( tmp_source_name_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_61 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_62 );
    if ( tmp_source_name_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_60 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_StopBits );
    Py_DECREF( tmp_source_name_61 );
    if ( tmp_source_name_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_One );
    Py_DECREF( tmp_source_name_60 );
    if ( tmp_assattr_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_64 = par_self;

    CHECK_OBJECT( tmp_source_name_64 );
    tmp_assattr_target_15 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain__port_handle );
    if ( tmp_assattr_target_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_15 );

        exception_lineno = 111;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_StopBits, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_15 );
        Py_DECREF( tmp_assattr_target_15 );

        exception_lineno = 111;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_15 );
    Py_DECREF( tmp_assattr_target_15 );
    goto branch_end_14;
    branch_no_14:;
    tmp_source_name_65 = par_self;

    CHECK_OBJECT( tmp_source_name_65 );
    tmp_compare_left_14 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain__stopbits );
    if ( tmp_compare_left_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE_POINT_FIVE );

    if (unlikely( tmp_compare_right_14 == NULL ))
    {
        tmp_compare_right_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE_POINT_FIVE );
    }

    if ( tmp_compare_right_14 == NULL )
    {
        Py_DECREF( tmp_compare_left_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STOPBITS_ONE_POINT_FIVE" );
        exception_tb = NULL;

        exception_lineno = 112;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_11 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_Eq_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_14 );

        exception_lineno = 112;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_14 );
    if ( tmp_cmp_Eq_11 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_69 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_69 == NULL ))
    {
        tmp_source_name_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_69 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 113;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_68 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_IO );
    if ( tmp_source_name_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_67 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_68 );
    if ( tmp_source_name_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_66 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_StopBits );
    Py_DECREF( tmp_source_name_67 );
    if ( tmp_source_name_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_OnePointFive );
    Py_DECREF( tmp_source_name_66 );
    if ( tmp_assattr_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_70 = par_self;

    CHECK_OBJECT( tmp_source_name_70 );
    tmp_assattr_target_16 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain__port_handle );
    if ( tmp_assattr_target_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_16 );

        exception_lineno = 113;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_StopBits, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_16 );
        Py_DECREF( tmp_assattr_target_16 );

        exception_lineno = 113;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_16 );
    Py_DECREF( tmp_assattr_target_16 );
    goto branch_end_15;
    branch_no_15:;
    tmp_source_name_71 = par_self;

    CHECK_OBJECT( tmp_source_name_71 );
    tmp_compare_left_15 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain__stopbits );
    if ( tmp_compare_left_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_STOPBITS_TWO );

    if (unlikely( tmp_compare_right_15 == NULL ))
    {
        tmp_compare_right_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_TWO );
    }

    if ( tmp_compare_right_15 == NULL )
    {
        Py_DECREF( tmp_compare_left_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STOPBITS_TWO" );
        exception_tb = NULL;

        exception_lineno = 114;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_12 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_Eq_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_15 );

        exception_lineno = 114;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_15 );
    if ( tmp_cmp_Eq_12 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_75 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_75 == NULL ))
    {
        tmp_source_name_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_75 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 115;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_74 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_IO );
    if ( tmp_source_name_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_73 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_74 );
    if ( tmp_source_name_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_72 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_StopBits );
    Py_DECREF( tmp_source_name_73 );
    if ( tmp_source_name_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_Two );
    Py_DECREF( tmp_source_name_72 );
    if ( tmp_assattr_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_76 = par_self;

    CHECK_OBJECT( tmp_source_name_76 );
    tmp_assattr_target_17 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain__port_handle );
    if ( tmp_assattr_target_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_17 );

        exception_lineno = 115;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_StopBits, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_17 );
        Py_DECREF( tmp_assattr_target_17 );

        exception_lineno = 115;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_17 );
    Py_DECREF( tmp_assattr_target_17 );
    goto branch_end_16;
    branch_no_16:;
    tmp_left_name_5 = const_str_digest_3fd5154979a26655e9349e6e2691935b;
    tmp_source_name_77 = par_self;

    CHECK_OBJECT( tmp_source_name_77 );
    tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain__stopbits );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_8eaa06ce9c0041cb437ec4b5e1d9c292->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_4 );
    assert( tmp_raise_type_5 != NULL );
    exception_type = tmp_raise_type_5;
    exception_lineno = 117;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_end_16:;
    branch_end_15:;
    branch_end_14:;
    tmp_source_name_78 = par_self;

    CHECK_OBJECT( tmp_source_name_78 );
    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain__rtscts );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 119;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_source_name_79 = par_self;

    CHECK_OBJECT( tmp_source_name_79 );
    tmp_and_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain__xonxoff );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 119;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_source_name_83 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_83 == NULL ))
    {
        tmp_source_name_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_83 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 120;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_82 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_IO );
    if ( tmp_source_name_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_81 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_82 );
    if ( tmp_source_name_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_80 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_Handshake );
    Py_DECREF( tmp_source_name_81 );
    if ( tmp_source_name_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_RequestToSendXOnXOff );
    Py_DECREF( tmp_source_name_80 );
    if ( tmp_assattr_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_84 = par_self;

    CHECK_OBJECT( tmp_source_name_84 );
    tmp_assattr_target_18 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain__port_handle );
    if ( tmp_assattr_target_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_18 );

        exception_lineno = 120;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_Handshake, tmp_assattr_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_18 );
        Py_DECREF( tmp_assattr_target_18 );

        exception_lineno = 120;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_18 );
    Py_DECREF( tmp_assattr_target_18 );
    goto branch_end_17;
    branch_no_17:;
    tmp_source_name_85 = par_self;

    CHECK_OBJECT( tmp_source_name_85 );
    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain__rtscts );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 121;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_source_name_89 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_89 == NULL ))
    {
        tmp_source_name_89 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_89 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 122;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_88 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_IO );
    if ( tmp_source_name_88 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_87 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_88 );
    if ( tmp_source_name_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_86 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_Handshake );
    Py_DECREF( tmp_source_name_87 );
    if ( tmp_source_name_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_RequestToSend );
    Py_DECREF( tmp_source_name_86 );
    if ( tmp_assattr_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_90 = par_self;

    CHECK_OBJECT( tmp_source_name_90 );
    tmp_assattr_target_19 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain__port_handle );
    if ( tmp_assattr_target_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_19 );

        exception_lineno = 122;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_Handshake, tmp_assattr_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_19 );
        Py_DECREF( tmp_assattr_target_19 );

        exception_lineno = 122;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_19 );
    Py_DECREF( tmp_assattr_target_19 );
    goto branch_end_18;
    branch_no_18:;
    tmp_source_name_91 = par_self;

    CHECK_OBJECT( tmp_source_name_91 );
    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain__xonxoff );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 123;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_source_name_95 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_95 == NULL ))
    {
        tmp_source_name_95 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_95 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 124;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_94 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_IO );
    if ( tmp_source_name_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_93 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_94 );
    if ( tmp_source_name_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_92 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_Handshake );
    Py_DECREF( tmp_source_name_93 );
    if ( tmp_source_name_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_XOnXOff );
    Py_DECREF( tmp_source_name_92 );
    if ( tmp_assattr_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_96 = par_self;

    CHECK_OBJECT( tmp_source_name_96 );
    tmp_assattr_target_20 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain__port_handle );
    if ( tmp_assattr_target_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_20 );

        exception_lineno = 124;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_Handshake, tmp_assattr_name_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_20 );
        Py_DECREF( tmp_assattr_target_20 );

        exception_lineno = 124;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_20 );
    Py_DECREF( tmp_assattr_target_20 );
    goto branch_end_19;
    branch_no_19:;
    tmp_source_name_99 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_99 == NULL ))
    {
        tmp_source_name_99 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_99 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 126;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_98 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain_IO );
    if ( tmp_source_name_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_97 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_98 );
    if ( tmp_source_name_97 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain_Handshake );
    Py_DECREF( tmp_source_name_97 );
    if ( tmp_getattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_2 = const_str_plain_None;
    tmp_assattr_name_21 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    Py_DECREF( tmp_getattr_target_2 );
    if ( tmp_assattr_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_100 = par_self;

    CHECK_OBJECT( tmp_source_name_100 );
    tmp_assattr_target_21 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain__port_handle );
    if ( tmp_assattr_target_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_21 );

        exception_lineno = 126;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_Handshake, tmp_assattr_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_21 );
        Py_DECREF( tmp_assattr_target_21 );

        exception_lineno = 126;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_21 );
    Py_DECREF( tmp_assattr_target_21 );
    branch_end_19:;
    branch_end_18:;
    branch_end_17:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8eaa06ce9c0041cb437ec4b5e1d9c292 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8eaa06ce9c0041cb437ec4b5e1d9c292 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8eaa06ce9c0041cb437ec4b5e1d9c292, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8eaa06ce9c0041cb437ec4b5e1d9c292->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8eaa06ce9c0041cb437ec4b5e1d9c292, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_8eaa06ce9c0041cb437ec4b5e1d9c292, type_description ,par_self, var_e );

    // Release cached frame.
    if ( frame_8eaa06ce9c0041cb437ec4b5e1d9c292 == cache_frame_8eaa06ce9c0041cb437ec4b5e1d9c292 )
    {
        Py_DECREF( frame_8eaa06ce9c0041cb437ec4b5e1d9c292 );
    }
    cache_frame_8eaa06ce9c0041cb437ec4b5e1d9c292 = NULL;

    assertFrameObject( frame_8eaa06ce9c0041cb437ec4b5e1d9c292 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_2__reconfigure_port );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_2__reconfigure_port );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_3_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f17baec1f354bda108daf71a63a71f24 = NULL;

    struct Nuitka_FrameObject *frame_f17baec1f354bda108daf71a63a71f24;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f17baec1f354bda108daf71a63a71f24, codeobj_f17baec1f354bda108daf71a63a71f24, module_serial$serialcli, sizeof(PyObject *) );
    frame_f17baec1f354bda108daf71a63a71f24 = cache_frame_f17baec1f354bda108daf71a63a71f24;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f17baec1f354bda108daf71a63a71f24 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f17baec1f354bda108daf71a63a71f24 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 133;
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
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 134;
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
    // Tried code:
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description = "o";
        goto try_except_handler_2;
    }
    frame_f17baec1f354bda108daf71a63a71f24->m_frame.f_lineno = 136;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_Close );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description = "o";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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
    PRESERVE_FRAME_EXCEPTION( frame_f17baec1f354bda108daf71a63a71f24 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_f17baec1f354bda108daf71a63a71f24, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_f17baec1f354bda108daf71a63a71f24, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 137;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_IO );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Ports );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_InvalidOperationException );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 137;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_f17baec1f354bda108daf71a63a71f24->m_frame) frame_f17baec1f354bda108daf71a63a71f24->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_3:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_3_close );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__port_handle, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
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


        exception_lineno = 141;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f17baec1f354bda108daf71a63a71f24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f17baec1f354bda108daf71a63a71f24 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f17baec1f354bda108daf71a63a71f24, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f17baec1f354bda108daf71a63a71f24->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f17baec1f354bda108daf71a63a71f24, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_f17baec1f354bda108daf71a63a71f24, type_description ,par_self );

    // Release cached frame.
    if ( frame_f17baec1f354bda108daf71a63a71f24 == cache_frame_f17baec1f354bda108daf71a63a71f24 )
    {
        Py_DECREF( frame_f17baec1f354bda108daf71a63a71f24 );
    }
    cache_frame_f17baec1f354bda108daf71a63a71f24 = NULL;

    assertFrameObject( frame_f17baec1f354bda108daf71a63a71f24 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_3_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_3_close );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_4_in_waiting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_e2d88408c4d56dda41160303d8d2b7fe = NULL;

    struct Nuitka_FrameObject *frame_e2d88408c4d56dda41160303d8d2b7fe;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e2d88408c4d56dda41160303d8d2b7fe, codeobj_e2d88408c4d56dda41160303d8d2b7fe, module_serial$serialcli, sizeof(PyObject *) );
    frame_e2d88408c4d56dda41160303d8d2b7fe = cache_frame_e2d88408c4d56dda41160303d8d2b7fe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e2d88408c4d56dda41160303d8d2b7fe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e2d88408c4d56dda41160303d8d2b7fe ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 148;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 149;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 149;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_BytesToRead );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2d88408c4d56dda41160303d8d2b7fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2d88408c4d56dda41160303d8d2b7fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2d88408c4d56dda41160303d8d2b7fe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e2d88408c4d56dda41160303d8d2b7fe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e2d88408c4d56dda41160303d8d2b7fe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e2d88408c4d56dda41160303d8d2b7fe, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_e2d88408c4d56dda41160303d8d2b7fe, type_description ,par_self );

    // Release cached frame.
    if ( frame_e2d88408c4d56dda41160303d8d2b7fe == cache_frame_e2d88408c4d56dda41160303d8d2b7fe )
    {
        Py_DECREF( frame_e2d88408c4d56dda41160303d8d2b7fe );
    }
    cache_frame_e2d88408c4d56dda41160303d8d2b7fe = NULL;

    assertFrameObject( frame_e2d88408c4d56dda41160303d8d2b7fe );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_4_in_waiting );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_4_in_waiting );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_5_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_data = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_str_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_914195006f982708d37359fe5aeadd8e = NULL;

    struct Nuitka_FrameObject *frame_914195006f982708d37359fe5aeadd8e;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_914195006f982708d37359fe5aeadd8e, codeobj_914195006f982708d37359fe5aeadd8e, module_serial$serialcli, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_914195006f982708d37359fe5aeadd8e = cache_frame_914195006f982708d37359fe5aeadd8e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_914195006f982708d37359fe5aeadd8e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_914195006f982708d37359fe5aeadd8e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 158;
        type_description = "ooo";
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 159;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 159;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = BYTEARRAY_COPY( const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e );
    assert( var_data == NULL );
    var_data = tmp_assign_source_1;

    loop_start_1:;
    tmp_cond_value_2 = par_size;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;

        exception_lineno = 163;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    tmp_assign_source_2 = Py_True;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_XDECREF( old );
    }

    // Tried code:
    // Tried code:
    tmp_source_name_2 = var_data;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description = "ooo";
        goto try_except_handler_3;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 165;
        type_description = "ooo";
        goto try_except_handler_3;
    }
    frame_914195006f982708d37359fe5aeadd8e->m_frame.f_lineno = 165;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ReadByte );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 165;
        type_description = "ooo";
        goto try_except_handler_3;
    }
    frame_914195006f982708d37359fe5aeadd8e->m_frame.f_lineno = 165;
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


        exception_lineno = 165;
        type_description = "ooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_914195006f982708d37359fe5aeadd8e );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_914195006f982708d37359fe5aeadd8e, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_914195006f982708d37359fe5aeadd8e, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 166;
        type_description = "ooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_TimeoutException );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description = "ooo";
        goto try_except_handler_2;
    }
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 166;
        type_description = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    goto try_break_handler_2;
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_914195006f982708d37359fe5aeadd8e->m_frame) frame_914195006f982708d37359fe5aeadd8e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "ooo";
    goto try_except_handler_2;
    branch_end_3:;
    // End of try:
    try_end_1:;
    tmp_left_name_1 = par_size;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;

        exception_lineno = 169;
        type_description = "ooo";
        goto try_except_handler_2;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_3 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description = "ooo";
        goto try_except_handler_2;
    }
    par_size = tmp_assign_source_3;

    goto try_end_2;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // try break handler code:
    try_break_handler_2:;
    goto loop_end_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_str_arg_1 = var_data;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_return_value = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_914195006f982708d37359fe5aeadd8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_914195006f982708d37359fe5aeadd8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_914195006f982708d37359fe5aeadd8e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_914195006f982708d37359fe5aeadd8e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_914195006f982708d37359fe5aeadd8e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_914195006f982708d37359fe5aeadd8e, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_914195006f982708d37359fe5aeadd8e, type_description ,par_self, par_size, var_data );

    // Release cached frame.
    if ( frame_914195006f982708d37359fe5aeadd8e == cache_frame_914195006f982708d37359fe5aeadd8e )
    {
        Py_DECREF( frame_914195006f982708d37359fe5aeadd8e );
    }
    cache_frame_914195006f982708d37359fe5aeadd8e = NULL;

    assertFrameObject( frame_914195006f982708d37359fe5aeadd8e );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_5_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_5_read );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_6_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ee822752acc1958ac4870235bce538c5 = NULL;

    struct Nuitka_FrameObject *frame_ee822752acc1958ac4870235bce538c5;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ee822752acc1958ac4870235bce538c5, codeobj_ee822752acc1958ac4870235bce538c5, module_serial$serialcli, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_ee822752acc1958ac4870235bce538c5 = cache_frame_ee822752acc1958ac4870235bce538c5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ee822752acc1958ac4870235bce538c5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ee822752acc1958ac4870235bce538c5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 174;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 175;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 175;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Write );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_as_byte_array );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_byte_array );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "as_byte_array" );
        exception_tb = NULL;

        exception_lineno = 181;
        type_description = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = par_data;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_ee822752acc1958ac4870235bce538c5->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 181;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = const_int_0;
    tmp_len_arg_1 = par_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_args_element_name_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 181;
        type_description = "oo";
        goto try_except_handler_2;
    }
    frame_ee822752acc1958ac4870235bce538c5->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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
    PRESERVE_FRAME_EXCEPTION( frame_ee822752acc1958ac4870235bce538c5 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_ee822752acc1958ac4870235bce538c5, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_ee822752acc1958ac4870235bce538c5, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 182;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_TimeoutException );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 182;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_raise_type_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_writeTimeoutError );

    if (unlikely( tmp_raise_type_2 == NULL ))
    {
        tmp_raise_type_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_writeTimeoutError );
    }

    if ( tmp_raise_type_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "writeTimeoutError" );
        exception_tb = NULL;

        exception_lineno = 183;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_lineno = 183;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_ee822752acc1958ac4870235bce538c5->m_frame) frame_ee822752acc1958ac4870235bce538c5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    tmp_len_arg_2 = par_data;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_return_value = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ee822752acc1958ac4870235bce538c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_ee822752acc1958ac4870235bce538c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ee822752acc1958ac4870235bce538c5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee822752acc1958ac4870235bce538c5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee822752acc1958ac4870235bce538c5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee822752acc1958ac4870235bce538c5, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_ee822752acc1958ac4870235bce538c5, type_description ,par_self, par_data );

    // Release cached frame.
    if ( frame_ee822752acc1958ac4870235bce538c5 == cache_frame_ee822752acc1958ac4870235bce538c5 )
    {
        Py_DECREF( frame_ee822752acc1958ac4870235bce538c5 );
    }
    cache_frame_ee822752acc1958ac4870235bce538c5 = NULL;

    assertFrameObject( frame_ee822752acc1958ac4870235bce538c5 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_6_write );
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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_6_write );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_7_reset_input_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_8eae9a9f0ec1ce0afae5510f2e99c506 = NULL;

    struct Nuitka_FrameObject *frame_8eae9a9f0ec1ce0afae5510f2e99c506;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8eae9a9f0ec1ce0afae5510f2e99c506, codeobj_8eae9a9f0ec1ce0afae5510f2e99c506, module_serial$serialcli, sizeof(PyObject *) );
    frame_8eae9a9f0ec1ce0afae5510f2e99c506 = cache_frame_8eae9a9f0ec1ce0afae5510f2e99c506;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8eae9a9f0ec1ce0afae5510f2e99c506 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8eae9a9f0ec1ce0afae5510f2e99c506 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 188;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 189;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 189;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_8eae9a9f0ec1ce0afae5510f2e99c506->m_frame.f_lineno = 190;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DiscardInBuffer );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8eae9a9f0ec1ce0afae5510f2e99c506 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8eae9a9f0ec1ce0afae5510f2e99c506 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8eae9a9f0ec1ce0afae5510f2e99c506, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8eae9a9f0ec1ce0afae5510f2e99c506->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8eae9a9f0ec1ce0afae5510f2e99c506, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_8eae9a9f0ec1ce0afae5510f2e99c506, type_description ,par_self );

    // Release cached frame.
    if ( frame_8eae9a9f0ec1ce0afae5510f2e99c506 == cache_frame_8eae9a9f0ec1ce0afae5510f2e99c506 )
    {
        Py_DECREF( frame_8eae9a9f0ec1ce0afae5510f2e99c506 );
    }
    cache_frame_8eae9a9f0ec1ce0afae5510f2e99c506 = NULL;

    assertFrameObject( frame_8eae9a9f0ec1ce0afae5510f2e99c506 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_7_reset_input_buffer );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_7_reset_input_buffer );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_8_reset_output_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_0aaac4922b6ca2eaf8add9a6fcc2ece7 = NULL;

    struct Nuitka_FrameObject *frame_0aaac4922b6ca2eaf8add9a6fcc2ece7;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0aaac4922b6ca2eaf8add9a6fcc2ece7, codeobj_0aaac4922b6ca2eaf8add9a6fcc2ece7, module_serial$serialcli, sizeof(PyObject *) );
    frame_0aaac4922b6ca2eaf8add9a6fcc2ece7 = cache_frame_0aaac4922b6ca2eaf8add9a6fcc2ece7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0aaac4922b6ca2eaf8add9a6fcc2ece7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0aaac4922b6ca2eaf8add9a6fcc2ece7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 197;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 198;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 198;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_0aaac4922b6ca2eaf8add9a6fcc2ece7->m_frame.f_lineno = 199;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DiscardOutBuffer );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0aaac4922b6ca2eaf8add9a6fcc2ece7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0aaac4922b6ca2eaf8add9a6fcc2ece7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0aaac4922b6ca2eaf8add9a6fcc2ece7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0aaac4922b6ca2eaf8add9a6fcc2ece7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0aaac4922b6ca2eaf8add9a6fcc2ece7, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_0aaac4922b6ca2eaf8add9a6fcc2ece7, type_description ,par_self );

    // Release cached frame.
    if ( frame_0aaac4922b6ca2eaf8add9a6fcc2ece7 == cache_frame_0aaac4922b6ca2eaf8add9a6fcc2ece7 )
    {
        Py_DECREF( frame_0aaac4922b6ca2eaf8add9a6fcc2ece7 );
    }
    cache_frame_0aaac4922b6ca2eaf8add9a6fcc2ece7 = NULL;

    assertFrameObject( frame_0aaac4922b6ca2eaf8add9a6fcc2ece7 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_8_reset_output_buffer );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_8_reset_output_buffer );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_9__update_break_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_bool_arg_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_dd233eb6e60d85d76fecef3f631c6daa = NULL;

    struct Nuitka_FrameObject *frame_dd233eb6e60d85d76fecef3f631c6daa;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd233eb6e60d85d76fecef3f631c6daa, codeobj_dd233eb6e60d85d76fecef3f631c6daa, module_serial$serialcli, sizeof(PyObject *) );
    frame_dd233eb6e60d85d76fecef3f631c6daa = cache_frame_dd233eb6e60d85d76fecef3f631c6daa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd233eb6e60d85d76fecef3f631c6daa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd233eb6e60d85d76fecef3f631c6daa ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 205;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 206;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 206;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_bool_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__break_state );
    if ( tmp_bool_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = TO_BOOL( tmp_bool_arg_1 );
    Py_DECREF( tmp_bool_arg_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_BreakState, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 207;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd233eb6e60d85d76fecef3f631c6daa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd233eb6e60d85d76fecef3f631c6daa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd233eb6e60d85d76fecef3f631c6daa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd233eb6e60d85d76fecef3f631c6daa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd233eb6e60d85d76fecef3f631c6daa, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_dd233eb6e60d85d76fecef3f631c6daa, type_description ,par_self );

    // Release cached frame.
    if ( frame_dd233eb6e60d85d76fecef3f631c6daa == cache_frame_dd233eb6e60d85d76fecef3f631c6daa )
    {
        Py_DECREF( frame_dd233eb6e60d85d76fecef3f631c6daa );
    }
    cache_frame_dd233eb6e60d85d76fecef3f631c6daa = NULL;

    assertFrameObject( frame_dd233eb6e60d85d76fecef3f631c6daa );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_9__update_break_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_9__update_break_state );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_10__update_rts_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_bool_arg_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_cbf9cb8a5deae198452ef0b70596b8cf = NULL;

    struct Nuitka_FrameObject *frame_cbf9cb8a5deae198452ef0b70596b8cf;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cbf9cb8a5deae198452ef0b70596b8cf, codeobj_cbf9cb8a5deae198452ef0b70596b8cf, module_serial$serialcli, sizeof(PyObject *) );
    frame_cbf9cb8a5deae198452ef0b70596b8cf = cache_frame_cbf9cb8a5deae198452ef0b70596b8cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cbf9cb8a5deae198452ef0b70596b8cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cbf9cb8a5deae198452ef0b70596b8cf ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 211;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 212;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 212;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_bool_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__rts_state );
    if ( tmp_bool_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = TO_BOOL( tmp_bool_arg_1 );
    Py_DECREF( tmp_bool_arg_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_RtsEnable, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 213;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbf9cb8a5deae198452ef0b70596b8cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbf9cb8a5deae198452ef0b70596b8cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cbf9cb8a5deae198452ef0b70596b8cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cbf9cb8a5deae198452ef0b70596b8cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cbf9cb8a5deae198452ef0b70596b8cf, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_cbf9cb8a5deae198452ef0b70596b8cf, type_description ,par_self );

    // Release cached frame.
    if ( frame_cbf9cb8a5deae198452ef0b70596b8cf == cache_frame_cbf9cb8a5deae198452ef0b70596b8cf )
    {
        Py_DECREF( frame_cbf9cb8a5deae198452ef0b70596b8cf );
    }
    cache_frame_cbf9cb8a5deae198452ef0b70596b8cf = NULL;

    assertFrameObject( frame_cbf9cb8a5deae198452ef0b70596b8cf );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_10__update_rts_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_10__update_rts_state );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_11__update_dtr_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_bool_arg_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_cb0c8f715bffc69475df809dec708e3a = NULL;

    struct Nuitka_FrameObject *frame_cb0c8f715bffc69475df809dec708e3a;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb0c8f715bffc69475df809dec708e3a, codeobj_cb0c8f715bffc69475df809dec708e3a, module_serial$serialcli, sizeof(PyObject *) );
    frame_cb0c8f715bffc69475df809dec708e3a = cache_frame_cb0c8f715bffc69475df809dec708e3a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb0c8f715bffc69475df809dec708e3a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb0c8f715bffc69475df809dec708e3a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 217;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 218;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 218;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_bool_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__dtr_state );
    if ( tmp_bool_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = TO_BOOL( tmp_bool_arg_1 );
    Py_DECREF( tmp_bool_arg_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_DtrEnable, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 219;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb0c8f715bffc69475df809dec708e3a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb0c8f715bffc69475df809dec708e3a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb0c8f715bffc69475df809dec708e3a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb0c8f715bffc69475df809dec708e3a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb0c8f715bffc69475df809dec708e3a, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_cb0c8f715bffc69475df809dec708e3a, type_description ,par_self );

    // Release cached frame.
    if ( frame_cb0c8f715bffc69475df809dec708e3a == cache_frame_cb0c8f715bffc69475df809dec708e3a )
    {
        Py_DECREF( frame_cb0c8f715bffc69475df809dec708e3a );
    }
    cache_frame_cb0c8f715bffc69475df809dec708e3a = NULL;

    assertFrameObject( frame_cb0c8f715bffc69475df809dec708e3a );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_11__update_dtr_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_11__update_dtr_state );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_12_cts( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_c8c4cbca6a23bedb3bd76b75819e12f2 = NULL;

    struct Nuitka_FrameObject *frame_c8c4cbca6a23bedb3bd76b75819e12f2;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c8c4cbca6a23bedb3bd76b75819e12f2, codeobj_c8c4cbca6a23bedb3bd76b75819e12f2, module_serial$serialcli, sizeof(PyObject *) );
    frame_c8c4cbca6a23bedb3bd76b75819e12f2 = cache_frame_c8c4cbca6a23bedb3bd76b75819e12f2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c8c4cbca6a23bedb3bd76b75819e12f2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c8c4cbca6a23bedb3bd76b75819e12f2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 224;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 225;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 225;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CtsHolding );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8c4cbca6a23bedb3bd76b75819e12f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8c4cbca6a23bedb3bd76b75819e12f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8c4cbca6a23bedb3bd76b75819e12f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c8c4cbca6a23bedb3bd76b75819e12f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c8c4cbca6a23bedb3bd76b75819e12f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c8c4cbca6a23bedb3bd76b75819e12f2, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_c8c4cbca6a23bedb3bd76b75819e12f2, type_description ,par_self );

    // Release cached frame.
    if ( frame_c8c4cbca6a23bedb3bd76b75819e12f2 == cache_frame_c8c4cbca6a23bedb3bd76b75819e12f2 )
    {
        Py_DECREF( frame_c8c4cbca6a23bedb3bd76b75819e12f2 );
    }
    cache_frame_c8c4cbca6a23bedb3bd76b75819e12f2 = NULL;

    assertFrameObject( frame_c8c4cbca6a23bedb3bd76b75819e12f2 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_12_cts );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_12_cts );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_13_dsr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_cfef913a2880e05c7c78e4eff89ea6f8 = NULL;

    struct Nuitka_FrameObject *frame_cfef913a2880e05c7c78e4eff89ea6f8;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cfef913a2880e05c7c78e4eff89ea6f8, codeobj_cfef913a2880e05c7c78e4eff89ea6f8, module_serial$serialcli, sizeof(PyObject *) );
    frame_cfef913a2880e05c7c78e4eff89ea6f8 = cache_frame_cfef913a2880e05c7c78e4eff89ea6f8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cfef913a2880e05c7c78e4eff89ea6f8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cfef913a2880e05c7c78e4eff89ea6f8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 231;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 232;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 232;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DsrHolding );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfef913a2880e05c7c78e4eff89ea6f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfef913a2880e05c7c78e4eff89ea6f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfef913a2880e05c7c78e4eff89ea6f8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cfef913a2880e05c7c78e4eff89ea6f8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cfef913a2880e05c7c78e4eff89ea6f8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cfef913a2880e05c7c78e4eff89ea6f8, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_cfef913a2880e05c7c78e4eff89ea6f8, type_description ,par_self );

    // Release cached frame.
    if ( frame_cfef913a2880e05c7c78e4eff89ea6f8 == cache_frame_cfef913a2880e05c7c78e4eff89ea6f8 )
    {
        Py_DECREF( frame_cfef913a2880e05c7c78e4eff89ea6f8 );
    }
    cache_frame_cfef913a2880e05c7c78e4eff89ea6f8 = NULL;

    assertFrameObject( frame_cfef913a2880e05c7c78e4eff89ea6f8 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_13_dsr );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_13_dsr );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_14_ri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_a5d09ed682f62228fd1ef31d6cc4fae9 = NULL;

    struct Nuitka_FrameObject *frame_a5d09ed682f62228fd1ef31d6cc4fae9;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a5d09ed682f62228fd1ef31d6cc4fae9, codeobj_a5d09ed682f62228fd1ef31d6cc4fae9, module_serial$serialcli, sizeof(PyObject *) );
    frame_a5d09ed682f62228fd1ef31d6cc4fae9 = cache_frame_a5d09ed682f62228fd1ef31d6cc4fae9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a5d09ed682f62228fd1ef31d6cc4fae9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a5d09ed682f62228fd1ef31d6cc4fae9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 238;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 239;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 239;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a5d09ed682f62228fd1ef31d6cc4fae9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a5d09ed682f62228fd1ef31d6cc4fae9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a5d09ed682f62228fd1ef31d6cc4fae9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a5d09ed682f62228fd1ef31d6cc4fae9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a5d09ed682f62228fd1ef31d6cc4fae9, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_a5d09ed682f62228fd1ef31d6cc4fae9, type_description ,par_self );

    // Release cached frame.
    if ( frame_a5d09ed682f62228fd1ef31d6cc4fae9 == cache_frame_a5d09ed682f62228fd1ef31d6cc4fae9 )
    {
        Py_DECREF( frame_a5d09ed682f62228fd1ef31d6cc4fae9 );
    }
    cache_frame_a5d09ed682f62228fd1ef31d6cc4fae9 = NULL;

    assertFrameObject( frame_a5d09ed682f62228fd1ef31d6cc4fae9 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_14_ri );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_14_ri );
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


static PyObject *impl_serial$serialcli$$$class_1_Serial$$$function_15_cd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_72bb37c78f966a6c51cd31ff8b671317 = NULL;

    struct Nuitka_FrameObject *frame_72bb37c78f966a6c51cd31ff8b671317;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_72bb37c78f966a6c51cd31ff8b671317, codeobj_72bb37c78f966a6c51cd31ff8b671317, module_serial$serialcli, sizeof(PyObject *) );
    frame_72bb37c78f966a6c51cd31ff8b671317 = cache_frame_72bb37c78f966a6c51cd31ff8b671317;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_72bb37c78f966a6c51cd31ff8b671317 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_72bb37c78f966a6c51cd31ff8b671317 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 246;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 247;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 247;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CDHolding );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72bb37c78f966a6c51cd31ff8b671317 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_72bb37c78f966a6c51cd31ff8b671317 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72bb37c78f966a6c51cd31ff8b671317 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_72bb37c78f966a6c51cd31ff8b671317, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_72bb37c78f966a6c51cd31ff8b671317->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_72bb37c78f966a6c51cd31ff8b671317, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_72bb37c78f966a6c51cd31ff8b671317, type_description ,par_self );

    // Release cached frame.
    if ( frame_72bb37c78f966a6c51cd31ff8b671317 == cache_frame_72bb37c78f966a6c51cd31ff8b671317 )
    {
        Py_DECREF( frame_72bb37c78f966a6c51cd31ff8b671317 );
    }
    cache_frame_72bb37c78f966a6c51cd31ff8b671317 = NULL;

    assertFrameObject( frame_72bb37c78f966a6c51cd31ff8b671317 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_15_cd );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli$$$class_1_Serial$$$function_15_cd );
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



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_10__update_rts_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_10__update_rts_state,
        const_str_plain__update_rts_state,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cbf9cb8a5deae198452ef0b70596b8cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_11__update_dtr_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_11__update_dtr_state,
        const_str_plain__update_dtr_state,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cb0c8f715bffc69475df809dec708e3a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_2b96e25c8d393fdf065d358454fdf25c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_12_cts(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_12_cts,
        const_str_plain_cts,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c8c4cbca6a23bedb3bd76b75819e12f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_06425a8e1b9d5eab562978eb6eacf777,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_13_dsr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_13_dsr,
        const_str_plain_dsr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cfef913a2880e05c7c78e4eff89ea6f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_14_ri(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_14_ri,
        const_str_plain_ri,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a5d09ed682f62228fd1ef31d6cc4fae9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_c987d57c872daa303d57e57028663dbb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_15_cd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_15_cd,
        const_str_plain_cd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_72bb37c78f966a6c51cd31ff8b671317,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_1_open(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_1_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ed32e38df8bf42d8ac636a1c3b7838e5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_2__reconfigure_port(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_2__reconfigure_port,
        const_str_plain__reconfigure_port,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8eaa06ce9c0041cb437ec4b5e1d9c292,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_47be6feae340d11ceea1b2be1116c946,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_3_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_3_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f17baec1f354bda108daf71a63a71f24,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_4_in_waiting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_4_in_waiting,
        const_str_plain_in_waiting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e2d88408c4d56dda41160303d8d2b7fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_72db89f2656c7536ad3ca9676d132571,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_5_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_5_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_914195006f982708d37359fe5aeadd8e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_67381b97568fd04864d7225afb09d3b9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_6_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_6_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ee822752acc1958ac4870235bce538c5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_59d8c08c8b321dd488f0cfd9cc30b9cf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_7_reset_input_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_7_reset_input_buffer,
        const_str_plain_reset_input_buffer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8eae9a9f0ec1ce0afae5510f2e99c506,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_bd2e98b142ff21c9f389c674d6946c9a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_8_reset_output_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_8_reset_output_buffer,
        const_str_plain_reset_output_buffer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0aaac4922b6ca2eaf8add9a6fcc2ece7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_14aa7bed476b499178dd8a4fa54d666e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$class_1_Serial$$$function_9__update_break_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$class_1_Serial$$$function_9__update_break_state,
        const_str_plain__update_break_state,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dd233eb6e60d85d76fecef3f631c6daa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        const_str_digest_38086bdc3fad8f6ffed0ae55cb1f1a49,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialcli$$$function_1_as_byte_array(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialcli$$$function_1_as_byte_array,
        const_str_plain_as_byte_array,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ec2cfa8a45bbc0e07cc294a64a3ca0fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialcli,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$serialcli =
{
    PyModuleDef_HEAD_INIT,
    "serial.serialcli",   /* m_name */
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

MOD_INIT_DECL( serial$serialcli )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$serialcli );
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
    puts("serial.serialcli: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.serialcli: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial$serialcli" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$serialcli = Py_InitModule4(
        "serial.serialcli",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial$serialcli = PyModule_Create( &mdef_serial$serialcli );
#endif

    moduledict_serial$serialcli = (PyDictObject *)((PyModuleObject *)module_serial$serialcli)->md_dict;

    CHECK_OBJECT( module_serial$serialcli );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ca5d450d1c32d53f6bfc010c234e26bd, module_serial$serialcli );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial$serialcli );

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
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_outline_return_value_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    tmp_outline_return_value_1 = NULL;
    struct Nuitka_FrameObject *frame_d761aa24490bbb8fcc0ed6b0129ae1c1;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b06d534de12d92bc7ff7632e40ce2608;
    UPDATE_STRING_DICT0( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_d761aa24490bbb8fcc0ed6b0129ae1c1 = MAKE_MODULE_FRAME( codeobj_d761aa24490bbb8fcc0ed6b0129ae1c1, module_serial$serialcli );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d761aa24490bbb8fcc0ed6b0129ae1c1 );
    assert( Py_REFCNT( frame_d761aa24490bbb8fcc0ed6b0129ae1c1 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_System;
    tmp_globals_name_1 = ((PyModuleObject *)module_serial$serialcli)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_d761aa24490bbb8fcc0ed6b0129ae1c1->m_frame.f_lineno = 10;
    tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System, tmp_assign_source_3 );
    tmp_name_name_2 = const_str_digest_78056270b5e1d9467b1949982f3c3271;
    tmp_globals_name_2 = ((PyModuleObject *)module_serial$serialcli)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    frame_d761aa24490bbb8fcc0ed6b0129ae1c1->m_frame.f_lineno = 11;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System, tmp_assign_source_4 );
    tmp_name_name_3 = const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
    tmp_globals_name_3 = ((PyModuleObject *)module_serial$serialcli)->md_dict;
    tmp_locals_name_3 = ((PyModuleObject *)module_serial$serialcli)->md_dict;
    tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
    frame_d761aa24490bbb8fcc0ed6b0129ae1c1->m_frame.f_lineno = 12;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_serial$serialcli, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 16;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Array );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_System );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_System );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "System" );
        exception_tb = NULL;

        exception_lineno = 16;

        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Byte );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_sab, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_serial$serialcli$$$function_1_as_byte_array(  );
    UPDATE_STRING_DICT1( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_as_byte_array, tmp_assign_source_6 );
    // Tried code:
    tmp_assign_source_7 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_SerialBase );

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

        exception_lineno = 23;

        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_7;

    tmp_assign_source_8 = impl_serial$serialcli$$$class_1_Serial( NULL );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

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


        exception_lineno = 23;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_1;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_10;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_outline_return_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_3;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialcli );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli );
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
    NUITKA_CANNOT_GET_HERE( serial$serialcli );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_9 = tmp_outline_return_value_1;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_9;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_Serial;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_d761aa24490bbb8fcc0ed6b0129ae1c1->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

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
    RESTORE_FRAME_EXCEPTION( frame_d761aa24490bbb8fcc0ed6b0129ae1c1 );
#endif
    popFrameStack();

    assertFrameObject( frame_d761aa24490bbb8fcc0ed6b0129ae1c1 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d761aa24490bbb8fcc0ed6b0129ae1c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d761aa24490bbb8fcc0ed6b0129ae1c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d761aa24490bbb8fcc0ed6b0129ae1c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d761aa24490bbb8fcc0ed6b0129ae1c1, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_12 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_12 );
    UPDATE_STRING_DICT0( moduledict_serial$serialcli, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_12 );
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


    return MOD_RETURN_VALUE( module_serial$serialcli );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
