/* Generated code for Python source for module 'serial.serialwin32'
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

/* The _module_serial$serialwin32 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$serialwin32;
PyDictObject *moduledict_serial$serialwin32;

/* The module constants used, if any. */
extern PyObject *const_int_pos_2400;
extern PyObject *const_int_pos_150;
extern PyObject *const_str_plain__write_timeout;
extern PyObject *const_str_plain_data;
static PyObject *const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple;
extern PyObject *const_str_plain_ClearCommBreak;
extern PyObject *const_str_plain_buf;
extern PyObject *const_str_plain_reset_input_buffer;
extern PyObject *const_str_digest_bd2e98b142ff21c9f389c674d6946c9a;
static PyObject *const_str_digest_089f2e47a9bade910c317610f85e4d9b;
static PyObject *const_tuple_1fe80086319a565d1c5a45109aa6416b_tuple;
static PyObject *const_str_digest_1ad7c58b26db5ec7add099b988e90107;
extern PyObject *const_str_plain_fAbortOnError;
static PyObject *const_str_plain_errorcode;
static PyObject *const_tuple_str_plain_self_str_plain_stat_tuple;
static PyObject *const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218;
static PyObject *const_str_plain_raw;
static PyObject *const_str_plain_rc;
extern PyObject *const_str_plain_OPEN_EXISTING;
extern PyObject *const_str_plain_ONE5STOPBITS;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_none_int_pos_1_int_0_none_tuple;
extern PyObject *const_str_plain_GetCommModemStatus;
extern PyObject *const_str_plain_CreateEvent;
extern PyObject *const_str_plain__rts_state;
extern PyObject *const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8;
static PyObject *const_str_plain__overlapped_read;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_467375677f1ba6a8f3ff29b62877b078;
extern PyObject *const_str_plain_STOPBITS_ONE_POINT_FIVE;
extern PyObject *const_str_plain_GetCommState;
extern PyObject *const_str_plain_hEvent;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_SPACEPARITY;
extern PyObject *const_str_plain_in_waiting;
extern PyObject *const_str_plain_ReadFile;
extern PyObject *const_int_pos_200;
static PyObject *const_str_digest_8b21bb7c31a09b0b7d2ccbe6cec5dcf5;
extern PyObject *const_str_plain__dtr_state;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_DCB;
extern PyObject *const_str_plain_cts;
static PyObject *const_str_digest_9154b8cf6e65b3c901c35e8e1d5d5876;
static PyObject *const_str_plain_rx_size;
static PyObject *const_tuple_str_plain_win32_tuple;
extern PyObject *const_str_plain_WriteFile;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_ReadIntervalTimeout;
extern PyObject *const_str_plain_CLRRTS;
extern PyObject *const_str_plain_STOPBITS_TWO;
extern PyObject *const_tuple_5aee5ca7adb77075f0cc1cb4927b0a43_tuple;
extern PyObject *const_str_plain_CancelIoEx;
extern PyObject *const_str_plain_cancel_write;
extern PyObject *const_str_plain__port;
extern PyObject *const_str_plain_fNull;
static PyObject *const_tuple_int_pos_4096_none_tuple;
extern PyObject *const_str_plain_CLRDTR;
static PyObject *const_str_digest_dd27bacab731657fa9534dd0d2a2543b;
extern PyObject *const_str_plain__baudrate;
extern PyObject *const_str_digest_145bf772d86c3cb38f291d317430df01;
extern PyObject *const_int_pos_1000;
extern PyObject *const_int_pos_50;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_XonChar;
extern PyObject *const_str_plain_ERROR_OPERATION_ABORTED;
extern PyObject *const_str_plain__port_handle;
extern PyObject *const_str_plain_ByteSize;
extern PyObject *const_str_plain_COMMTIMEOUTS;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_ri;
static PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_timeouts;
extern PyObject *const_str_plain_EscapeCommFunction;
extern PyObject *const_str_plain_BAUDRATES;
extern PyObject *const_str_plain_fOutxDsrFlow;
extern PyObject *const_str_plain_MS_CTS_ON;
static PyObject *const_str_plain__orgTimeouts;
extern PyObject *const_str_plain_StopBits;
extern PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_GetOverlappedResult;
extern PyObject *const_str_plain_PURGE_RXCLEAR;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_digest_06425a8e1b9d5eab562978eb6eacf777;
extern PyObject *const_str_plain_ERROR_IO_INCOMPLETE;
extern PyObject *const_str_plain_PARITY_EVEN;
extern PyObject *const_str_digest_33be1aa9452ea1a35db7fc513fc42137;
static PyObject *const_str_plain_min;
static PyObject *const_str_plain__overlapped_write;
extern PyObject *const_str_digest_094a5755decb0ff88251d419e9b9deb6;
extern PyObject *const_str_plain_RTS_CONTROL_DISABLE;
extern PyObject *const_int_pos_19200;
extern PyObject *const_str_plain_portstr;
static PyObject *const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple;
static PyObject *const_str_plain_upper;
extern PyObject *const_str_plain__reconfigure_port;
extern PyObject *const_str_plain_cancel_read;
extern PyObject *const_str_plain_enable;
extern PyObject *const_str_digest_cee0e65b93fa2a88bd408284fcdf4582;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_int_pos_300;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_ERROR_SUCCESS;
extern PyObject *const_str_plain_serial;
extern PyObject *const_str_plain_reset_output_buffer;
extern PyObject *const_str_plain_err;
static PyObject *const_str_plain_success;
extern PyObject *const_str_empty;
extern PyObject *const_int_pos_1800;
extern PyObject *const_str_plain_writeTimeoutError;
extern PyObject *const_str_plain_MARKPARITY;
static PyObject *const_str_plain_read_ok;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_SETXON;
extern PyObject *const_str_plain_RTS_CONTROL_TOGGLE;
static PyObject *const_str_digest_2fee4f8a7222f5d8adcdf46b602cea8b;
extern PyObject *const_str_plain_SETXOFF;
extern PyObject *const_str_plain_rts_level_for_tx;
extern PyObject *const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc;
extern PyObject *const_int_pos_4096;
extern PyObject *const_str_plain__rs485_mode;
static PyObject *const_str_digest_2ed77bc529ac5233e189e9c63149ac9b;
extern PyObject *const_str_plain_ODDPARITY;
extern PyObject *const_str_digest_a41f7446b10852b7fa7917c8946aa5e1;
extern PyObject *const_str_plain_fOutX;
extern PyObject *const_str_plain_ERROR_INVALID_USER_BUFFER;
static PyObject *const_str_digest_8ab7d280f3c27847f45a238edf5bac9d;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_5ed58a77f20ffb579393ed23bc7ec71b;
static PyObject *const_str_digest_686727e74bc29d6f749822c8572b6c6c;
extern PyObject *const_str_plain_SerialBase;
extern PyObject *const_str_digest_2b96e25c8d393fdf065d358454fdf25c;
static PyObject *const_tuple_none_int_0_int_0_none_tuple;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_PURGE_TXCLEAR;
extern PyObject *const_int_pos_134;
extern PyObject *const_str_plain_fErrorChar;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8;
extern PyObject *const_str_plain_CloseHandle;
extern PyObject *const_str_plain_PARITY_SPACE;
extern PyObject *const_str_plain___module__;
extern PyObject *const_int_pos_8;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_SETRTS;
extern PyObject *const_str_plain__timeout;
extern PyObject *const_str_plain__inter_byte_timeout;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain_dsr;
extern PyObject *const_str_plain__bytesize;
extern PyObject *const_str_plain_portNotOpenError;
static PyObject *const_str_plain__close;
extern PyObject *const_str_digest_c987d57c872daa303d57e57028663dbb;
extern PyObject *const_str_plain_FIVEBITS;
static PyObject *const_str_digest_b61fa0e88bbe4976ba0c3486b94e2ad6;
extern PyObject *const_str_plain_GENERIC_READ;
static PyObject *const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_ERROR_IO_PENDING;
static PyObject *const_str_plain_byref;
extern PyObject *const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple;
extern PyObject *const_str_plain_DTR_CONTROL_HANDSHAKE;
extern PyObject *const_int_pos_4800;
extern PyObject *const_str_plain_OVERLAPPED;
extern PyObject *const_str_plain_cbOutQue;
extern PyObject *const_str_digest_57027c3185c735e629ff3e28a5a985c8;
extern PyObject *const_str_plain_out_waiting;
extern PyObject *const_str_plain_exclusive;
extern PyObject *const_str_plain_WriteTotalTimeoutConstant;
extern PyObject *const_str_plain_CreateFile;
extern PyObject *const_str_plain_setter;
extern PyObject *const_str_plain_Serial;
extern PyObject *const_str_plain_fRtsControl;
extern PyObject *const_str_plain_DWORD;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_8589c768c45cb2df2310b69a6dd47c26;
extern PyObject *const_str_plain_MS_DSR_ON;
extern PyObject *const_int_pos_9600;
extern PyObject *const_str_plain_DTR_CONTROL_DISABLE;
extern PyObject *const_str_plain__xonxoff;
extern PyObject *const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_Parity;
static PyObject *const_float_0_05;
extern PyObject *const_str_plain__update_break_state;
static PyObject *const_str_digest_11255cc295ff7c51049482a25673fcd6;
static PyObject *const_str_plain__cancel_overlapped_io;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_EVENPARITY;
extern PyObject *const_str_plain_SEVENBITS;
extern PyObject *const_str_plain_fParity;
static PyObject *const_str_plain_stat;
static PyObject *const_str_plain_tx_size;
extern PyObject *const_str_plain_rts_level_for_rx;
static PyObject *const_str_digest_0b18e2f1244bfabe48d1d7021f6de339;
extern PyObject *const_str_plain_STOPBITS_ONE;
extern PyObject *const_str_plain_delay_before_rx;
extern PyObject *const_str_plain_delay_before_tx;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_MS_RING_ON;
extern PyObject *const_str_digest_66c5c36b8185e52d7e7b19bd4f1801a9;
extern PyObject *const_str_plain_sleep;
static PyObject *const_str_plain_COM;
extern PyObject *const_str_digest_088e326eed737fbd2d5feedf060c96ff;
static PyObject *const_str_digest_2df25d99a230c1f3e19fb3a8b6251dff;
extern PyObject *const_str_plain_SetCommState;
extern PyObject *const_int_pos_600;
extern PyObject *const_str_plain_set_output_flow_control;
extern PyObject *const_str_plain_ONESTOPBIT;
extern PyObject *const_str_plain_RTS_CONTROL_ENABLE;
extern PyObject *const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple;
static PyObject *const_str_plain_create_string_buffer;
extern PyObject *const_str_digest_67e30ad9cc029aa9b34457de3a368897;
static PyObject *const_str_digest_d025f041d7ca1946035c849c7d7fca6e;
static PyObject *const_tuple_float_0_05_tuple;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_03b98ad4acc077de88fea75272d50cbe;
extern PyObject *const_int_pos_57600;
extern PyObject *const_str_plain_BaudRate;
static PyObject *const_str_plain__GetCommModemStatus;
extern PyObject *const_str_plain_loopback;
extern PyObject *const_str_plain_ReadTotalTimeoutConstant;
extern PyObject *const_str_plain_SetCommMask;
static PyObject *const_str_plain_WinError;
extern PyObject *const_tuple_str_plain_self_str_plain_port_tuple;
static PyObject *const_str_plain_comstat;
extern PyObject *const_int_pos_38400;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_int_pos_1200;
extern PyObject *const_str_plain_RTS_CONTROL_HANDSHAKE;
static PyObject *const_str_digest_6847a54a76c70d02a87c9a76f4937837;
extern PyObject *const_int_pos_75;
extern PyObject *const_int_pos_115200;
extern PyObject *const_str_plain__update_dtr_state;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_plain_XOFF;
extern PyObject *const_str_plain_flush;
static PyObject *const_str_digest_4eef2f6a61d78aeba404d85f811ca17f;
static PyObject *const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple;
extern PyObject *const_str_plain_ERROR_NOT_ENOUGH_MEMORY;
extern PyObject *const_str_plain_GetLastError;
extern PyObject *const_str_plain_ClearCommError;
extern PyObject *const_str_plain_cbInQue;
extern PyObject *const_str_plain_cd;
extern PyObject *const_str_plain_SIXBITS;
static PyObject *const_str_digest_965cfe85759abc1c82262e5a9b7bf0b5;
static PyObject *const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_enable_tuple;
extern PyObject *const_str_plain_ResetEvent;
extern PyObject *const_str_plain__parity;
extern PyObject *const_str_plain_SETDTR;
extern PyObject *const_str_plain_XON;
extern PyObject *const_str_plain__dsrdtr;
extern PyObject *const_str_plain__break_state;
extern PyObject *const_str_plain_win32;
extern PyObject *const_str_plain_MAXDWORD;
extern PyObject *const_str_plain__rtscts;
static PyObject *const_str_plain_serialwin32;
extern PyObject *const_str_plain_SetCommTimeouts;
extern PyObject *const_str_plain_PARITY_MARK;
static PyObject *const_str_plain_result_ok;
static PyObject *const_str_plain_overlapped;
extern PyObject *const_str_plain_COMSTAT;
extern PyObject *const_str_plain_TWOSTOPBITS;
extern PyObject *const_str_plain_MS_RLSD_ON;
extern PyObject *const_str_plain_SerialException;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_09388aafcb6adb40da642c8223c8e7c5;
static PyObject *const_str_plain___set__;
extern PyObject *const_str_plain_DTR_CONTROL_ENABLE;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_PARITY_NONE;
extern PyObject *const_str_plain_is_open;
extern PyObject *const_str_plain_SetCommBreak;
extern PyObject *const_str_plain_fBinary;
extern PyObject *const_str_plain_GetCommTimeouts;
extern PyObject *const_str_plain_XoffChar;
extern PyObject *const_str_plain_NOPARITY;
extern PyObject *const_int_pos_110;
extern PyObject *const_str_plain__stopbits;
extern PyObject *const_tuple_int_pos_1_tuple;
static PyObject *const_tuple_str_plain_COM_tuple;
extern PyObject *const_str_plain_to_bytes;
extern PyObject *const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple;
extern PyObject *const_str_plain_INVALID_HANDLE_VALUE;
extern PyObject *const_str_plain_fDtrControl;
extern PyObject *const_str_plain_fInX;
static PyObject *const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple;
extern PyObject *const_str_plain_PURGE_RXABORT;
static PyObject *const_str_plain_comDCB;
static PyObject *const_str_digest_7e584289af6145c25f7a5a475f55a53e;
extern PyObject *const_str_plain_EV_ERR;
extern PyObject *const_str_plain__update_rts_state;
extern PyObject *const_str_plain_FILE_ATTRIBUTE_NORMAL;
extern PyObject *const_tuple_str_plain_self_str_plain_exclusive_tuple;
static PyObject *const_str_digest_fd328062211a423aa7fe22cf36a43194;
extern PyObject *const_str_plain_FILE_FLAG_OVERLAPPED;
extern PyObject *const_str_digest_67381b97568fd04864d7225afb09d3b9;
static PyObject *const_str_digest_62b76f5ef85e04e40c80f3d7cd0b95b8;
static PyObject *const_str_plain_set_buffer_size;
extern PyObject *const_str_plain_GENERIC_WRITE;
extern PyObject *const_str_plain_PURGE_TXABORT;
extern PyObject *const_str_digest_47be6feae340d11ceea1b2be1116c946;
extern PyObject *const_str_plain_EIGHTBITS;
extern PyObject *const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
extern PyObject *const_str_plain_SetupComm;
extern PyObject *const_str_plain_PARITY_ODD;
extern PyObject *const_str_plain_fOutxCtsFlow;
extern PyObject *const_str_plain_PurgeComm;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_flags = UNSTREAM_STRING( &constant_bin[ 12475 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 1, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    const_str_plain_comstat = UNSTREAM_STRING( &constant_bin[ 12480 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 2, const_str_plain_comstat ); Py_INCREF( const_str_plain_comstat );
    const_str_digest_089f2e47a9bade910c317610f85e4d9b = UNSTREAM_STRING( &constant_bin[ 12487 ], 68, 0 );
    const_tuple_1fe80086319a565d1c5a45109aa6416b_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 12555 ], 461 );
    const_str_digest_1ad7c58b26db5ec7add099b988e90107 = UNSTREAM_STRING( &constant_bin[ 13016 ], 33, 0 );
    const_str_plain_errorcode = UNSTREAM_STRING( &constant_bin[ 13049 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_stat_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_stat_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_stat = UNSTREAM_STRING( &constant_bin[ 99 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_stat_tuple, 1, const_str_plain_stat ); Py_INCREF( const_str_plain_stat );
    const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 2, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 3, const_str_plain_comstat ); Py_INCREF( const_str_plain_comstat );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 5, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    const_str_plain_rc = UNSTREAM_STRING( &constant_bin[ 1155 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 6, const_str_plain_rc ); Py_INCREF( const_str_plain_rc );
    const_str_plain_read_ok = UNSTREAM_STRING( &constant_bin[ 13058 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 7, const_str_plain_read_ok ); Py_INCREF( const_str_plain_read_ok );
    const_str_plain_result_ok = UNSTREAM_STRING( &constant_bin[ 13065 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 8, const_str_plain_result_ok ); Py_INCREF( const_str_plain_result_ok );
    PyTuple_SET_ITEM( const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 9, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    const_str_plain_raw = UNSTREAM_STRING( &constant_bin[ 13074 ], 3, 1 );
    const_tuple_none_int_pos_1_int_0_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_0_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_0_none_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_0_none_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_0_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain__overlapped_read = UNSTREAM_STRING( &constant_bin[ 13077 ], 16, 1 );
    const_str_digest_467375677f1ba6a8f3ff29b62877b078 = UNSTREAM_STRING( &constant_bin[ 13093 ], 30, 0 );
    const_str_digest_8b21bb7c31a09b0b7d2ccbe6cec5dcf5 = UNSTREAM_STRING( &constant_bin[ 13123 ], 37, 0 );
    const_str_digest_9154b8cf6e65b3c901c35e8e1d5d5876 = UNSTREAM_STRING( &constant_bin[ 13160 ], 26, 0 );
    const_str_plain_rx_size = UNSTREAM_STRING( &constant_bin[ 13186 ], 7, 1 );
    const_tuple_str_plain_win32_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_win32_tuple, 0, const_str_plain_win32 ); Py_INCREF( const_str_plain_win32 );
    const_tuple_int_pos_4096_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_4096_none_tuple, 0, const_int_pos_4096 ); Py_INCREF( const_int_pos_4096 );
    PyTuple_SET_ITEM( const_tuple_int_pos_4096_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_dd27bacab731657fa9534dd0d2a2543b = UNSTREAM_STRING( &constant_bin[ 13193 ], 29, 0 );
    const_str_plain_timeouts = UNSTREAM_STRING( &constant_bin[ 9133 ], 8, 1 );
    const_str_plain__orgTimeouts = UNSTREAM_STRING( &constant_bin[ 13222 ], 12, 1 );
    const_str_plain_min = UNSTREAM_STRING( &constant_bin[ 3799 ], 3, 1 );
    const_str_plain__overlapped_write = UNSTREAM_STRING( &constant_bin[ 13234 ], 17, 1 );
    const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_success = UNSTREAM_STRING( &constant_bin[ 13251 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 3, const_str_plain_success ); Py_INCREF( const_str_plain_success );
    PyTuple_SET_ITEM( const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 4, const_str_plain_errorcode ); Py_INCREF( const_str_plain_errorcode );
    const_str_plain_upper = UNSTREAM_STRING( &constant_bin[ 13258 ], 5, 1 );
    const_str_digest_2fee4f8a7222f5d8adcdf46b602cea8b = UNSTREAM_STRING( &constant_bin[ 13263 ], 23, 0 );
    const_str_digest_2ed77bc529ac5233e189e9c63149ac9b = UNSTREAM_STRING( &constant_bin[ 13286 ], 28, 0 );
    const_str_digest_8ab7d280f3c27847f45a238edf5bac9d = UNSTREAM_STRING( &constant_bin[ 13314 ], 298, 0 );
    const_str_digest_5ed58a77f20ffb579393ed23bc7ec71b = UNSTREAM_STRING( &constant_bin[ 13612 ], 48, 0 );
    const_str_digest_686727e74bc29d6f749822c8572b6c6c = UNSTREAM_STRING( &constant_bin[ 13660 ], 66, 0 );
    const_tuple_none_int_0_int_0_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_int_0_int_0_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_0_int_0_none_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_int_0_int_0_none_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_int_0_int_0_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain__close = UNSTREAM_STRING( &constant_bin[ 12650 ], 6, 1 );
    const_str_digest_b61fa0e88bbe4976ba0c3486b94e2ad6 = UNSTREAM_STRING( &constant_bin[ 13726 ], 143, 0 );
    const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple, 1, const_str_plain_rx_size ); Py_INCREF( const_str_plain_rx_size );
    const_str_plain_tx_size = UNSTREAM_STRING( &constant_bin[ 13869 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple, 2, const_str_plain_tx_size ); Py_INCREF( const_str_plain_tx_size );
    const_str_plain_byref = UNSTREAM_STRING( &constant_bin[ 13876 ], 5, 1 );
    const_str_digest_8589c768c45cb2df2310b69a6dd47c26 = UNSTREAM_STRING( &constant_bin[ 13881 ], 65, 0 );
    const_float_0_05 = UNSTREAM_FLOAT( &constant_bin[ 13946 ] );
    const_str_digest_11255cc295ff7c51049482a25673fcd6 = UNSTREAM_STRING( &constant_bin[ 13954 ], 57, 0 );
    const_str_plain__cancel_overlapped_io = UNSTREAM_STRING( &constant_bin[ 12948 ], 21, 1 );
    const_str_digest_0b18e2f1244bfabe48d1d7021f6de339 = UNSTREAM_STRING( &constant_bin[ 14011 ], 57, 0 );
    const_str_plain_COM = UNSTREAM_STRING( &constant_bin[ 14068 ], 3, 1 );
    const_str_digest_2df25d99a230c1f3e19fb3a8b6251dff = UNSTREAM_STRING( &constant_bin[ 14071 ], 53, 0 );
    const_str_plain_create_string_buffer = UNSTREAM_STRING( &constant_bin[ 14124 ], 20, 1 );
    const_str_digest_d025f041d7ca1946035c849c7d7fca6e = UNSTREAM_STRING( &constant_bin[ 14144 ], 50, 0 );
    const_tuple_float_0_05_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_float_0_05_tuple, 0, const_float_0_05 ); Py_INCREF( const_float_0_05 );
    const_str_digest_03b98ad4acc077de88fea75272d50cbe = UNSTREAM_STRING( &constant_bin[ 14194 ], 4, 0 );
    const_str_plain__GetCommModemStatus = UNSTREAM_STRING( &constant_bin[ 12830 ], 19, 1 );
    const_str_plain_WinError = UNSTREAM_STRING( &constant_bin[ 14198 ], 8, 1 );
    const_str_digest_6847a54a76c70d02a87c9a76f4937837 = UNSTREAM_STRING( &constant_bin[ 14206 ], 58, 0 );
    const_str_digest_4eef2f6a61d78aeba404d85f811ca17f = UNSTREAM_STRING( &constant_bin[ 14264 ], 67, 0 );
    const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 1, const_str_plain_timeouts ); Py_INCREF( const_str_plain_timeouts );
    const_str_plain_comDCB = UNSTREAM_STRING( &constant_bin[ 14331 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 2, const_str_plain_comDCB ); Py_INCREF( const_str_plain_comDCB );
    const_str_digest_965cfe85759abc1c82262e5a9b7bf0b5 = UNSTREAM_STRING( &constant_bin[ 14337 ], 46, 0 );
    const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple, 0, const_str_plain_SerialBase ); Py_INCREF( const_str_plain_SerialBase );
    PyTuple_SET_ITEM( const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple, 1, const_str_plain_SerialException ); Py_INCREF( const_str_plain_SerialException );
    PyTuple_SET_ITEM( const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple, 2, const_str_plain_to_bytes ); Py_INCREF( const_str_plain_to_bytes );
    PyTuple_SET_ITEM( const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple, 3, const_str_plain_portNotOpenError ); Py_INCREF( const_str_plain_portNotOpenError );
    PyTuple_SET_ITEM( const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple, 4, const_str_plain_writeTimeoutError ); Py_INCREF( const_str_plain_writeTimeoutError );
    const_str_plain_serialwin32 = UNSTREAM_STRING( &constant_bin[ 12541 ], 11, 1 );
    const_str_plain_overlapped = UNSTREAM_STRING( &constant_bin[ 12956 ], 10, 1 );
    const_str_plain___set__ = UNSTREAM_STRING( &constant_bin[ 14383 ], 7, 1 );
    const_tuple_str_plain_COM_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_COM_tuple, 0, const_str_plain_COM ); Py_INCREF( const_str_plain_COM );
    const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple, 1, const_str_plain_overlapped ); Py_INCREF( const_str_plain_overlapped );
    PyTuple_SET_ITEM( const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple, 2, const_str_plain_rc ); Py_INCREF( const_str_plain_rc );
    PyTuple_SET_ITEM( const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple, 3, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_digest_7e584289af6145c25f7a5a475f55a53e = UNSTREAM_STRING( &constant_bin[ 14390 ], 22, 0 );
    const_str_digest_fd328062211a423aa7fe22cf36a43194 = UNSTREAM_STRING( &constant_bin[ 14412 ], 37, 0 );
    const_str_digest_62b76f5ef85e04e40c80f3d7cd0b95b8 = UNSTREAM_STRING( &constant_bin[ 14449 ], 58, 0 );
    const_str_plain_set_buffer_size = UNSTREAM_STRING( &constant_bin[ 12884 ], 15, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$serialwin32( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_25a5315836b9c6f56cd93d2d27af7c38;
static PyCodeObject *codeobj_d27c9df37b699195f6a0445f4d69fb86;
static PyCodeObject *codeobj_c554194d9b76f6b54f4939d0f06f1881;
static PyCodeObject *codeobj_6bbe9a79da45081851bc604ddf6b265c;
static PyCodeObject *codeobj_471fab22c01b95e19d3b72d803023f0d;
static PyCodeObject *codeobj_4d073a349b472b12ad07dae0c26e6c32;
static PyCodeObject *codeobj_4f5dbb9a17af5e00861ce4f55c93689b;
static PyCodeObject *codeobj_4d04645b0f917be1259a6434e0805129;
static PyCodeObject *codeobj_4619b3d7f34369a92cb3769866f88eda;
static PyCodeObject *codeobj_693ed2515d24361e89b3c842b8d0ba43;
static PyCodeObject *codeobj_e9d5857f4436fa5dbf41329f83560ba5;
static PyCodeObject *codeobj_789815a2d085a7e704e56fceb02af85f;
static PyCodeObject *codeobj_ddafb67b7790a03d104ddb0d65ca3347;
static PyCodeObject *codeobj_c273e8bed2718d0b8444d56ffbd535f2;
static PyCodeObject *codeobj_fb5bfd923cdf0db02d4bb8b11fcc6145;
static PyCodeObject *codeobj_05e8d4febf5fbd9ce08105ca1859bdca;
static PyCodeObject *codeobj_3d1df36bfbc83d0ff1a67096ced046ae;
static PyCodeObject *codeobj_3b185e7502488044d3ca6f61ac9648fd;
static PyCodeObject *codeobj_6e8cfbdfb6ae24f593b52eb0cf79e7eb;
static PyCodeObject *codeobj_3e61fa00edce6b14ec1cfaec4bd899ec;
static PyCodeObject *codeobj_15023db665da047c3cbdc5f950f1e4e2;
static PyCodeObject *codeobj_c1bf80527290b34fe1b8d1790d8cfdd2;
static PyCodeObject *codeobj_d9a64f9f9f18898b733f3eda3db92a6e;
static PyCodeObject *codeobj_ce951a44b6c3b633ebb0a71f4391afd2;
static PyCodeObject *codeobj_db19c65841ff54f6d55d04bdc49c206c;
static PyCodeObject *codeobj_e14675a74688a2a0e3335227194950a3;
static PyCodeObject *codeobj_06c622122b345c7f7b8fd4881a2f3f5a;
static PyCodeObject *codeobj_ed1bb012a51a4c7b4171eafd13374953;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_089f2e47a9bade910c317610f85e4d9b;
    codeobj_25a5315836b9c6f56cd93d2d27af7c38 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Serial, 21, const_tuple_1fe80086319a565d1c5a45109aa6416b_tuple, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_d27c9df37b699195f6a0445f4d69fb86 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__GetCommModemStatus, 387, const_tuple_str_plain_self_str_plain_stat_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c554194d9b76f6b54f4939d0f06f1881 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 27, const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_6bbe9a79da45081851bc604ddf6b265c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__cancel_overlapped_io, 448, const_tuple_5638c4887e1a1b1e5cb7573973607085_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_471fab22c01b95e19d3b72d803023f0d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__close, 227, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d073a349b472b12ad07dae0c26e6c32 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reconfigure_port, 98, const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4f5dbb9a17af5e00861ce4f55c93689b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_break_state, 364, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d04645b0f917be1259a6434e0805129 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_dtr_state, 380, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4619b3d7f34369a92cb3769866f88eda = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_rts_state, 373, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_693ed2515d24361e89b3c842b8d0ba43 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cancel_read, 461, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e9d5857f4436fa5dbf41329f83560ba5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cancel_write, 465, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_789815a2d085a7e704e56fceb02af85f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cd, 409, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ddafb67b7790a03d104ddb0d65ca3347 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 243, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c273e8bed2718d0b8444d56ffbd535f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cts, 394, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fb5bfd923cdf0db02d4bb8b11fcc6145 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsr, 399, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_05e8d4febf5fbd9ce08105ca1859bdca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exclusive, 469, const_tuple_str_plain_self_str_plain_exclusive_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3d1df36bfbc83d0ff1a67096ced046ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flush, 338, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b185e7502488044d3ca6f61ac9648fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_in_waiting, 251, const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6e8cfbdfb6ae24f593b52eb0cf79e7eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open, 33, const_tuple_str_plain_self_str_plain_port_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3e61fa00edce6b14ec1cfaec4bd899ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_out_waiting, 439, const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_15023db665da047c3cbdc5f950f1e4e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 260, const_tuple_2b93aaa5cc005cbf4e0be46bb9a9b8d8_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c1bf80527290b34fe1b8d1790d8cfdd2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_input_buffer, 349, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9a64f9f9f18898b733f3eda3db92a6e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_output_buffer, 355, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce951a44b6c3b633ebb0a71f4391afd2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ri, 404, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_db19c65841ff54f6d55d04bdc49c206c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serialwin32, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_e14675a74688a2a0e3335227194950a3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_buffer_size, 416, const_tuple_str_plain_self_str_plain_rx_size_str_plain_tx_size_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_06c622122b345c7f7b8fd4881a2f3f5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_output_flow_control, 425, const_tuple_str_plain_self_str_plain_enable_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ed1bb012a51a4c7b4171eafd13374953 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 301, const_tuple_b3f7bc7e0c144b6d9e2e3a17ba2d0530_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_serial$serialwin32$$$class_1_Serial( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_10_reset_input_buffer(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_11_reset_output_buffer(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_12__update_break_state(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_13__update_rts_state(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_14__update_dtr_state(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_15__GetCommModemStatus(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_16_cts(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_17_dsr(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_18_ri(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_19_cd(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_20_set_buffer_size( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_21_set_output_flow_control( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_22_out_waiting(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_23__cancel_overlapped_io(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_24_cancel_read(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_25_cancel_write(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_26_exclusive(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_2_open(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_3__reconfigure_port(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_4__close(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_5_close(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_6_in_waiting(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_7_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_8_write(  );


static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_9_flush(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_serial$serialwin32$$$class_1_Serial( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___init__ = NULL;
    PyObject *var_open = NULL;
    PyObject *var__reconfigure_port = NULL;
    PyObject *var__close = NULL;
    PyObject *var_close = NULL;
    PyObject *var_in_waiting = NULL;
    PyObject *var_read = NULL;
    PyObject *var_write = NULL;
    PyObject *var_flush = NULL;
    PyObject *var_reset_input_buffer = NULL;
    PyObject *var_reset_output_buffer = NULL;
    PyObject *var__update_break_state = NULL;
    PyObject *var__update_rts_state = NULL;
    PyObject *var__update_dtr_state = NULL;
    PyObject *var__GetCommModemStatus = NULL;
    PyObject *var_cts = NULL;
    PyObject *var_dsr = NULL;
    PyObject *var_ri = NULL;
    PyObject *var_cd = NULL;
    PyObject *var_set_buffer_size = NULL;
    PyObject *var_set_output_flow_control = NULL;
    PyObject *var_out_waiting = NULL;
    PyObject *var__cancel_overlapped_io = NULL;
    PyObject *var_cancel_read = NULL;
    PyObject *var_cancel_write = NULL;
    PyObject *var_exclusive = NULL;
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
    PyObject *tmp_args_element_name_7;
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
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
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
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_key_29;
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
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_dict_value_29;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_25a5315836b9c6f56cd93d2d27af7c38 = NULL;

    struct Nuitka_FrameObject *frame_25a5315836b9c6f56cd93d2d27af7c38;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_1___init__(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_1;

    tmp_assign_source_2 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_2_open(  );
    assert( var_open == NULL );
    var_open = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_3__reconfigure_port(  );
    assert( var__reconfigure_port == NULL );
    var__reconfigure_port = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_4__close(  );
    assert( var__close == NULL );
    var__close = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_5_close(  );
    assert( var_close == NULL );
    var_close = tmp_assign_source_5;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25a5315836b9c6f56cd93d2d27af7c38, codeobj_25a5315836b9c6f56cd93d2d27af7c38, module_serial$serialwin32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_25a5315836b9c6f56cd93d2d27af7c38 = cache_frame_25a5315836b9c6f56cd93d2d27af7c38;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25a5315836b9c6f56cd93d2d27af7c38 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25a5315836b9c6f56cd93d2d27af7c38 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_1 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_6_in_waiting(  );
    frame_25a5315836b9c6f56cd93d2d27af7c38->m_frame.f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description = "NNNoooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_in_waiting == NULL );
    var_in_waiting = tmp_assign_source_6;

    tmp_defaults_1 = const_tuple_int_pos_1_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_7 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_7_read( tmp_defaults_1 );
    assert( var_read == NULL );
    var_read = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_8_write(  );
    assert( var_write == NULL );
    var_write = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_9_flush(  );
    assert( var_flush == NULL );
    var_flush = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_10_reset_input_buffer(  );
    assert( var_reset_input_buffer == NULL );
    var_reset_input_buffer = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_11_reset_output_buffer(  );
    assert( var_reset_output_buffer == NULL );
    var_reset_output_buffer = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_12__update_break_state(  );
    assert( var__update_break_state == NULL );
    var__update_break_state = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_13__update_rts_state(  );
    assert( var__update_rts_state == NULL );
    var__update_rts_state = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_14__update_dtr_state(  );
    assert( var__update_dtr_state == NULL );
    var__update_dtr_state = tmp_assign_source_14;

    tmp_assign_source_15 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_15__GetCommModemStatus(  );
    assert( var__GetCommModemStatus == NULL );
    var__GetCommModemStatus = tmp_assign_source_15;

    tmp_called_name_2 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_2 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_16_cts(  );
    frame_25a5315836b9c6f56cd93d2d27af7c38->m_frame.f_lineno = 394;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description = "NNNoooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cts == NULL );
    var_cts = tmp_assign_source_16;

    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_3 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_17_dsr(  );
    frame_25a5315836b9c6f56cd93d2d27af7c38->m_frame.f_lineno = 399;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description = "NNNoooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dsr == NULL );
    var_dsr = tmp_assign_source_17;

    tmp_called_name_4 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_4 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_18_ri(  );
    frame_25a5315836b9c6f56cd93d2d27af7c38->m_frame.f_lineno = 404;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description = "NNNoooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ri == NULL );
    var_ri = tmp_assign_source_18;

    tmp_called_name_5 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_5 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_19_cd(  );
    frame_25a5315836b9c6f56cd93d2d27af7c38->m_frame.f_lineno = 409;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description = "NNNoooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cd == NULL );
    var_cd = tmp_assign_source_19;

    tmp_defaults_2 = const_tuple_int_pos_4096_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_20 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_20_set_buffer_size( tmp_defaults_2 );
    assert( var_set_buffer_size == NULL );
    var_set_buffer_size = tmp_assign_source_20;

    tmp_defaults_3 = const_tuple_true_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_21 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_21_set_output_flow_control( tmp_defaults_3 );
    assert( var_set_output_flow_control == NULL );
    var_set_output_flow_control = tmp_assign_source_21;

    tmp_called_name_6 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_6 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_22_out_waiting(  );
    frame_25a5315836b9c6f56cd93d2d27af7c38->m_frame.f_lineno = 439;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        type_description = "NNNoooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_out_waiting == NULL );
    var_out_waiting = tmp_assign_source_22;

    tmp_assign_source_23 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_23__cancel_overlapped_io(  );
    assert( var__cancel_overlapped_io == NULL );
    var__cancel_overlapped_io = tmp_assign_source_23;

    tmp_assign_source_24 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_24_cancel_read(  );
    assert( var_cancel_read == NULL );
    var_cancel_read = tmp_assign_source_24;

    tmp_assign_source_25 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_25_cancel_write(  );
    assert( var_cancel_write == NULL );
    var_cancel_write = tmp_assign_source_25;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialBase );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialBase );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SerialBase" );
        exception_tb = NULL;

        exception_lineno = 469;
        type_description = "NNNoooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exclusive );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 469;
        type_description = "NNNoooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_26_exclusive(  );
    frame_25a5315836b9c6f56cd93d2d27af7c38->m_frame.f_lineno = 469;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_26 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_setter, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 469;
        type_description = "NNNoooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_exclusive == NULL );
    var_exclusive = tmp_assign_source_26;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_25a5315836b9c6f56cd93d2d27af7c38 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25a5315836b9c6f56cd93d2d27af7c38 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25a5315836b9c6f56cd93d2d27af7c38, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25a5315836b9c6f56cd93d2d27af7c38->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25a5315836b9c6f56cd93d2d27af7c38, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_25a5315836b9c6f56cd93d2d27af7c38, type_description ,NULL, NULL, NULL, var___init__, var_open, var__reconfigure_port, var__close, var_close, var_in_waiting, var_read, var_write, var_flush, var_reset_input_buffer, var_reset_output_buffer, var__update_break_state, var__update_rts_state, var__update_dtr_state, var__GetCommModemStatus, var_cts, var_dsr, var_ri, var_cd, var_set_buffer_size, var_set_output_flow_control, var_out_waiting, var__cancel_overlapped_io, var_cancel_read, var_cancel_write, var_exclusive );

    // Release cached frame.
    if ( frame_25a5315836b9c6f56cd93d2d27af7c38 == cache_frame_25a5315836b9c6f56cd93d2d27af7c38 )
    {
        Py_DECREF( frame_25a5315836b9c6f56cd93d2d27af7c38 );
    }
    cache_frame_25a5315836b9c6f56cd93d2d27af7c38 = NULL;

    assertFrameObject( frame_25a5315836b9c6f56cd93d2d27af7c38 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = _PyDict_NewPresized( 29 );
    tmp_dict_value_1 = const_str_digest_33be1aa9452ea1a35db7fc513fc42137;
    tmp_dict_key_1 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = const_str_digest_2df25d99a230c1f3e19fb3a8b6251dff;
    tmp_dict_key_2 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = const_tuple_5aee5ca7adb77075f0cc1cb4927b0a43_tuple;
    tmp_dict_key_3 = const_str_plain_BAUDRATES;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = var___init__;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = var_open;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_open;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = var__reconfigure_port;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain__reconfigure_port;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = var__close;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain__close;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = var_close;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_close;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = var_in_waiting;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_in_waiting;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = var_read;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_read;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = var_write;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain_write;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = var_flush;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain_flush;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_13 = var_reset_input_buffer;

    CHECK_OBJECT( tmp_dict_value_13 );
    tmp_dict_key_13 = const_str_plain_reset_input_buffer;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = var_reset_output_buffer;

    CHECK_OBJECT( tmp_dict_value_14 );
    tmp_dict_key_14 = const_str_plain_reset_output_buffer;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_15 = var__update_break_state;

    CHECK_OBJECT( tmp_dict_value_15 );
    tmp_dict_key_15 = const_str_plain__update_break_state;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_16 = var__update_rts_state;

    CHECK_OBJECT( tmp_dict_value_16 );
    tmp_dict_key_16 = const_str_plain__update_rts_state;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_17 = var__update_dtr_state;

    CHECK_OBJECT( tmp_dict_value_17 );
    tmp_dict_key_17 = const_str_plain__update_dtr_state;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_18 = var__GetCommModemStatus;

    CHECK_OBJECT( tmp_dict_value_18 );
    tmp_dict_key_18 = const_str_plain__GetCommModemStatus;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_18, tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_19 = var_cts;

    CHECK_OBJECT( tmp_dict_value_19 );
    tmp_dict_key_19 = const_str_plain_cts;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_19, tmp_dict_value_19 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_20 = var_dsr;

    CHECK_OBJECT( tmp_dict_value_20 );
    tmp_dict_key_20 = const_str_plain_dsr;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_20, tmp_dict_value_20 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_21 = var_ri;

    CHECK_OBJECT( tmp_dict_value_21 );
    tmp_dict_key_21 = const_str_plain_ri;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_21, tmp_dict_value_21 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_22 = var_cd;

    CHECK_OBJECT( tmp_dict_value_22 );
    tmp_dict_key_22 = const_str_plain_cd;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_22, tmp_dict_value_22 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_23 = var_set_buffer_size;

    CHECK_OBJECT( tmp_dict_value_23 );
    tmp_dict_key_23 = const_str_plain_set_buffer_size;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_23, tmp_dict_value_23 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_24 = var_set_output_flow_control;

    CHECK_OBJECT( tmp_dict_value_24 );
    tmp_dict_key_24 = const_str_plain_set_output_flow_control;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_24, tmp_dict_value_24 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_25 = var_out_waiting;

    CHECK_OBJECT( tmp_dict_value_25 );
    tmp_dict_key_25 = const_str_plain_out_waiting;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_25, tmp_dict_value_25 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_26 = var__cancel_overlapped_io;

    CHECK_OBJECT( tmp_dict_value_26 );
    tmp_dict_key_26 = const_str_plain__cancel_overlapped_io;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_26, tmp_dict_value_26 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_27 = var_cancel_read;

    CHECK_OBJECT( tmp_dict_value_27 );
    tmp_dict_key_27 = const_str_plain_cancel_read;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_27, tmp_dict_value_27 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_28 = var_cancel_write;

    CHECK_OBJECT( tmp_dict_value_28 );
    tmp_dict_key_28 = const_str_plain_cancel_write;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_28, tmp_dict_value_28 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_29 = var_exclusive;

    CHECK_OBJECT( tmp_dict_value_29 );
    tmp_dict_key_29 = const_str_plain_exclusive;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_29, tmp_dict_value_29 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_open );
    Py_DECREF( var_open );
    var_open = NULL;

    CHECK_OBJECT( (PyObject *)var__reconfigure_port );
    Py_DECREF( var__reconfigure_port );
    var__reconfigure_port = NULL;

    CHECK_OBJECT( (PyObject *)var__close );
    Py_DECREF( var__close );
    var__close = NULL;

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

    CHECK_OBJECT( (PyObject *)var_flush );
    Py_DECREF( var_flush );
    var_flush = NULL;

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

    CHECK_OBJECT( (PyObject *)var__GetCommModemStatus );
    Py_DECREF( var__GetCommModemStatus );
    var__GetCommModemStatus = NULL;

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

    CHECK_OBJECT( (PyObject *)var_set_buffer_size );
    Py_DECREF( var_set_buffer_size );
    var_set_buffer_size = NULL;

    CHECK_OBJECT( (PyObject *)var_set_output_flow_control );
    Py_DECREF( var_set_output_flow_control );
    var_set_output_flow_control = NULL;

    CHECK_OBJECT( (PyObject *)var_out_waiting );
    Py_DECREF( var_out_waiting );
    var_out_waiting = NULL;

    CHECK_OBJECT( (PyObject *)var__cancel_overlapped_io );
    Py_DECREF( var__cancel_overlapped_io );
    var__cancel_overlapped_io = NULL;

    CHECK_OBJECT( (PyObject *)var_cancel_read );
    Py_DECREF( var_cancel_read );
    var_cancel_read = NULL;

    CHECK_OBJECT( (PyObject *)var_cancel_write );
    Py_DECREF( var_cancel_write );
    var_cancel_write = NULL;

    CHECK_OBJECT( (PyObject *)var_exclusive );
    Py_DECREF( var_exclusive );
    var_exclusive = NULL;

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

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_open );
    Py_DECREF( var_open );
    var_open = NULL;

    CHECK_OBJECT( (PyObject *)var__reconfigure_port );
    Py_DECREF( var__reconfigure_port );
    var__reconfigure_port = NULL;

    CHECK_OBJECT( (PyObject *)var__close );
    Py_DECREF( var__close );
    var__close = NULL;

    CHECK_OBJECT( (PyObject *)var_close );
    Py_DECREF( var_close );
    var_close = NULL;

    Py_XDECREF( var_in_waiting );
    var_in_waiting = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_write );
    var_write = NULL;

    Py_XDECREF( var_flush );
    var_flush = NULL;

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

    Py_XDECREF( var__GetCommModemStatus );
    var__GetCommModemStatus = NULL;

    Py_XDECREF( var_cts );
    var_cts = NULL;

    Py_XDECREF( var_dsr );
    var_dsr = NULL;

    Py_XDECREF( var_ri );
    var_ri = NULL;

    Py_XDECREF( var_cd );
    var_cd = NULL;

    Py_XDECREF( var_set_buffer_size );
    var_set_buffer_size = NULL;

    Py_XDECREF( var_set_output_flow_control );
    var_set_output_flow_control = NULL;

    Py_XDECREF( var_out_waiting );
    var_out_waiting = NULL;

    Py_XDECREF( var__cancel_overlapped_io );
    var__cancel_overlapped_io = NULL;

    Py_XDECREF( var_cancel_read );
    var_cancel_read = NULL;

    Py_XDECREF( var_cancel_write );
    var_cancel_write = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
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
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c554194d9b76f6b54f4939d0f06f1881 = NULL;

    struct Nuitka_FrameObject *frame_c554194d9b76f6b54f4939d0f06f1881;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c554194d9b76f6b54f4939d0f06f1881, codeobj_c554194d9b76f6b54f4939d0f06f1881, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_c554194d9b76f6b54f4939d0f06f1881 = cache_frame_c554194d9b76f6b54f4939d0f06f1881;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c554194d9b76f6b54f4939d0f06f1881 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c554194d9b76f6b54f4939d0f06f1881 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__port_handle, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__overlapped_read, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__overlapped_write, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_Serial );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Serial );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Serial" );
        exception_tb = NULL;

        exception_lineno = 31;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c554194d9b76f6b54f4939d0f06f1881 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c554194d9b76f6b54f4939d0f06f1881 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c554194d9b76f6b54f4939d0f06f1881, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c554194d9b76f6b54f4939d0f06f1881->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c554194d9b76f6b54f4939d0f06f1881, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_c554194d9b76f6b54f4939d0f06f1881, type_description ,par_self, par_args, par_kwargs );

    // Release cached frame.
    if ( frame_c554194d9b76f6b54f4939d0f06f1881 == cache_frame_c554194d9b76f6b54f4939d0f06f1881 )
    {
        Py_DECREF( frame_c554194d9b76f6b54f4939d0f06f1881 );
    }
    cache_frame_c554194d9b76f6b54f4939d0f06f1881 = NULL;

    assertFrameObject( frame_c554194d9b76f6b54f4939d0f06f1881 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_1___init__ );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_2_open( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_port = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb = NULL;

    struct Nuitka_FrameObject *frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb, codeobj_6e8cfbdfb6ae24f593b52eb0cf79e7eb, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb = cache_frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__port );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

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

        exception_lineno = 39;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 39;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_a41f7446b10852b7fa7917c8946aa5e1_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 39;
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


        exception_lineno = 40;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 40;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

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

        exception_lineno = 41;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 41;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_088e326eed737fbd2d5feedf060c96ff_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 41;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_port == NULL );
    var_port = tmp_assign_source_1;

    // Tried code:
    tmp_called_instance_2 = var_port;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 47;
    tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_upper );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oo";
        goto try_except_handler_2;
    }
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 47;
    tmp_and_left_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_COM_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 47;
        type_description = "oo";
        goto try_except_handler_2;
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
    tmp_sliceslicedel_index_lower_1 = 3;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_port;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_int_arg_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_compexpr_left_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_compexpr_right_1 = const_int_pos_8;
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oo";
        goto try_except_handler_2;
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

        exception_lineno = 47;
        type_description = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_1 = const_str_digest_03b98ad4acc077de88fea75272d50cbe;
    tmp_right_name_1 = var_port;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description = "oo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_port;
        assert( old != NULL );
        var_port = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_3:;
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
    PRESERVE_FRAME_EXCEPTION( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
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
    if (exception_tb && exception_tb->tb_frame == &frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame) frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_4:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_2_open );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 52;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_CreateFile );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_port;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;

        exception_lineno = 53;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 54;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_GENERIC_READ );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 54;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 54;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_GENERIC_WRITE );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 54;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 54;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_int_0;
    tmp_args_element_name_4 = Py_None;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 57;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_OPEN_EXISTING );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 57;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 58;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_FILE_ATTRIBUTE_NORMAL );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 58;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 58;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_FILE_FLAG_OVERLAPPED );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 58;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 58;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_int_0;
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__port_handle, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 52;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__port_handle );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 60;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_INVALID_HANDLE_VALUE );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 60;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 60;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__port_handle, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

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

        exception_lineno = 62;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = const_str_digest_467375677f1ba6a8f3ff29b62877b078;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_format );
    assert( tmp_called_name_5 != NULL );
    tmp_source_name_13 = par_self;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_portstr );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 62;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 62;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 62;
    tmp_args_element_name_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_WinError );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 62;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 62;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_5:;
    // Tried code:
    // Tried code:
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 65;
        type_description = "oo";
        goto try_except_handler_4;
    }

    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 65;
    tmp_assattr_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_OVERLAPPED );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__overlapped_read, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 65;
        type_description = "oo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 66;
        type_description = "oo";
        goto try_except_handler_4;
    }

    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 66;
    tmp_assattr_name_4 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_5, const_str_plain_CreateEvent, &PyTuple_GET_ITEM( const_tuple_none_int_pos_1_int_0_none_tuple, 0 ) );

    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_source_name_14 = par_self;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_assattr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__overlapped_read );
    if ( tmp_assattr_target_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 66;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_hEvent, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_target_4 );

        exception_lineno = 66;
        type_description = "oo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_target_4 );
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 67;
        type_description = "oo";
        goto try_except_handler_4;
    }

    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 67;
    tmp_assattr_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_OVERLAPPED );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__overlapped_write, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 67;
        type_description = "oo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_7 == NULL ))
    {
        tmp_called_instance_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 69;
        type_description = "oo";
        goto try_except_handler_4;
    }

    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 69;
    tmp_assattr_name_6 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_7, const_str_plain_CreateEvent, &PyTuple_GET_ITEM( const_tuple_none_int_0_int_0_none_tuple, 0 ) );

    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_source_name_15 = par_self;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_assattr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__overlapped_write );
    if ( tmp_assattr_target_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 69;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_hEvent, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_target_6 );

        exception_lineno = 69;
        type_description = "oo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_assattr_name_6 );
    Py_DECREF( tmp_assattr_target_6 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 72;
        type_description = "oo";
        goto try_except_handler_4;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_SetupComm );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_source_name_17 = par_self;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__port_handle );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 72;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_12 = const_int_pos_4096;
    tmp_args_element_name_13 = const_int_pos_4096;
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description = "oo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_8 == NULL ))
    {
        tmp_called_instance_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 75;
        type_description = "oo";
        goto try_except_handler_4;
    }

    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 75;
    tmp_assattr_name_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_COMMTIMEOUTS );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__orgTimeouts, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 75;
        type_description = "oo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description = "oo";
        goto try_except_handler_4;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_GetCommTimeouts );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_source_name_19 = par_self;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__port_handle );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 76;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description = "oo";
        goto try_except_handler_4;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_byref );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_14 );

        exception_lineno = 76;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_source_name_21 = par_self;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__orgTimeouts );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_14 );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 76;
        type_description = "oo";
        goto try_except_handler_4;
    }
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_14 );

        exception_lineno = 76;
        type_description = "oo";
        goto try_except_handler_4;
    }
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_14 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description = "oo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_9 = par_self;

    CHECK_OBJECT( tmp_called_instance_9 );
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 78;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain__reconfigure_port );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description = "oo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 82;
        type_description = "oo";
        goto try_except_handler_4;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_PurgeComm );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_source_name_23 = par_self;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__port_handle );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 83;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 84;
        type_description = "oo";
        goto try_except_handler_4;
    }

    tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_PURGE_TXCLEAR );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );

        exception_lineno = 84;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );
        Py_DECREF( tmp_left_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 84;
        type_description = "oo";
        goto try_except_handler_4;
    }

    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_PURGE_TXABORT );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 84;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_left_name_5 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_6, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_6 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );

        exception_lineno = 84;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );
        Py_DECREF( tmp_left_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 85;
        type_description = "oo";
        goto try_except_handler_4;
    }

    tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_PURGE_RXCLEAR );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 85;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_left_name_4 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );

        exception_lineno = 84;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 85;
        type_description = "oo";
        goto try_except_handler_4;
    }

    tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_PURGE_RXABORT );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 85;
        type_description = "oo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_18 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_4, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );

        exception_lineno = 85;
        type_description = "oo";
        goto try_except_handler_4;
    }
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_17 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description = "oo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    goto try_end_2;
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
    PRESERVE_FRAME_EXCEPTION( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    tmp_called_instance_10 = par_self;

    CHECK_OBJECT( tmp_called_instance_10 );
    frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = 88;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain__close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description = "oo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_2_open );
    return NULL;
    // End of try:
    try_end_3:;
    tmp_assattr_name_8 = Py_None;
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__port_handle, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description = "oo";
        goto try_except_handler_3;
    }
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame) frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "oo";
    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    tmp_assattr_name_9 = Py_True;
    tmp_assattr_target_9 = par_self;

    CHECK_OBJECT( tmp_assattr_target_9 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_is_open, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description = "oo";
        goto try_except_handler_3;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb, type_description ,par_self, var_port );

    // Release cached frame.
    if ( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb == cache_frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb )
    {
        Py_DECREF( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb );
    }
    cache_frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb = NULL;

    assertFrameObject( frame_6e8cfbdfb6ae24f593b52eb0cf79e7eb );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_2_open );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_2_open );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_3__reconfigure_port( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_timeouts = NULL;
    PyObject *var_comDCB = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
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
    PyObject *tmp_assattr_name_22;
    PyObject *tmp_assattr_name_23;
    PyObject *tmp_assattr_name_24;
    PyObject *tmp_assattr_name_25;
    PyObject *tmp_assattr_name_26;
    PyObject *tmp_assattr_name_27;
    PyObject *tmp_assattr_name_28;
    PyObject *tmp_assattr_name_29;
    PyObject *tmp_assattr_name_30;
    PyObject *tmp_assattr_name_31;
    PyObject *tmp_assattr_name_32;
    PyObject *tmp_assattr_name_33;
    PyObject *tmp_assattr_name_34;
    PyObject *tmp_assattr_name_35;
    PyObject *tmp_assattr_name_36;
    PyObject *tmp_assattr_name_37;
    PyObject *tmp_assattr_name_38;
    PyObject *tmp_assattr_name_39;
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
    PyObject *tmp_assattr_target_22;
    PyObject *tmp_assattr_target_23;
    PyObject *tmp_assattr_target_24;
    PyObject *tmp_assattr_target_25;
    PyObject *tmp_assattr_target_26;
    PyObject *tmp_assattr_target_27;
    PyObject *tmp_assattr_target_28;
    PyObject *tmp_assattr_target_29;
    PyObject *tmp_assattr_target_30;
    PyObject *tmp_assattr_target_31;
    PyObject *tmp_assattr_target_32;
    PyObject *tmp_assattr_target_33;
    PyObject *tmp_assattr_target_34;
    PyObject *tmp_assattr_target_35;
    PyObject *tmp_assattr_target_36;
    PyObject *tmp_assattr_target_37;
    PyObject *tmp_assattr_target_38;
    PyObject *tmp_assattr_target_39;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
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
    int tmp_cmp_Eq_13;
    int tmp_cmp_Eq_14;
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
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
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
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_make_exception_arg_6;
    PyObject *tmp_make_exception_arg_7;
    PyObject *tmp_make_exception_arg_8;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_type_7;
    PyObject *tmp_raise_type_8;
    PyObject *tmp_raise_type_9;
    PyObject *tmp_raise_type_10;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
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
    PyObject *tmp_source_name_101;
    PyObject *tmp_source_name_102;
    PyObject *tmp_source_name_103;
    PyObject *tmp_source_name_104;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4d073a349b472b12ad07dae0c26e6c32 = NULL;

    struct Nuitka_FrameObject *frame_4d073a349b472b12ad07dae0c26e6c32;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d073a349b472b12ad07dae0c26e6c32, codeobj_4d073a349b472b12ad07dae0c26e6c32, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_4d073a349b472b12ad07dae0c26e6c32 = cache_frame_4d073a349b472b12ad07dae0c26e6c32;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d073a349b472b12ad07dae0c26e6c32 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d073a349b472b12ad07dae0c26e6c32 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__port_handle );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 100;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

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

        exception_lineno = 101;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 101;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_145bf772d86c3cb38f291d317430df01_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 101;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 108;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 108;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_COMMTIMEOUTS );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_timeouts == NULL );
    var_timeouts = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__timeout );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
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
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__timeout );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 111;
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 112;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_MAXDWORD );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_timeouts;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ReadIntervalTimeout, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 112;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    goto branch_end_3;
    branch_no_3:;
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__timeout );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1000;
    tmp_int_arg_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_int_pos_1;
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = var_timeouts;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_ReadTotalTimeoutConstant, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 114;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_end_3:;
    branch_no_2:;
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__timeout );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_and_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 115;
        type_description = "ooo";
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
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__inter_byte_timeout );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = Py_None;
    tmp_and_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_INCREF( tmp_and_right_value_1 );
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

        exception_lineno = 115;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_3 != NULL );
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__inter_byte_timeout );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1000;
    tmp_int_arg_2 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_1;
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = var_timeouts;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ReadIntervalTimeout, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 116;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    branch_no_4:;
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__write_timeout );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__write_timeout );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 120;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 121;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_MAXDWORD );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = var_timeouts;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_WriteTotalTimeoutConstant, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 121;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    goto branch_end_6;
    branch_no_6:;
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_4 != NULL );
    tmp_source_name_12 = par_self;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__write_timeout );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_pos_1000;
    tmp_int_arg_3 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = const_int_pos_1;
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 123;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = var_timeouts;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_WriteTotalTimeoutConstant, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 123;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    branch_end_6:;
    branch_no_5:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 124;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_SetCommTimeouts );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_self;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__port_handle );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 124;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 124;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_timeouts;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_args_element_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 124;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 126;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_SetCommMask );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = par_self;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__port_handle );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 126;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 126;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_EV_ERR );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 126;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 130;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 130;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_DCB );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_comDCB == NULL );
    var_comDCB = tmp_assign_source_2;

    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 131;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_GetCommState );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = par_self;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__port_handle );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 131;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 131;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = var_comDCB;

    CHECK_OBJECT( tmp_args_element_name_14 );
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_args_element_name_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 131;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_12 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = par_self;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_assattr_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__baudrate );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_BaudRate, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 132;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_source_name_21 = par_self;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__bytesize );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 134;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_FIVEBITS );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 134;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );
        Py_DECREF( tmp_compare_right_5 );

        exception_lineno = 134;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assattr_name_7 = const_int_pos_5;
    tmp_assattr_target_7 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_ByteSize, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_23 = par_self;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__bytesize );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_compare_left_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 136;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_SIXBITS );
    if ( tmp_compare_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        exception_lineno = 136;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );
        Py_DECREF( tmp_compare_right_6 );

        exception_lineno = 136;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_6 );
    Py_DECREF( tmp_compare_right_6 );
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assattr_name_8 = const_int_pos_6;
    tmp_assattr_target_8 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_ByteSize, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_25 = par_self;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__bytesize );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_compare_left_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 138;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_SEVENBITS );
    if ( tmp_compare_right_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 138;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );
        Py_DECREF( tmp_compare_right_7 );

        exception_lineno = 138;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_7 );
    Py_DECREF( tmp_compare_right_7 );
    if ( tmp_cmp_Eq_5 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assattr_name_9 = const_int_pos_7;
    tmp_assattr_target_9 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_9 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_ByteSize, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_27 = par_self;

    CHECK_OBJECT( tmp_source_name_27 );
    tmp_compare_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__bytesize );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_compare_left_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 140;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_EIGHTBITS );
    if ( tmp_compare_right_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 140;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );
        Py_DECREF( tmp_compare_right_8 );

        exception_lineno = 140;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    Py_DECREF( tmp_compare_right_8 );
    if ( tmp_cmp_Eq_6 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assattr_name_10 = const_int_pos_8;
    tmp_assattr_target_10 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_10 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_ByteSize, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_10;
    branch_no_10:;
    tmp_source_name_29 = const_str_digest_8b21bb7c31a09b0b7d2ccbe6cec5dcf5;
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_format );
    assert( tmp_called_name_8 != NULL );
    tmp_source_name_30 = par_self;

    CHECK_OBJECT( tmp_source_name_30 );
    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain__bytesize );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 143;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 143;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    tmp_source_name_31 = par_self;

    CHECK_OBJECT( tmp_source_name_31 );
    tmp_compare_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain__parity );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_compare_left_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 145;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_PARITY_NONE );
    if ( tmp_compare_right_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        exception_lineno = 145;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_9 );
        Py_DECREF( tmp_compare_right_9 );

        exception_lineno = 145;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_9 );
    Py_DECREF( tmp_compare_right_9 );
    if ( tmp_cmp_Eq_7 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 146;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_NOPARITY );
    if ( tmp_assattr_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_11 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_11 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_Parity, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 146;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    tmp_assattr_name_12 = const_int_0;
    tmp_assattr_target_12 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_12 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_fParity, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_11;
    branch_no_11:;
    tmp_source_name_34 = par_self;

    CHECK_OBJECT( tmp_source_name_34 );
    tmp_compare_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain__parity );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_compare_left_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 148;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_10 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_PARITY_EVEN );
    if ( tmp_compare_right_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        exception_lineno = 148;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_8 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );
        Py_DECREF( tmp_compare_right_10 );

        exception_lineno = 148;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    Py_DECREF( tmp_compare_right_10 );
    if ( tmp_cmp_Eq_8 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 149;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_EVENPARITY );
    if ( tmp_assattr_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_13 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_13 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_Parity, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_13 );

        exception_lineno = 149;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_13 );
    tmp_assattr_name_14 = const_int_pos_1;
    tmp_assattr_target_14 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_14 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_fParity, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_12;
    branch_no_12:;
    tmp_source_name_37 = par_self;

    CHECK_OBJECT( tmp_source_name_37 );
    tmp_compare_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain__parity );
    if ( tmp_compare_left_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_compare_left_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 151;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_11 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_PARITY_ODD );
    if ( tmp_compare_right_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_11 );

        exception_lineno = 151;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_9 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_11 );
        Py_DECREF( tmp_compare_right_11 );

        exception_lineno = 151;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_11 );
    Py_DECREF( tmp_compare_right_11 );
    if ( tmp_cmp_Eq_9 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 152;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_ODDPARITY );
    if ( tmp_assattr_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_15 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_15 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_Parity, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_15 );

        exception_lineno = 152;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_15 );
    tmp_assattr_name_16 = const_int_pos_1;
    tmp_assattr_target_16 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_16 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_fParity, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_13;
    branch_no_13:;
    tmp_source_name_40 = par_self;

    CHECK_OBJECT( tmp_source_name_40 );
    tmp_compare_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain__parity );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_41 == NULL )
    {
        Py_DECREF( tmp_compare_left_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 154;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_12 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_PARITY_MARK );
    if ( tmp_compare_right_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        exception_lineno = 154;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_10 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Eq_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_12 );
        Py_DECREF( tmp_compare_right_12 );

        exception_lineno = 154;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_12 );
    Py_DECREF( tmp_compare_right_12 );
    if ( tmp_cmp_Eq_10 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_42 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_42 == NULL ))
    {
        tmp_source_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_42 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 155;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_MARKPARITY );
    if ( tmp_assattr_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_17 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_17 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_Parity, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_17 );

        exception_lineno = 155;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_17 );
    tmp_assattr_name_18 = const_int_pos_1;
    tmp_assattr_target_18 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_18 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_fParity, tmp_assattr_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_14;
    branch_no_14:;
    tmp_source_name_43 = par_self;

    CHECK_OBJECT( tmp_source_name_43 );
    tmp_compare_left_13 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain__parity );
    if ( tmp_compare_left_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_44 == NULL )
    {
        Py_DECREF( tmp_compare_left_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 157;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_13 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_PARITY_SPACE );
    if ( tmp_compare_right_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_13 );

        exception_lineno = 157;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_11 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_Eq_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_13 );
        Py_DECREF( tmp_compare_right_13 );

        exception_lineno = 157;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_13 );
    Py_DECREF( tmp_compare_right_13 );
    if ( tmp_cmp_Eq_11 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_45 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_45 == NULL ))
    {
        tmp_source_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_45 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 158;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_SPACEPARITY );
    if ( tmp_assattr_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_19 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_19 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_Parity, tmp_assattr_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_19 );

        exception_lineno = 158;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_19 );
    tmp_assattr_name_20 = const_int_pos_1;
    tmp_assattr_target_20 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_20 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_fParity, tmp_assattr_name_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_15;
    branch_no_15:;
    tmp_source_name_46 = const_str_digest_dd27bacab731657fa9534dd0d2a2543b;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_format );
    assert( tmp_called_name_9 != NULL );
    tmp_source_name_47 = par_self;

    CHECK_OBJECT( tmp_source_name_47 );
    tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain__parity );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 161;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 161;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 161;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 161;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_end_15:;
    branch_end_14:;
    branch_end_13:;
    branch_end_12:;
    branch_end_11:;
    tmp_source_name_48 = par_self;

    CHECK_OBJECT( tmp_source_name_48 );
    tmp_compare_left_14 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain__stopbits );
    if ( tmp_compare_left_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_49 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_49 == NULL ))
    {
        tmp_source_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_49 == NULL )
    {
        Py_DECREF( tmp_compare_left_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 163;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_14 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_STOPBITS_ONE );
    if ( tmp_compare_right_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_14 );

        exception_lineno = 163;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_12 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_Eq_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_14 );
        Py_DECREF( tmp_compare_right_14 );

        exception_lineno = 163;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_14 );
    Py_DECREF( tmp_compare_right_14 );
    if ( tmp_cmp_Eq_12 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_50 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_50 == NULL ))
    {
        tmp_source_name_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_50 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 164;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_ONESTOPBIT );
    if ( tmp_assattr_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_21 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_21 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_StopBits, tmp_assattr_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_21 );

        exception_lineno = 164;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_21 );
    goto branch_end_16;
    branch_no_16:;
    tmp_source_name_51 = par_self;

    CHECK_OBJECT( tmp_source_name_51 );
    tmp_compare_left_15 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain__stopbits );
    if ( tmp_compare_left_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_52 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_52 == NULL ))
    {
        tmp_source_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_52 == NULL )
    {
        Py_DECREF( tmp_compare_left_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 165;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_15 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_STOPBITS_ONE_POINT_FIVE );
    if ( tmp_compare_right_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_15 );

        exception_lineno = 165;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_13 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_Eq_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_15 );
        Py_DECREF( tmp_compare_right_15 );

        exception_lineno = 165;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_15 );
    Py_DECREF( tmp_compare_right_15 );
    if ( tmp_cmp_Eq_13 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_source_name_53 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_53 == NULL ))
    {
        tmp_source_name_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_53 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 166;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_ONE5STOPBITS );
    if ( tmp_assattr_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_22 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_22 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_22, const_str_plain_StopBits, tmp_assattr_name_22 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_22 );

        exception_lineno = 166;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_22 );
    goto branch_end_17;
    branch_no_17:;
    tmp_source_name_54 = par_self;

    CHECK_OBJECT( tmp_source_name_54 );
    tmp_compare_left_16 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain__stopbits );
    if ( tmp_compare_left_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_55 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_55 == NULL ))
    {
        tmp_source_name_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_55 == NULL )
    {
        Py_DECREF( tmp_compare_left_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 167;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_16 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_STOPBITS_TWO );
    if ( tmp_compare_right_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_16 );

        exception_lineno = 167;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_14 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_cmp_Eq_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_16 );
        Py_DECREF( tmp_compare_right_16 );

        exception_lineno = 167;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_16 );
    Py_DECREF( tmp_compare_right_16 );
    if ( tmp_cmp_Eq_14 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_source_name_56 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_56 == NULL ))
    {
        tmp_source_name_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_56 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 168;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_TWOSTOPBITS );
    if ( tmp_assattr_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_23 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_23 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_23, const_str_plain_StopBits, tmp_assattr_name_23 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_23 );

        exception_lineno = 168;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_23 );
    goto branch_end_18;
    branch_no_18:;
    tmp_source_name_57 = const_str_digest_fd328062211a423aa7fe22cf36a43194;
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_format );
    assert( tmp_called_name_10 != NULL );
    tmp_source_name_58 = par_self;

    CHECK_OBJECT( tmp_source_name_58 );
    tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain__stopbits );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 170;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_make_exception_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_3 );
    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 170;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_end_18:;
    branch_end_17:;
    branch_end_16:;
    tmp_assattr_name_24 = const_int_pos_1;
    tmp_assattr_target_24 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_24 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_24, const_str_plain_fBinary, tmp_assattr_name_24 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_59 = par_self;

    CHECK_OBJECT( tmp_source_name_59 );
    tmp_compare_left_17 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain__rs485_mode );
    if ( tmp_compare_left_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_17 = Py_None;
    tmp_is_1 = ( tmp_compare_left_17 == tmp_compare_right_17 );
    Py_DECREF( tmp_compare_left_17 );
    if ( tmp_is_1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_source_name_60 = par_self;

    CHECK_OBJECT( tmp_source_name_60 );
    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain__rtscts );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 175;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_source_name_61 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_61 == NULL ))
    {
        tmp_source_name_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_61 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 176;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_RTS_CONTROL_HANDSHAKE );
    if ( tmp_assattr_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_25 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_25 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_25, const_str_plain_fRtsControl, tmp_assattr_name_25 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_25 );

        exception_lineno = 176;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_25 );
    goto branch_end_20;
    branch_no_20:;
    tmp_source_name_62 = par_self;

    CHECK_OBJECT( tmp_source_name_62 );
    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain__rts_state );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 178;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_source_name_63 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_63 == NULL ))
    {
        tmp_source_name_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_63 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 178;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_RTS_CONTROL_ENABLE );
    if ( tmp_assattr_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_source_name_64 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_64 == NULL ))
    {
        tmp_source_name_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_64 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 178;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_RTS_CONTROL_DISABLE );
    if ( tmp_assattr_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    condexpr_end_1:;
    tmp_assattr_target_26 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_26 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_26, const_str_plain_fRtsControl, tmp_assattr_name_26 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_26 );

        exception_lineno = 178;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_26 );
    branch_end_20:;
    tmp_source_name_65 = par_self;

    CHECK_OBJECT( tmp_source_name_65 );
    tmp_assattr_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain__rtscts );
    if ( tmp_assattr_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_27 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_27 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_27, const_str_plain_fOutxCtsFlow, tmp_assattr_name_27 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_27 );

        exception_lineno = 179;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_27 );
    goto branch_end_19;
    branch_no_19:;
    tmp_source_name_67 = par_self;

    CHECK_OBJECT( tmp_source_name_67 );
    tmp_source_name_66 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain__rs485_mode );
    if ( tmp_source_name_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_rts_level_for_tx );
    Py_DECREF( tmp_source_name_66 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 183;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_21;
    }
    else
    {
        goto branch_yes_21;
    }
    branch_yes_21:;
    tmp_source_name_68 = const_str_digest_62b76f5ef85e04e40c80f3d7cd0b95b8;
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_format );
    assert( tmp_called_name_11 != NULL );
    tmp_source_name_70 = par_self;

    CHECK_OBJECT( tmp_source_name_70 );
    tmp_source_name_69 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain__rs485_mode );
    if ( tmp_source_name_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 186;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_rts_level_for_tx );
    Py_DECREF( tmp_source_name_69 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 186;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_make_exception_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 184;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_4 );
    assert( tmp_raise_type_5 != NULL );
    exception_type = tmp_raise_type_5;
    exception_lineno = 184;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_21:;
    tmp_source_name_72 = par_self;

    CHECK_OBJECT( tmp_source_name_72 );
    tmp_source_name_71 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain__rs485_mode );
    if ( tmp_source_name_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_rts_level_for_rx );
    Py_DECREF( tmp_source_name_71 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 187;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_source_name_73 = const_str_digest_6847a54a76c70d02a87c9a76f4937837;
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_format );
    assert( tmp_called_name_12 != NULL );
    tmp_source_name_75 = par_self;

    CHECK_OBJECT( tmp_source_name_75 );
    tmp_source_name_74 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain__rs485_mode );
    if ( tmp_source_name_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 190;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_rts_level_for_rx );
    Py_DECREF( tmp_source_name_74 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 190;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_make_exception_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_make_exception_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_5 };
        tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_5 );
    assert( tmp_raise_type_6 != NULL );
    exception_type = tmp_raise_type_6;
    exception_lineno = 188;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_22:;
    tmp_source_name_77 = par_self;

    CHECK_OBJECT( tmp_source_name_77 );
    tmp_source_name_76 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain__rs485_mode );
    if ( tmp_source_name_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_18 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_delay_before_tx );
    Py_DECREF( tmp_source_name_76 );
    if ( tmp_compare_left_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_18 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_18 != tmp_compare_right_18 );
    Py_DECREF( tmp_compare_left_18 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_source_name_78 = const_str_digest_11255cc295ff7c51049482a25673fcd6;
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_format );
    assert( tmp_called_name_13 != NULL );
    tmp_source_name_80 = par_self;

    CHECK_OBJECT( tmp_source_name_80 );
    tmp_source_name_79 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain__rs485_mode );
    if ( tmp_source_name_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 194;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_delay_before_tx );
    Py_DECREF( tmp_source_name_79 );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 194;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_make_exception_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_make_exception_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 192;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_6 };
        tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_6 );
    assert( tmp_raise_type_7 != NULL );
    exception_type = tmp_raise_type_7;
    exception_lineno = 192;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_23:;
    tmp_source_name_82 = par_self;

    CHECK_OBJECT( tmp_source_name_82 );
    tmp_source_name_81 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain__rs485_mode );
    if ( tmp_source_name_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_19 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_delay_before_rx );
    Py_DECREF( tmp_source_name_81 );
    if ( tmp_compare_left_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_19 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_19 != tmp_compare_right_19 );
    Py_DECREF( tmp_compare_left_19 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_source_name_83 = const_str_digest_0b18e2f1244bfabe48d1d7021f6de339;
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_format );
    assert( tmp_called_name_14 != NULL );
    tmp_source_name_85 = par_self;

    CHECK_OBJECT( tmp_source_name_85 );
    tmp_source_name_84 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain__rs485_mode );
    if ( tmp_source_name_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 198;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_delay_before_rx );
    Py_DECREF( tmp_source_name_84 );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 198;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 197;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_make_exception_arg_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_make_exception_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 196;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_7 };
        tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_7 );
    assert( tmp_raise_type_8 != NULL );
    exception_type = tmp_raise_type_8;
    exception_lineno = 196;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_24:;
    tmp_source_name_87 = par_self;

    CHECK_OBJECT( tmp_source_name_87 );
    tmp_source_name_86 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain__rs485_mode );
    if ( tmp_source_name_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_loopback );
    Py_DECREF( tmp_source_name_86 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 199;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_source_name_88 = const_str_digest_d025f041d7ca1946035c849c7d7fca6e;
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_format );
    assert( tmp_called_name_15 != NULL );
    tmp_source_name_90 = par_self;

    CHECK_OBJECT( tmp_source_name_90 );
    tmp_source_name_89 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain__rs485_mode );
    if ( tmp_source_name_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 202;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_loopback );
    Py_DECREF( tmp_source_name_89 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 202;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_make_exception_arg_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_make_exception_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_8 };
        tmp_raise_type_9 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_8 );
    assert( tmp_raise_type_9 != NULL );
    exception_type = tmp_raise_type_9;
    exception_lineno = 200;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_25:;
    tmp_source_name_91 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_91 == NULL ))
    {
        tmp_source_name_91 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_91 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 203;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_RTS_CONTROL_TOGGLE );
    if ( tmp_assattr_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_28 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_28 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_28, const_str_plain_fRtsControl, tmp_assattr_name_28 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_28 );

        exception_lineno = 203;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_28 );
    tmp_assattr_name_29 = const_int_0;
    tmp_assattr_target_29 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_29 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_29, const_str_plain_fOutxCtsFlow, tmp_assattr_name_29 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    branch_end_19:;
    tmp_source_name_92 = par_self;

    CHECK_OBJECT( tmp_source_name_92 );
    tmp_cond_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain__dsrdtr );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 206;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_source_name_93 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_93 == NULL ))
    {
        tmp_source_name_93 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_93 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 207;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_DTR_CONTROL_HANDSHAKE );
    if ( tmp_assattr_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_30 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_30 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_30, const_str_plain_fDtrControl, tmp_assattr_name_30 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_30 );

        exception_lineno = 207;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_30 );
    goto branch_end_26;
    branch_no_26:;
    tmp_source_name_94 = par_self;

    CHECK_OBJECT( tmp_source_name_94 );
    tmp_cond_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain__dtr_state );
    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        exception_lineno = 209;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_source_name_95 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_95 == NULL ))
    {
        tmp_source_name_95 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_95 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 209;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_DTR_CONTROL_ENABLE );
    if ( tmp_assattr_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_source_name_96 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_96 == NULL ))
    {
        tmp_source_name_96 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_96 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 209;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain_DTR_CONTROL_DISABLE );
    if ( tmp_assattr_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    condexpr_end_2:;
    tmp_assattr_target_31 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_31 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_31, const_str_plain_fDtrControl, tmp_assattr_name_31 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_31 );

        exception_lineno = 209;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_31 );
    branch_end_26:;
    tmp_source_name_97 = par_self;

    CHECK_OBJECT( tmp_source_name_97 );
    tmp_assattr_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain__dsrdtr );
    if ( tmp_assattr_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_32 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_32 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_32, const_str_plain_fOutxDsrFlow, tmp_assattr_name_32 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_32 );

        exception_lineno = 210;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_32 );
    tmp_source_name_98 = par_self;

    CHECK_OBJECT( tmp_source_name_98 );
    tmp_assattr_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain__xonxoff );
    if ( tmp_assattr_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_33 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_33 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_33, const_str_plain_fOutX, tmp_assattr_name_33 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_33 );

        exception_lineno = 211;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_33 );
    tmp_source_name_99 = par_self;

    CHECK_OBJECT( tmp_source_name_99 );
    tmp_assattr_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain__xonxoff );
    if ( tmp_assattr_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_34 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_34 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_34, const_str_plain_fInX, tmp_assattr_name_34 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_34 );

        exception_lineno = 212;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_34 );
    tmp_assattr_name_35 = const_int_0;
    tmp_assattr_target_35 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_35 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_35, const_str_plain_fNull, tmp_assattr_name_35 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_36 = const_int_0;
    tmp_assattr_target_36 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_36 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_36, const_str_plain_fErrorChar, tmp_assattr_name_36 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_37 = const_int_0;
    tmp_assattr_target_37 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_37 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_37, const_str_plain_fAbortOnError, tmp_assattr_name_37 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_100 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_100 == NULL ))
    {
        tmp_source_name_100 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_100 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 216;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain_XON );
    if ( tmp_assattr_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_38 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_38 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_38, const_str_plain_XonChar, tmp_assattr_name_38 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_38 );

        exception_lineno = 216;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_38 );
    tmp_source_name_101 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_101 == NULL ))
    {
        tmp_source_name_101 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_101 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 217;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_101, const_str_plain_XOFF );
    if ( tmp_assattr_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_39 = var_comDCB;

    CHECK_OBJECT( tmp_assattr_target_39 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_39, const_str_plain_XoffChar, tmp_assattr_name_39 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_39 );

        exception_lineno = 217;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_39 );
    tmp_source_name_102 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_102 == NULL ))
    {
        tmp_source_name_102 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_102 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 219;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_102, const_str_plain_SetCommState );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_103 = par_self;

    CHECK_OBJECT( tmp_source_name_103 );
    tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_103, const_str_plain__port_handle );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 219;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_23 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 219;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_25 = var_comDCB;

    CHECK_OBJECT( tmp_args_element_name_25 );
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_args_element_name_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_23 );

        exception_lineno = 219;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_cond_value_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_23 );
    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_cond_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 219;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_no_27;
    }
    else
    {
        goto branch_yes_27;
    }
    branch_yes_27:;
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SerialException" );
        exception_tb = NULL;

        exception_lineno = 220;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_104 = const_str_digest_4eef2f6a61d78aeba404d85f811ca17f;
    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_104, const_str_plain_format );
    assert( tmp_called_name_18 != NULL );
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_6 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 222;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 222;
    tmp_args_element_name_27 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_WinError );
    if ( tmp_args_element_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_18 );

        exception_lineno = 222;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 221;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_args_element_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_element_name_27 );
    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_4d073a349b472b12ad07dae0c26e6c32->m_frame.f_lineno = 220;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_raise_type_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_args_element_name_26 );
    if ( tmp_raise_type_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_10;
    exception_lineno = 220;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_27:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d073a349b472b12ad07dae0c26e6c32 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d073a349b472b12ad07dae0c26e6c32 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d073a349b472b12ad07dae0c26e6c32, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d073a349b472b12ad07dae0c26e6c32->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d073a349b472b12ad07dae0c26e6c32, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_4d073a349b472b12ad07dae0c26e6c32, type_description ,par_self, var_timeouts, var_comDCB );

    // Release cached frame.
    if ( frame_4d073a349b472b12ad07dae0c26e6c32 == cache_frame_4d073a349b472b12ad07dae0c26e6c32 )
    {
        Py_DECREF( frame_4d073a349b472b12ad07dae0c26e6c32 );
    }
    cache_frame_4d073a349b472b12ad07dae0c26e6c32 = NULL;

    assertFrameObject( frame_4d073a349b472b12ad07dae0c26e6c32 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_3__reconfigure_port );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_timeouts );
    Py_DECREF( var_timeouts );
    var_timeouts = NULL;

    CHECK_OBJECT( (PyObject *)var_comDCB );
    Py_DECREF( var_comDCB );
    var_comDCB = NULL;

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

    Py_XDECREF( var_timeouts );
    var_timeouts = NULL;

    Py_XDECREF( var_comDCB );
    var_comDCB = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_3__reconfigure_port );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_4__close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_result;
    PyObject *tmp_return_value;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_471fab22c01b95e19d3b72d803023f0d = NULL;

    struct Nuitka_FrameObject *frame_471fab22c01b95e19d3b72d803023f0d;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_471fab22c01b95e19d3b72d803023f0d, codeobj_471fab22c01b95e19d3b72d803023f0d, module_serial$serialwin32, sizeof(PyObject *) );
    frame_471fab22c01b95e19d3b72d803023f0d = cache_frame_471fab22c01b95e19d3b72d803023f0d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_471fab22c01b95e19d3b72d803023f0d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_471fab22c01b95e19d3b72d803023f0d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__port_handle );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 231;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SetCommTimeouts );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 231;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__orgTimeouts );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 231;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_471fab22c01b95e19d3b72d803023f0d->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__overlapped_read );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_471fab22c01b95e19d3b72d803023f0d->m_frame.f_lineno = 233;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_cancel_read );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 234;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_CloseHandle );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__overlapped_read );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 234;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_hEvent );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 234;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_471fab22c01b95e19d3b72d803023f0d->m_frame.f_lineno = 234;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__overlapped_read, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__overlapped_write );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_471fab22c01b95e19d3b72d803023f0d->m_frame.f_lineno = 237;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_cancel_write );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 238;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_CloseHandle );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = par_self;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__overlapped_write );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 238;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_hEvent );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 238;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_471fab22c01b95e19d3b72d803023f0d->m_frame.f_lineno = 238;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__overlapped_write, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 240;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_CloseHandle );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_self;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__port_handle );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 240;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_471fab22c01b95e19d3b72d803023f0d->m_frame.f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__port_handle, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_471fab22c01b95e19d3b72d803023f0d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_471fab22c01b95e19d3b72d803023f0d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_471fab22c01b95e19d3b72d803023f0d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_471fab22c01b95e19d3b72d803023f0d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_471fab22c01b95e19d3b72d803023f0d, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_471fab22c01b95e19d3b72d803023f0d, type_description ,par_self );

    // Release cached frame.
    if ( frame_471fab22c01b95e19d3b72d803023f0d == cache_frame_471fab22c01b95e19d3b72d803023f0d )
    {
        Py_DECREF( frame_471fab22c01b95e19d3b72d803023f0d );
    }
    cache_frame_471fab22c01b95e19d3b72d803023f0d = NULL;

    assertFrameObject( frame_471fab22c01b95e19d3b72d803023f0d );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_4__close );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_4__close );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_5_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ddafb67b7790a03d104ddb0d65ca3347 = NULL;

    struct Nuitka_FrameObject *frame_ddafb67b7790a03d104ddb0d65ca3347;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ddafb67b7790a03d104ddb0d65ca3347, codeobj_ddafb67b7790a03d104ddb0d65ca3347, module_serial$serialwin32, sizeof(PyObject *) );
    frame_ddafb67b7790a03d104ddb0d65ca3347 = cache_frame_ddafb67b7790a03d104ddb0d65ca3347;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ddafb67b7790a03d104ddb0d65ca3347 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ddafb67b7790a03d104ddb0d65ca3347 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 245;
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
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ddafb67b7790a03d104ddb0d65ca3347->m_frame.f_lineno = 246;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_False;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_is_open, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ddafb67b7790a03d104ddb0d65ca3347 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ddafb67b7790a03d104ddb0d65ca3347 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ddafb67b7790a03d104ddb0d65ca3347, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ddafb67b7790a03d104ddb0d65ca3347->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ddafb67b7790a03d104ddb0d65ca3347, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_ddafb67b7790a03d104ddb0d65ca3347, type_description ,par_self );

    // Release cached frame.
    if ( frame_ddafb67b7790a03d104ddb0d65ca3347 == cache_frame_ddafb67b7790a03d104ddb0d65ca3347 )
    {
        Py_DECREF( frame_ddafb67b7790a03d104ddb0d65ca3347 );
    }
    cache_frame_ddafb67b7790a03d104ddb0d65ca3347 = NULL;

    assertFrameObject( frame_ddafb67b7790a03d104ddb0d65ca3347 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_5_close );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_5_close );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_6_in_waiting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_flags = NULL;
    PyObject *var_comstat = NULL;
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
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_3b185e7502488044d3ca6f61ac9648fd = NULL;

    struct Nuitka_FrameObject *frame_3b185e7502488044d3ca6f61ac9648fd;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b185e7502488044d3ca6f61ac9648fd, codeobj_3b185e7502488044d3ca6f61ac9648fd, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_3b185e7502488044d3ca6f61ac9648fd = cache_frame_3b185e7502488044d3ca6f61ac9648fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b185e7502488044d3ca6f61ac9648fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b185e7502488044d3ca6f61ac9648fd ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 254;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3b185e7502488044d3ca6f61ac9648fd->m_frame.f_lineno = 254;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_flags == NULL );
    var_flags = tmp_assign_source_1;

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 255;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3b185e7502488044d3ca6f61ac9648fd->m_frame.f_lineno = 255;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_COMSTAT );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_comstat == NULL );
    var_comstat = tmp_assign_source_2;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 256;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ClearCommError );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 256;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 256;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_flags;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_3b185e7502488044d3ca6f61ac9648fd->m_frame.f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 256;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 256;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_comstat;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_3b185e7502488044d3ca6f61ac9648fd->m_frame.f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 256;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_3b185e7502488044d3ca6f61ac9648fd->m_frame.f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_4 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 256;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

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

        exception_lineno = 257;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = const_str_digest_2ed77bc529ac5233e189e9c63149ac9b;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
    assert( tmp_called_name_3 != NULL );
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 257;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3b185e7502488044d3ca6f61ac9648fd->m_frame.f_lineno = 257;
    tmp_args_element_name_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_WinError );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 257;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_3b185e7502488044d3ca6f61ac9648fd->m_frame.f_lineno = 257;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_3b185e7502488044d3ca6f61ac9648fd->m_frame.f_lineno = 257;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 257;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_4 = var_comstat;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cbInQue );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b185e7502488044d3ca6f61ac9648fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b185e7502488044d3ca6f61ac9648fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b185e7502488044d3ca6f61ac9648fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b185e7502488044d3ca6f61ac9648fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b185e7502488044d3ca6f61ac9648fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b185e7502488044d3ca6f61ac9648fd, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_3b185e7502488044d3ca6f61ac9648fd, type_description ,par_self, var_flags, var_comstat );

    // Release cached frame.
    if ( frame_3b185e7502488044d3ca6f61ac9648fd == cache_frame_3b185e7502488044d3ca6f61ac9648fd )
    {
        Py_DECREF( frame_3b185e7502488044d3ca6f61ac9648fd );
    }
    cache_frame_3b185e7502488044d3ca6f61ac9648fd = NULL;

    assertFrameObject( frame_3b185e7502488044d3ca6f61ac9648fd );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_6_in_waiting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_flags );
    Py_DECREF( var_flags );
    var_flags = NULL;

    CHECK_OBJECT( (PyObject *)var_comstat );
    Py_DECREF( var_comstat );
    var_comstat = NULL;

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

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_comstat );
    var_comstat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_6_in_waiting );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_7_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_flags = NULL;
    PyObject *var_comstat = NULL;
    PyObject *var_n = NULL;
    PyObject *var_buf = NULL;
    PyObject *var_rc = NULL;
    PyObject *var_read_ok = NULL;
    PyObject *var_result_ok = NULL;
    PyObject *var_read = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_instance_11;
    PyObject *tmp_called_instance_12;
    PyObject *tmp_called_instance_13;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
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
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_15023db665da047c3cbdc5f950f1e4e2 = NULL;

    struct Nuitka_FrameObject *frame_15023db665da047c3cbdc5f950f1e4e2;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_15023db665da047c3cbdc5f950f1e4e2, codeobj_15023db665da047c3cbdc5f950f1e4e2, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_15023db665da047c3cbdc5f950f1e4e2 = cache_frame_15023db665da047c3cbdc5f950f1e4e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_15023db665da047c3cbdc5f950f1e4e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_15023db665da047c3cbdc5f950f1e4e2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 266;
        type_description = "oooooooooo";
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 267;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 267;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = par_size;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description = "oooooooooo";
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 269;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ResetEvent );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__overlapped_read );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 269;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hEvent );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 269;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 269;
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


        exception_lineno = 269;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 270;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 270;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_flags == NULL );
    var_flags = tmp_assign_source_1;

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 271;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 271;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_COMSTAT );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_comstat == NULL );
    var_comstat = tmp_assign_source_2;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 272;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ClearCommError );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 272;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 272;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_flags;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 272;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 272;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 272;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = var_comstat;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 272;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 272;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 272;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_5 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 272;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SerialException" );
        exception_tb = NULL;

        exception_lineno = 273;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = const_str_digest_2ed77bc529ac5233e189e9c63149ac9b;
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_format );
    assert( tmp_called_name_4 != NULL );
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 273;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 273;
    tmp_args_element_name_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_WinError );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 273;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 273;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 273;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 273;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_timeout );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 274;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_5 != NULL );
    tmp_source_name_9 = var_comstat;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_cbInQue );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = par_size;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 274;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_3 = par_size;

    CHECK_OBJECT( tmp_assign_source_3 );
    Py_INCREF( tmp_assign_source_3 );
    condexpr_end_1:;
    assert( var_n == NULL );
    var_n = tmp_assign_source_3;

    tmp_compare_left_3 = var_n;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 276;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_n;

    CHECK_OBJECT( tmp_args_element_name_11 );
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 276;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_create_string_buffer, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_buf == NULL );
    var_buf = tmp_assign_source_4;

    tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_7 == NULL ))
    {
        tmp_called_instance_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 277;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 277;
    tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_DWORD );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_rc == NULL );
    var_rc = tmp_assign_source_5;

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 278;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ReadFile );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__port_handle );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 279;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = var_buf;

    CHECK_OBJECT( tmp_args_element_name_13 );
    tmp_args_element_name_14 = var_n;

    CHECK_OBJECT( tmp_args_element_name_14 );
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_8 == NULL ))
    {
        tmp_called_instance_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_8 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 282;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = var_rc;

    CHECK_OBJECT( tmp_args_element_name_16 );
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_args_element_name_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 282;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_12 );
        Py_DECREF( tmp_args_element_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 283;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_byref );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_12 );
        Py_DECREF( tmp_args_element_name_15 );

        exception_lineno = 283;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = par_self;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__overlapped_read );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_12 );
        Py_DECREF( tmp_args_element_name_15 );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 283;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_args_element_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_12 );
        Py_DECREF( tmp_args_element_name_15 );

        exception_lineno = 283;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 278;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_17 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_12 );
    Py_DECREF( tmp_args_element_name_15 );
    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_read_ok == NULL );
    var_read_ok = tmp_assign_source_6;

    tmp_operand_name_1 = var_read_ok;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description = "oooooooooo";
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
    tmp_called_instance_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_9 == NULL ))
    {
        tmp_called_instance_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 284;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 284;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_GetLastError );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = PyTuple_New( 2 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 284;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_ERROR_SUCCESS );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );

        exception_lineno = 284;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 284;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_ERROR_IO_PENDING );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );

        exception_lineno = 284;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_1 );
    tmp_and_right_value_1 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_3 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SerialException" );
        exception_tb = NULL;

        exception_lineno = 285;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_16 = const_str_digest_7e584289af6145c25f7a5a475f55a53e;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_format );
    assert( tmp_called_name_9 != NULL );
    tmp_called_instance_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_10 == NULL ))
    {
        tmp_called_instance_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_10 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 285;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 285;
    tmp_args_element_name_20 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_WinError );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 285;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 285;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_args_element_name_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 285;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 285;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 286;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_GetOverlappedResult );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = par_self;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__port_handle );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 287;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 288;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_byref );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_21 );

        exception_lineno = 288;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = par_self;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__overlapped_read );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_21 );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 288;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 288;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_args_element_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_21 );

        exception_lineno = 288;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_11 == NULL ))
    {
        tmp_called_instance_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_11 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_21 );
        Py_DECREF( tmp_args_element_name_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 289;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_25 = var_rc;

    CHECK_OBJECT( tmp_args_element_name_25 );
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 289;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_args_element_name_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_21 );
        Py_DECREF( tmp_args_element_name_22 );

        exception_lineno = 289;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_26 = Py_True;
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 286;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_24, tmp_args_element_name_26 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_21 );
    Py_DECREF( tmp_args_element_name_22 );
    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result_ok == NULL );
    var_result_ok = tmp_assign_source_7;

    tmp_cond_value_4 = var_result_ok;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_called_instance_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_12 == NULL ))
    {
        tmp_called_instance_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 292;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 292;
    tmp_compare_left_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_12, const_str_plain_GetLastError );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 292;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ERROR_OPERATION_ABORTED );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 292;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 292;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SerialException" );
        exception_tb = NULL;

        exception_lineno = 293;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_22 = const_str_digest_1ad7c58b26db5ec7add099b988e90107;
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_format );
    assert( tmp_called_name_13 != NULL );
    tmp_called_instance_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_13 == NULL ))
    {
        tmp_called_instance_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_13 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 293;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 293;
    tmp_args_element_name_28 = CALL_METHOD_NO_ARGS( tmp_called_instance_13, const_str_plain_WinError );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 293;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 293;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_args_element_name_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_args_element_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_15023db665da047c3cbdc5f950f1e4e2->m_frame.f_lineno = 293;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_27 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 293;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_7:;
    branch_no_6:;
    tmp_source_name_23 = var_buf;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_raw );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = var_rc;

    CHECK_OBJECT( tmp_source_name_24 );
    tmp_slice_upper_1 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_value );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_slice_source_1 );

        exception_lineno = 294;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_read == NULL );
    var_read = tmp_assign_source_8;

    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_9 = const_str_empty;
    assert( var_read == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_read = tmp_assign_source_9;

    branch_end_4:;
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_10 = const_str_empty;
    assert( var_read == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_read = tmp_assign_source_10;

    branch_end_2:;
    tmp_str_arg_1 = var_read;

    if ( tmp_str_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;

        exception_lineno = 299;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15023db665da047c3cbdc5f950f1e4e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_15023db665da047c3cbdc5f950f1e4e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15023db665da047c3cbdc5f950f1e4e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_15023db665da047c3cbdc5f950f1e4e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_15023db665da047c3cbdc5f950f1e4e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_15023db665da047c3cbdc5f950f1e4e2, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_15023db665da047c3cbdc5f950f1e4e2, type_description ,par_self, par_size, var_flags, var_comstat, var_n, var_buf, var_rc, var_read_ok, var_result_ok, var_read );

    // Release cached frame.
    if ( frame_15023db665da047c3cbdc5f950f1e4e2 == cache_frame_15023db665da047c3cbdc5f950f1e4e2 )
    {
        Py_DECREF( frame_15023db665da047c3cbdc5f950f1e4e2 );
    }
    cache_frame_15023db665da047c3cbdc5f950f1e4e2 = NULL;

    assertFrameObject( frame_15023db665da047c3cbdc5f950f1e4e2 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_7_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_comstat );
    var_comstat = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    Py_XDECREF( var_rc );
    var_rc = NULL;

    Py_XDECREF( var_read_ok );
    var_read_ok = NULL;

    Py_XDECREF( var_result_ok );
    var_result_ok = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

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

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_comstat );
    var_comstat = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    Py_XDECREF( var_rc );
    var_rc = NULL;

    Py_XDECREF( var_read_ok );
    var_read_ok = NULL;

    Py_XDECREF( var_result_ok );
    var_result_ok = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_7_read );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_8_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_n = NULL;
    PyObject *var_success = NULL;
    PyObject *var_errorcode = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_return_value;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ed1bb012a51a4c7b4171eafd13374953 = NULL;

    struct Nuitka_FrameObject *frame_ed1bb012a51a4c7b4171eafd13374953;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ed1bb012a51a4c7b4171eafd13374953, codeobj_ed1bb012a51a4c7b4171eafd13374953, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_ed1bb012a51a4c7b4171eafd13374953 = cache_frame_ed1bb012a51a4c7b4171eafd13374953;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ed1bb012a51a4c7b4171eafd13374953 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ed1bb012a51a4c7b4171eafd13374953 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 303;
        type_description = "ooooo";
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 304;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 304;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_to_bytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_bytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "to_bytes" );
        exception_tb = NULL;

        exception_lineno = 308;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_data;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 308;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_data;
        assert( old != NULL );
        par_data = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_cond_value_2 = par_data;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 311;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 311;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_2;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 312;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_WriteFile );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 312;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_data;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_len_arg_1 = par_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_args_element_name_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 312;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 312;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = var_n;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 312;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 312;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__overlapped_write );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 312;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 312;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_7 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_success == NULL );
    var_success = tmp_assign_source_3;

    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__write_timeout );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 313;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_operand_name_1 = var_success;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description = "ooooo";
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
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 314;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 314;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_GetLastError );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = PyTuple_New( 2 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 314;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ERROR_SUCCESS );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );

        exception_lineno = 314;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 314;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ERROR_IO_PENDING );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );

        exception_lineno = 314;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_1 );
    tmp_and_right_value_1 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_3 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SerialException" );
        exception_tb = NULL;

        exception_lineno = 315;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = const_str_digest_2fee4f8a7222f5d8adcdf46b602cea8b;
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_format );
    assert( tmp_called_name_4 != NULL );
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 315;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 315;
    tmp_args_element_name_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_WinError );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 315;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 315;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 315;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 315;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 319;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_GetOverlappedResult );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__port_handle );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 319;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__overlapped_write );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 319;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 319;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = var_n;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 319;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 319;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = Py_True;
    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 319;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 320;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 320;
    tmp_compare_left_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_GetLastError );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 320;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ERROR_OPERATION_ABORTED );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 320;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 320;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_13 = var_n;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_value );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_5:;
    tmp_source_name_14 = var_n;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_value );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_data;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_right_3 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 322;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 322;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_raise_type_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_writeTimeoutError );

    if (unlikely( tmp_raise_type_3 == NULL ))
    {
        tmp_raise_type_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_writeTimeoutError );
    }

    if ( tmp_raise_type_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "writeTimeoutError" );
        exception_tb = NULL;

        exception_lineno = 323;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_3;
    Py_INCREF( tmp_raise_type_3 );
    exception_lineno = 323;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooooo";
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_source_name_15 = var_n;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_value );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_cond_value_4 = var_success;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 326;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_ERROR_SUCCESS );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_7 == NULL ))
    {
        tmp_called_instance_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 326;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 326;
    tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_GetLastError );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    condexpr_end_1:;
    assert( var_errorcode == NULL );
    var_errorcode = tmp_assign_source_4;

    tmp_compare_left_4 = var_errorcode;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = PyTuple_New( 3 );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_compare_right_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 327;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_ERROR_INVALID_USER_BUFFER );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 327;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_4, 0, tmp_tuple_element_2 );
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_compare_right_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 327;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ERROR_NOT_ENOUGH_MEMORY );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 327;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_4, 1, tmp_tuple_element_2 );
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_compare_right_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 328;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_ERROR_OPERATION_ABORTED );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 328;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_4, 2, tmp_tuple_element_2 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_5 = var_errorcode;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = PyTuple_New( 2 );
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_compare_right_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 330;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_ERROR_SUCCESS );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_5 );

        exception_lineno = 330;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_5, 0, tmp_tuple_element_3 );
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_compare_right_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 330;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ERROR_IO_PENDING );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_5 );

        exception_lineno = 330;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_5, 1, tmp_tuple_element_3 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_2 == -1) );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_len_arg_3 = par_data;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_return_value = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_8;
    branch_no_8:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

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

        exception_lineno = 334;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_22 = const_str_digest_2fee4f8a7222f5d8adcdf46b602cea8b;
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_format );
    assert( tmp_called_name_7 != NULL );
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_8 == NULL ))
    {
        tmp_called_instance_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 334;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 334;
    tmp_args_element_name_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_WinError );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 334;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 334;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_ed1bb012a51a4c7b4171eafd13374953->m_frame.f_lineno = 334;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 334;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooooo";
    goto frame_exception_exit_1;
    branch_end_8:;
    branch_end_7:;
    branch_end_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed1bb012a51a4c7b4171eafd13374953 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed1bb012a51a4c7b4171eafd13374953 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed1bb012a51a4c7b4171eafd13374953 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed1bb012a51a4c7b4171eafd13374953, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed1bb012a51a4c7b4171eafd13374953->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed1bb012a51a4c7b4171eafd13374953, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_ed1bb012a51a4c7b4171eafd13374953, type_description ,par_self, par_data, var_n, var_success, var_errorcode );

    // Release cached frame.
    if ( frame_ed1bb012a51a4c7b4171eafd13374953 == cache_frame_ed1bb012a51a4c7b4171eafd13374953 )
    {
        Py_DECREF( frame_ed1bb012a51a4c7b4171eafd13374953 );
    }
    cache_frame_ed1bb012a51a4c7b4171eafd13374953 = NULL;

    assertFrameObject( frame_ed1bb012a51a4c7b4171eafd13374953 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_8_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_success );
    var_success = NULL;

    Py_XDECREF( var_errorcode );
    var_errorcode = NULL;

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

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_success );
    var_success = NULL;

    Py_XDECREF( var_errorcode );
    var_errorcode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_8_write );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_9_flush( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3d1df36bfbc83d0ff1a67096ced046ae = NULL;

    struct Nuitka_FrameObject *frame_3d1df36bfbc83d0ff1a67096ced046ae;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d1df36bfbc83d0ff1a67096ced046ae, codeobj_3d1df36bfbc83d0ff1a67096ced046ae, module_serial$serialwin32, sizeof(PyObject *) );
    frame_3d1df36bfbc83d0ff1a67096ced046ae = cache_frame_3d1df36bfbc83d0ff1a67096ced046ae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d1df36bfbc83d0ff1a67096ced046ae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d1df36bfbc83d0ff1a67096ced046ae ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_out_waiting );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 343;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 344;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    frame_3d1df36bfbc83d0ff1a67096ced046ae->m_frame.f_lineno = 344;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sleep, &PyTuple_GET_ITEM( const_tuple_float_0_05_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d1df36bfbc83d0ff1a67096ced046ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d1df36bfbc83d0ff1a67096ced046ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d1df36bfbc83d0ff1a67096ced046ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d1df36bfbc83d0ff1a67096ced046ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d1df36bfbc83d0ff1a67096ced046ae, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_3d1df36bfbc83d0ff1a67096ced046ae, type_description ,par_self );

    // Release cached frame.
    if ( frame_3d1df36bfbc83d0ff1a67096ced046ae == cache_frame_3d1df36bfbc83d0ff1a67096ced046ae )
    {
        Py_DECREF( frame_3d1df36bfbc83d0ff1a67096ced046ae );
    }
    cache_frame_3d1df36bfbc83d0ff1a67096ced046ae = NULL;

    assertFrameObject( frame_3d1df36bfbc83d0ff1a67096ced046ae );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_9_flush );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_9_flush );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_10_reset_input_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c1bf80527290b34fe1b8d1790d8cfdd2 = NULL;

    struct Nuitka_FrameObject *frame_c1bf80527290b34fe1b8d1790d8cfdd2;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c1bf80527290b34fe1b8d1790d8cfdd2, codeobj_c1bf80527290b34fe1b8d1790d8cfdd2, module_serial$serialwin32, sizeof(PyObject *) );
    frame_c1bf80527290b34fe1b8d1790d8cfdd2 = cache_frame_c1bf80527290b34fe1b8d1790d8cfdd2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c1bf80527290b34fe1b8d1790d8cfdd2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c1bf80527290b34fe1b8d1790d8cfdd2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 351;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 352;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 352;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 353;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PurgeComm );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 353;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 353;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PURGE_RXCLEAR );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 353;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 353;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_PURGE_RXABORT );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 353;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 353;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_c1bf80527290b34fe1b8d1790d8cfdd2->m_frame.f_lineno = 353;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1bf80527290b34fe1b8d1790d8cfdd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1bf80527290b34fe1b8d1790d8cfdd2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c1bf80527290b34fe1b8d1790d8cfdd2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c1bf80527290b34fe1b8d1790d8cfdd2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c1bf80527290b34fe1b8d1790d8cfdd2, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_c1bf80527290b34fe1b8d1790d8cfdd2, type_description ,par_self );

    // Release cached frame.
    if ( frame_c1bf80527290b34fe1b8d1790d8cfdd2 == cache_frame_c1bf80527290b34fe1b8d1790d8cfdd2 )
    {
        Py_DECREF( frame_c1bf80527290b34fe1b8d1790d8cfdd2 );
    }
    cache_frame_c1bf80527290b34fe1b8d1790d8cfdd2 = NULL;

    assertFrameObject( frame_c1bf80527290b34fe1b8d1790d8cfdd2 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_10_reset_input_buffer );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_10_reset_input_buffer );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_11_reset_output_buffer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d9a64f9f9f18898b733f3eda3db92a6e = NULL;

    struct Nuitka_FrameObject *frame_d9a64f9f9f18898b733f3eda3db92a6e;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9a64f9f9f18898b733f3eda3db92a6e, codeobj_d9a64f9f9f18898b733f3eda3db92a6e, module_serial$serialwin32, sizeof(PyObject *) );
    frame_d9a64f9f9f18898b733f3eda3db92a6e = cache_frame_d9a64f9f9f18898b733f3eda3db92a6e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9a64f9f9f18898b733f3eda3db92a6e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9a64f9f9f18898b733f3eda3db92a6e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 360;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 361;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 361;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 362;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PurgeComm );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 362;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 362;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PURGE_TXCLEAR );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 362;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 362;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_PURGE_TXABORT );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 362;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 362;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_d9a64f9f9f18898b733f3eda3db92a6e->m_frame.f_lineno = 362;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9a64f9f9f18898b733f3eda3db92a6e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9a64f9f9f18898b733f3eda3db92a6e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9a64f9f9f18898b733f3eda3db92a6e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9a64f9f9f18898b733f3eda3db92a6e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9a64f9f9f18898b733f3eda3db92a6e, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_d9a64f9f9f18898b733f3eda3db92a6e, type_description ,par_self );

    // Release cached frame.
    if ( frame_d9a64f9f9f18898b733f3eda3db92a6e == cache_frame_d9a64f9f9f18898b733f3eda3db92a6e )
    {
        Py_DECREF( frame_d9a64f9f9f18898b733f3eda3db92a6e );
    }
    cache_frame_d9a64f9f9f18898b733f3eda3db92a6e = NULL;

    assertFrameObject( frame_d9a64f9f9f18898b733f3eda3db92a6e );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_11_reset_output_buffer );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_11_reset_output_buffer );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_12__update_break_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4f5dbb9a17af5e00861ce4f55c93689b = NULL;

    struct Nuitka_FrameObject *frame_4f5dbb9a17af5e00861ce4f55c93689b;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f5dbb9a17af5e00861ce4f55c93689b, codeobj_4f5dbb9a17af5e00861ce4f55c93689b, module_serial$serialwin32, sizeof(PyObject *) );
    frame_4f5dbb9a17af5e00861ce4f55c93689b = cache_frame_4f5dbb9a17af5e00861ce4f55c93689b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f5dbb9a17af5e00861ce4f55c93689b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f5dbb9a17af5e00861ce4f55c93689b ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 366;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 367;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 367;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__break_state );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 368;
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 369;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SetCommBreak );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 369;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_4f5dbb9a17af5e00861ce4f55c93689b->m_frame.f_lineno = 369;
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


        exception_lineno = 369;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 371;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ClearCommBreak );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 371;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_4f5dbb9a17af5e00861ce4f55c93689b->m_frame.f_lineno = 371;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f5dbb9a17af5e00861ce4f55c93689b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f5dbb9a17af5e00861ce4f55c93689b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f5dbb9a17af5e00861ce4f55c93689b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f5dbb9a17af5e00861ce4f55c93689b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f5dbb9a17af5e00861ce4f55c93689b, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_4f5dbb9a17af5e00861ce4f55c93689b, type_description ,par_self );

    // Release cached frame.
    if ( frame_4f5dbb9a17af5e00861ce4f55c93689b == cache_frame_4f5dbb9a17af5e00861ce4f55c93689b )
    {
        Py_DECREF( frame_4f5dbb9a17af5e00861ce4f55c93689b );
    }
    cache_frame_4f5dbb9a17af5e00861ce4f55c93689b = NULL;

    assertFrameObject( frame_4f5dbb9a17af5e00861ce4f55c93689b );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_12__update_break_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_12__update_break_state );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_13__update_rts_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4619b3d7f34369a92cb3769866f88eda = NULL;

    struct Nuitka_FrameObject *frame_4619b3d7f34369a92cb3769866f88eda;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4619b3d7f34369a92cb3769866f88eda, codeobj_4619b3d7f34369a92cb3769866f88eda, module_serial$serialwin32, sizeof(PyObject *) );
    frame_4619b3d7f34369a92cb3769866f88eda = cache_frame_4619b3d7f34369a92cb3769866f88eda;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4619b3d7f34369a92cb3769866f88eda );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4619b3d7f34369a92cb3769866f88eda ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__rts_state );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 375;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 376;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EscapeCommFunction );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 376;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 376;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SETRTS );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 376;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_4619b3d7f34369a92cb3769866f88eda->m_frame.f_lineno = 376;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 378;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_EscapeCommFunction );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 378;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 378;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_CLRRTS );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 378;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_4619b3d7f34369a92cb3769866f88eda->m_frame.f_lineno = 378;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4619b3d7f34369a92cb3769866f88eda );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4619b3d7f34369a92cb3769866f88eda );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4619b3d7f34369a92cb3769866f88eda, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4619b3d7f34369a92cb3769866f88eda->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4619b3d7f34369a92cb3769866f88eda, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_4619b3d7f34369a92cb3769866f88eda, type_description ,par_self );

    // Release cached frame.
    if ( frame_4619b3d7f34369a92cb3769866f88eda == cache_frame_4619b3d7f34369a92cb3769866f88eda )
    {
        Py_DECREF( frame_4619b3d7f34369a92cb3769866f88eda );
    }
    cache_frame_4619b3d7f34369a92cb3769866f88eda = NULL;

    assertFrameObject( frame_4619b3d7f34369a92cb3769866f88eda );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_13__update_rts_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_13__update_rts_state );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_14__update_dtr_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4d04645b0f917be1259a6434e0805129 = NULL;

    struct Nuitka_FrameObject *frame_4d04645b0f917be1259a6434e0805129;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d04645b0f917be1259a6434e0805129, codeobj_4d04645b0f917be1259a6434e0805129, module_serial$serialwin32, sizeof(PyObject *) );
    frame_4d04645b0f917be1259a6434e0805129 = cache_frame_4d04645b0f917be1259a6434e0805129;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d04645b0f917be1259a6434e0805129 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d04645b0f917be1259a6434e0805129 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__dtr_state );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 382;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 383;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EscapeCommFunction );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 383;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 383;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SETDTR );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 383;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_4d04645b0f917be1259a6434e0805129->m_frame.f_lineno = 383;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 385;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_EscapeCommFunction );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 385;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 385;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_CLRDTR );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 385;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_4d04645b0f917be1259a6434e0805129->m_frame.f_lineno = 385;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d04645b0f917be1259a6434e0805129 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d04645b0f917be1259a6434e0805129 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d04645b0f917be1259a6434e0805129, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d04645b0f917be1259a6434e0805129->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d04645b0f917be1259a6434e0805129, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_4d04645b0f917be1259a6434e0805129, type_description ,par_self );

    // Release cached frame.
    if ( frame_4d04645b0f917be1259a6434e0805129 == cache_frame_4d04645b0f917be1259a6434e0805129 )
    {
        Py_DECREF( frame_4d04645b0f917be1259a6434e0805129 );
    }
    cache_frame_4d04645b0f917be1259a6434e0805129 = NULL;

    assertFrameObject( frame_4d04645b0f917be1259a6434e0805129 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_14__update_dtr_state );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_14__update_dtr_state );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_15__GetCommModemStatus( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_stat = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
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
    static struct Nuitka_FrameObject *cache_frame_d27c9df37b699195f6a0445f4d69fb86 = NULL;

    struct Nuitka_FrameObject *frame_d27c9df37b699195f6a0445f4d69fb86;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d27c9df37b699195f6a0445f4d69fb86, codeobj_d27c9df37b699195f6a0445f4d69fb86, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_d27c9df37b699195f6a0445f4d69fb86 = cache_frame_d27c9df37b699195f6a0445f4d69fb86;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d27c9df37b699195f6a0445f4d69fb86 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d27c9df37b699195f6a0445f4d69fb86 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 388;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 389;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 389;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 390;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    frame_d27c9df37b699195f6a0445f4d69fb86->m_frame.f_lineno = 390;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_stat == NULL );
    var_stat = tmp_assign_source_1;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 391;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_GetCommModemStatus );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 391;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 391;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_stat;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_d27c9df37b699195f6a0445f4d69fb86->m_frame.f_lineno = 391;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 391;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_d27c9df37b699195f6a0445f4d69fb86->m_frame.f_lineno = 391;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = var_stat;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d27c9df37b699195f6a0445f4d69fb86 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d27c9df37b699195f6a0445f4d69fb86 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d27c9df37b699195f6a0445f4d69fb86 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d27c9df37b699195f6a0445f4d69fb86, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d27c9df37b699195f6a0445f4d69fb86->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d27c9df37b699195f6a0445f4d69fb86, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_d27c9df37b699195f6a0445f4d69fb86, type_description ,par_self, var_stat );

    // Release cached frame.
    if ( frame_d27c9df37b699195f6a0445f4d69fb86 == cache_frame_d27c9df37b699195f6a0445f4d69fb86 )
    {
        Py_DECREF( frame_d27c9df37b699195f6a0445f4d69fb86 );
    }
    cache_frame_d27c9df37b699195f6a0445f4d69fb86 = NULL;

    assertFrameObject( frame_d27c9df37b699195f6a0445f4d69fb86 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_15__GetCommModemStatus );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_stat );
    Py_DECREF( var_stat );
    var_stat = NULL;

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

    Py_XDECREF( var_stat );
    var_stat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_15__GetCommModemStatus );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_16_cts( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_c273e8bed2718d0b8444d56ffbd535f2 = NULL;

    struct Nuitka_FrameObject *frame_c273e8bed2718d0b8444d56ffbd535f2;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c273e8bed2718d0b8444d56ffbd535f2, codeobj_c273e8bed2718d0b8444d56ffbd535f2, module_serial$serialwin32, sizeof(PyObject *) );
    frame_c273e8bed2718d0b8444d56ffbd535f2 = cache_frame_c273e8bed2718d0b8444d56ffbd535f2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c273e8bed2718d0b8444d56ffbd535f2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c273e8bed2718d0b8444d56ffbd535f2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 397;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MS_CTS_ON );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_c273e8bed2718d0b8444d56ffbd535f2->m_frame.f_lineno = 397;
    tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__GetCommModemStatus );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 397;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c273e8bed2718d0b8444d56ffbd535f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c273e8bed2718d0b8444d56ffbd535f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c273e8bed2718d0b8444d56ffbd535f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c273e8bed2718d0b8444d56ffbd535f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c273e8bed2718d0b8444d56ffbd535f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c273e8bed2718d0b8444d56ffbd535f2, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_c273e8bed2718d0b8444d56ffbd535f2, type_description ,par_self );

    // Release cached frame.
    if ( frame_c273e8bed2718d0b8444d56ffbd535f2 == cache_frame_c273e8bed2718d0b8444d56ffbd535f2 )
    {
        Py_DECREF( frame_c273e8bed2718d0b8444d56ffbd535f2 );
    }
    cache_frame_c273e8bed2718d0b8444d56ffbd535f2 = NULL;

    assertFrameObject( frame_c273e8bed2718d0b8444d56ffbd535f2 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_16_cts );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_16_cts );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_17_dsr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_fb5bfd923cdf0db02d4bb8b11fcc6145 = NULL;

    struct Nuitka_FrameObject *frame_fb5bfd923cdf0db02d4bb8b11fcc6145;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fb5bfd923cdf0db02d4bb8b11fcc6145, codeobj_fb5bfd923cdf0db02d4bb8b11fcc6145, module_serial$serialwin32, sizeof(PyObject *) );
    frame_fb5bfd923cdf0db02d4bb8b11fcc6145 = cache_frame_fb5bfd923cdf0db02d4bb8b11fcc6145;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fb5bfd923cdf0db02d4bb8b11fcc6145 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fb5bfd923cdf0db02d4bb8b11fcc6145 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 402;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MS_DSR_ON );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_fb5bfd923cdf0db02d4bb8b11fcc6145->m_frame.f_lineno = 402;
    tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__GetCommModemStatus );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 402;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb5bfd923cdf0db02d4bb8b11fcc6145 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb5bfd923cdf0db02d4bb8b11fcc6145 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb5bfd923cdf0db02d4bb8b11fcc6145 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fb5bfd923cdf0db02d4bb8b11fcc6145, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fb5bfd923cdf0db02d4bb8b11fcc6145->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fb5bfd923cdf0db02d4bb8b11fcc6145, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_fb5bfd923cdf0db02d4bb8b11fcc6145, type_description ,par_self );

    // Release cached frame.
    if ( frame_fb5bfd923cdf0db02d4bb8b11fcc6145 == cache_frame_fb5bfd923cdf0db02d4bb8b11fcc6145 )
    {
        Py_DECREF( frame_fb5bfd923cdf0db02d4bb8b11fcc6145 );
    }
    cache_frame_fb5bfd923cdf0db02d4bb8b11fcc6145 = NULL;

    assertFrameObject( frame_fb5bfd923cdf0db02d4bb8b11fcc6145 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_17_dsr );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_17_dsr );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_18_ri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_ce951a44b6c3b633ebb0a71f4391afd2 = NULL;

    struct Nuitka_FrameObject *frame_ce951a44b6c3b633ebb0a71f4391afd2;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce951a44b6c3b633ebb0a71f4391afd2, codeobj_ce951a44b6c3b633ebb0a71f4391afd2, module_serial$serialwin32, sizeof(PyObject *) );
    frame_ce951a44b6c3b633ebb0a71f4391afd2 = cache_frame_ce951a44b6c3b633ebb0a71f4391afd2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce951a44b6c3b633ebb0a71f4391afd2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce951a44b6c3b633ebb0a71f4391afd2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 407;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MS_RING_ON );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ce951a44b6c3b633ebb0a71f4391afd2->m_frame.f_lineno = 407;
    tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__GetCommModemStatus );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 407;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce951a44b6c3b633ebb0a71f4391afd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce951a44b6c3b633ebb0a71f4391afd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce951a44b6c3b633ebb0a71f4391afd2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce951a44b6c3b633ebb0a71f4391afd2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce951a44b6c3b633ebb0a71f4391afd2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce951a44b6c3b633ebb0a71f4391afd2, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_ce951a44b6c3b633ebb0a71f4391afd2, type_description ,par_self );

    // Release cached frame.
    if ( frame_ce951a44b6c3b633ebb0a71f4391afd2 == cache_frame_ce951a44b6c3b633ebb0a71f4391afd2 )
    {
        Py_DECREF( frame_ce951a44b6c3b633ebb0a71f4391afd2 );
    }
    cache_frame_ce951a44b6c3b633ebb0a71f4391afd2 = NULL;

    assertFrameObject( frame_ce951a44b6c3b633ebb0a71f4391afd2 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_18_ri );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_18_ri );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_19_cd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_789815a2d085a7e704e56fceb02af85f = NULL;

    struct Nuitka_FrameObject *frame_789815a2d085a7e704e56fceb02af85f;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_789815a2d085a7e704e56fceb02af85f, codeobj_789815a2d085a7e704e56fceb02af85f, module_serial$serialwin32, sizeof(PyObject *) );
    frame_789815a2d085a7e704e56fceb02af85f = cache_frame_789815a2d085a7e704e56fceb02af85f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_789815a2d085a7e704e56fceb02af85f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_789815a2d085a7e704e56fceb02af85f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 412;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MS_RLSD_ON );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_789815a2d085a7e704e56fceb02af85f->m_frame.f_lineno = 412;
    tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__GetCommModemStatus );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 412;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_789815a2d085a7e704e56fceb02af85f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_789815a2d085a7e704e56fceb02af85f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_789815a2d085a7e704e56fceb02af85f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_789815a2d085a7e704e56fceb02af85f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_789815a2d085a7e704e56fceb02af85f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_789815a2d085a7e704e56fceb02af85f, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_789815a2d085a7e704e56fceb02af85f, type_description ,par_self );

    // Release cached frame.
    if ( frame_789815a2d085a7e704e56fceb02af85f == cache_frame_789815a2d085a7e704e56fceb02af85f )
    {
        Py_DECREF( frame_789815a2d085a7e704e56fceb02af85f );
    }
    cache_frame_789815a2d085a7e704e56fceb02af85f = NULL;

    assertFrameObject( frame_789815a2d085a7e704e56fceb02af85f );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_19_cd );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_19_cd );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_20_set_buffer_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_rx_size = python_pars[ 1 ];
    PyObject *par_tx_size = python_pars[ 2 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e14675a74688a2a0e3335227194950a3 = NULL;

    struct Nuitka_FrameObject *frame_e14675a74688a2a0e3335227194950a3;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_compare_left_1 = par_tx_size;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = par_rx_size;

    CHECK_OBJECT( tmp_assign_source_1 );
    {
        PyObject *old = par_tx_size;
        assert( old != NULL );
        par_tx_size = tmp_assign_source_1;
        Py_INCREF( par_tx_size );
        Py_DECREF( old );
    }

    branch_no_1:;
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e14675a74688a2a0e3335227194950a3, codeobj_e14675a74688a2a0e3335227194950a3, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_e14675a74688a2a0e3335227194950a3 = cache_frame_e14675a74688a2a0e3335227194950a3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e14675a74688a2a0e3335227194950a3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e14675a74688a2a0e3335227194950a3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 423;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SetupComm );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 423;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_rx_size;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_tx_size;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_e14675a74688a2a0e3335227194950a3->m_frame.f_lineno = 423;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e14675a74688a2a0e3335227194950a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e14675a74688a2a0e3335227194950a3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e14675a74688a2a0e3335227194950a3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e14675a74688a2a0e3335227194950a3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e14675a74688a2a0e3335227194950a3, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_e14675a74688a2a0e3335227194950a3, type_description ,par_self, par_rx_size, par_tx_size );

    // Release cached frame.
    if ( frame_e14675a74688a2a0e3335227194950a3 == cache_frame_e14675a74688a2a0e3335227194950a3 )
    {
        Py_DECREF( frame_e14675a74688a2a0e3335227194950a3 );
    }
    cache_frame_e14675a74688a2a0e3335227194950a3 = NULL;

    assertFrameObject( frame_e14675a74688a2a0e3335227194950a3 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_20_set_buffer_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rx_size );
    Py_DECREF( par_rx_size );
    par_rx_size = NULL;

    CHECK_OBJECT( (PyObject *)par_tx_size );
    Py_DECREF( par_tx_size );
    par_tx_size = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rx_size );
    Py_DECREF( par_rx_size );
    par_rx_size = NULL;

    CHECK_OBJECT( (PyObject *)par_tx_size );
    Py_DECREF( par_tx_size );
    par_tx_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_20_set_buffer_size );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_21_set_output_flow_control( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_enable = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_06c622122b345c7f7b8fd4881a2f3f5a = NULL;

    struct Nuitka_FrameObject *frame_06c622122b345c7f7b8fd4881a2f3f5a;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_06c622122b345c7f7b8fd4881a2f3f5a, codeobj_06c622122b345c7f7b8fd4881a2f3f5a, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_06c622122b345c7f7b8fd4881a2f3f5a = cache_frame_06c622122b345c7f7b8fd4881a2f3f5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_06c622122b345c7f7b8fd4881a2f3f5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_06c622122b345c7f7b8fd4881a2f3f5a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_open );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 432;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

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

        exception_lineno = 433;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 433;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_2 = par_enable;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 434;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 435;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EscapeCommFunction );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 435;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 435;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SETXON );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 435;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_06c622122b345c7f7b8fd4881a2f3f5a->m_frame.f_lineno = 435;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 437;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_EscapeCommFunction );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 437;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 437;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 437;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_SETXOFF );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 437;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_06c622122b345c7f7b8fd4881a2f3f5a->m_frame.f_lineno = 437;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 437;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_06c622122b345c7f7b8fd4881a2f3f5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_06c622122b345c7f7b8fd4881a2f3f5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_06c622122b345c7f7b8fd4881a2f3f5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_06c622122b345c7f7b8fd4881a2f3f5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_06c622122b345c7f7b8fd4881a2f3f5a, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_06c622122b345c7f7b8fd4881a2f3f5a, type_description ,par_self, par_enable );

    // Release cached frame.
    if ( frame_06c622122b345c7f7b8fd4881a2f3f5a == cache_frame_06c622122b345c7f7b8fd4881a2f3f5a )
    {
        Py_DECREF( frame_06c622122b345c7f7b8fd4881a2f3f5a );
    }
    cache_frame_06c622122b345c7f7b8fd4881a2f3f5a = NULL;

    assertFrameObject( frame_06c622122b345c7f7b8fd4881a2f3f5a );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_21_set_output_flow_control );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_enable );
    Py_DECREF( par_enable );
    par_enable = NULL;

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

    CHECK_OBJECT( (PyObject *)par_enable );
    Py_DECREF( par_enable );
    par_enable = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_21_set_output_flow_control );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_22_out_waiting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_flags = NULL;
    PyObject *var_comstat = NULL;
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
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_3e61fa00edce6b14ec1cfaec4bd899ec = NULL;

    struct Nuitka_FrameObject *frame_3e61fa00edce6b14ec1cfaec4bd899ec;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3e61fa00edce6b14ec1cfaec4bd899ec, codeobj_3e61fa00edce6b14ec1cfaec4bd899ec, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_3e61fa00edce6b14ec1cfaec4bd899ec = cache_frame_3e61fa00edce6b14ec1cfaec4bd899ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3e61fa00edce6b14ec1cfaec4bd899ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3e61fa00edce6b14ec1cfaec4bd899ec ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 442;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3e61fa00edce6b14ec1cfaec4bd899ec->m_frame.f_lineno = 442;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_flags == NULL );
    var_flags = tmp_assign_source_1;

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 443;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3e61fa00edce6b14ec1cfaec4bd899ec->m_frame.f_lineno = 443;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_COMSTAT );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 443;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_comstat == NULL );
    var_comstat = tmp_assign_source_2;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 444;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ClearCommError );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 444;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 444;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_flags;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_3e61fa00edce6b14ec1cfaec4bd899ec->m_frame.f_lineno = 444;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 444;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 444;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_comstat;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_3e61fa00edce6b14ec1cfaec4bd899ec->m_frame.f_lineno = 444;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 444;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_3e61fa00edce6b14ec1cfaec4bd899ec->m_frame.f_lineno = 444;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_4 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 444;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

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

        exception_lineno = 445;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = const_str_digest_2ed77bc529ac5233e189e9c63149ac9b;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
    assert( tmp_called_name_3 != NULL );
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 445;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3e61fa00edce6b14ec1cfaec4bd899ec->m_frame.f_lineno = 445;
    tmp_args_element_name_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_WinError );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 445;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_3e61fa00edce6b14ec1cfaec4bd899ec->m_frame.f_lineno = 445;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_3e61fa00edce6b14ec1cfaec4bd899ec->m_frame.f_lineno = 445;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 445;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_4 = var_comstat;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cbOutQue );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3e61fa00edce6b14ec1cfaec4bd899ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3e61fa00edce6b14ec1cfaec4bd899ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3e61fa00edce6b14ec1cfaec4bd899ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3e61fa00edce6b14ec1cfaec4bd899ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3e61fa00edce6b14ec1cfaec4bd899ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3e61fa00edce6b14ec1cfaec4bd899ec, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_3e61fa00edce6b14ec1cfaec4bd899ec, type_description ,par_self, var_flags, var_comstat );

    // Release cached frame.
    if ( frame_3e61fa00edce6b14ec1cfaec4bd899ec == cache_frame_3e61fa00edce6b14ec1cfaec4bd899ec )
    {
        Py_DECREF( frame_3e61fa00edce6b14ec1cfaec4bd899ec );
    }
    cache_frame_3e61fa00edce6b14ec1cfaec4bd899ec = NULL;

    assertFrameObject( frame_3e61fa00edce6b14ec1cfaec4bd899ec );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_22_out_waiting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_flags );
    Py_DECREF( var_flags );
    var_flags = NULL;

    CHECK_OBJECT( (PyObject *)var_comstat );
    Py_DECREF( var_comstat );
    var_comstat = NULL;

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

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_comstat );
    var_comstat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_22_out_waiting );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_23__cancel_overlapped_io( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_overlapped = python_pars[ 1 ];
    PyObject *var_rc = NULL;
    PyObject *var_err = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6bbe9a79da45081851bc604ddf6b265c = NULL;

    struct Nuitka_FrameObject *frame_6bbe9a79da45081851bc604ddf6b265c;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6bbe9a79da45081851bc604ddf6b265c, codeobj_6bbe9a79da45081851bc604ddf6b265c, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_6bbe9a79da45081851bc604ddf6b265c = cache_frame_6bbe9a79da45081851bc604ddf6b265c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6bbe9a79da45081851bc604ddf6b265c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6bbe9a79da45081851bc604ddf6b265c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 451;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    frame_6bbe9a79da45081851bc604ddf6b265c->m_frame.f_lineno = 451;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_DWORD );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_rc == NULL );
    var_rc = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 452;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_GetOverlappedResult );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__port_handle );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 453;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_overlapped;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_6bbe9a79da45081851bc604ddf6b265c->m_frame.f_lineno = 454;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 455;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_rc;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_6bbe9a79da45081851bc604ddf6b265c->m_frame.f_lineno = 455;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_byref, call_args );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 455;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = Py_False;
    frame_6bbe9a79da45081851bc604ddf6b265c->m_frame.f_lineno = 452;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_4, tmp_args_element_name_6 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_err == NULL );
    var_err = tmp_assign_source_2;

    tmp_operand_name_1 = var_err;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 457;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 457;
        type_description = "oooo";
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
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 457;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    frame_6bbe9a79da45081851bc604ddf6b265c->m_frame.f_lineno = 457;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_GetLastError );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 457;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = PyTuple_New( 2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 457;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ERROR_IO_PENDING );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );

        exception_lineno = 457;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 457;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ERROR_IO_INCOMPLETE );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );

        exception_lineno = 457;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_1 );
    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 457;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 457;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "win32" );
        exception_tb = NULL;

        exception_lineno = 459;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CancelIoEx );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 459;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__port_handle );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 459;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = par_overlapped;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_6bbe9a79da45081851bc604ddf6b265c->m_frame.f_lineno = 459;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 459;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6bbe9a79da45081851bc604ddf6b265c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6bbe9a79da45081851bc604ddf6b265c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6bbe9a79da45081851bc604ddf6b265c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6bbe9a79da45081851bc604ddf6b265c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6bbe9a79da45081851bc604ddf6b265c, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_6bbe9a79da45081851bc604ddf6b265c, type_description ,par_self, par_overlapped, var_rc, var_err );

    // Release cached frame.
    if ( frame_6bbe9a79da45081851bc604ddf6b265c == cache_frame_6bbe9a79da45081851bc604ddf6b265c )
    {
        Py_DECREF( frame_6bbe9a79da45081851bc604ddf6b265c );
    }
    cache_frame_6bbe9a79da45081851bc604ddf6b265c = NULL;

    assertFrameObject( frame_6bbe9a79da45081851bc604ddf6b265c );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_23__cancel_overlapped_io );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_overlapped );
    Py_DECREF( par_overlapped );
    par_overlapped = NULL;

    CHECK_OBJECT( (PyObject *)var_rc );
    Py_DECREF( var_rc );
    var_rc = NULL;

    CHECK_OBJECT( (PyObject *)var_err );
    Py_DECREF( var_err );
    var_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_overlapped );
    Py_DECREF( par_overlapped );
    par_overlapped = NULL;

    Py_XDECREF( var_rc );
    var_rc = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_23__cancel_overlapped_io );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_24_cancel_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_693ed2515d24361e89b3c842b8d0ba43 = NULL;

    struct Nuitka_FrameObject *frame_693ed2515d24361e89b3c842b8d0ba43;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_693ed2515d24361e89b3c842b8d0ba43, codeobj_693ed2515d24361e89b3c842b8d0ba43, module_serial$serialwin32, sizeof(PyObject *) );
    frame_693ed2515d24361e89b3c842b8d0ba43 = cache_frame_693ed2515d24361e89b3c842b8d0ba43;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_693ed2515d24361e89b3c842b8d0ba43 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_693ed2515d24361e89b3c842b8d0ba43 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__cancel_overlapped_io );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 463;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__overlapped_read );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 463;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_693ed2515d24361e89b3c842b8d0ba43->m_frame.f_lineno = 463;
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


        exception_lineno = 463;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_693ed2515d24361e89b3c842b8d0ba43 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_693ed2515d24361e89b3c842b8d0ba43 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_693ed2515d24361e89b3c842b8d0ba43, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_693ed2515d24361e89b3c842b8d0ba43->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_693ed2515d24361e89b3c842b8d0ba43, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_693ed2515d24361e89b3c842b8d0ba43, type_description ,par_self );

    // Release cached frame.
    if ( frame_693ed2515d24361e89b3c842b8d0ba43 == cache_frame_693ed2515d24361e89b3c842b8d0ba43 )
    {
        Py_DECREF( frame_693ed2515d24361e89b3c842b8d0ba43 );
    }
    cache_frame_693ed2515d24361e89b3c842b8d0ba43 = NULL;

    assertFrameObject( frame_693ed2515d24361e89b3c842b8d0ba43 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_24_cancel_read );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_24_cancel_read );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_25_cancel_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e9d5857f4436fa5dbf41329f83560ba5 = NULL;

    struct Nuitka_FrameObject *frame_e9d5857f4436fa5dbf41329f83560ba5;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e9d5857f4436fa5dbf41329f83560ba5, codeobj_e9d5857f4436fa5dbf41329f83560ba5, module_serial$serialwin32, sizeof(PyObject *) );
    frame_e9d5857f4436fa5dbf41329f83560ba5 = cache_frame_e9d5857f4436fa5dbf41329f83560ba5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e9d5857f4436fa5dbf41329f83560ba5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e9d5857f4436fa5dbf41329f83560ba5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__cancel_overlapped_io );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__overlapped_write );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 467;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_e9d5857f4436fa5dbf41329f83560ba5->m_frame.f_lineno = 467;
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


        exception_lineno = 467;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9d5857f4436fa5dbf41329f83560ba5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9d5857f4436fa5dbf41329f83560ba5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e9d5857f4436fa5dbf41329f83560ba5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e9d5857f4436fa5dbf41329f83560ba5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e9d5857f4436fa5dbf41329f83560ba5, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_e9d5857f4436fa5dbf41329f83560ba5, type_description ,par_self );

    // Release cached frame.
    if ( frame_e9d5857f4436fa5dbf41329f83560ba5 == cache_frame_e9d5857f4436fa5dbf41329f83560ba5 )
    {
        Py_DECREF( frame_e9d5857f4436fa5dbf41329f83560ba5 );
    }
    cache_frame_e9d5857f4436fa5dbf41329f83560ba5 = NULL;

    assertFrameObject( frame_e9d5857f4436fa5dbf41329f83560ba5 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_25_cancel_write );
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
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_25_cancel_write );
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


static PyObject *impl_serial$serialwin32$$$class_1_Serial$$$function_26_exclusive( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_exclusive = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_05e8d4febf5fbd9ce08105ca1859bdca = NULL;

    struct Nuitka_FrameObject *frame_05e8d4febf5fbd9ce08105ca1859bdca;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_05e8d4febf5fbd9ce08105ca1859bdca, codeobj_05e8d4febf5fbd9ce08105ca1859bdca, module_serial$serialwin32, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_05e8d4febf5fbd9ce08105ca1859bdca = cache_frame_05e8d4febf5fbd9ce08105ca1859bdca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_05e8d4febf5fbd9ce08105ca1859bdca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_05e8d4febf5fbd9ce08105ca1859bdca ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_exclusive;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_operand_name_1 = par_exclusive;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = const_str_digest_965cfe85759abc1c82262e5a9b7bf0b5;
    tmp_args_element_name_1 = par_exclusive;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_05e8d4febf5fbd9ce08105ca1859bdca->m_frame.f_lineno = 473;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_make_exception_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
    }

    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_05e8d4febf5fbd9ce08105ca1859bdca->m_frame.f_lineno = 473;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 473;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oo";
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "serial" );
        exception_tb = NULL;

        exception_lineno = 475;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SerialBase );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 475;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exclusive );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 475;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_self;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_exclusive;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_05e8d4febf5fbd9ce08105ca1859bdca->m_frame.f_lineno = 475;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain___set__, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 475;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05e8d4febf5fbd9ce08105ca1859bdca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05e8d4febf5fbd9ce08105ca1859bdca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05e8d4febf5fbd9ce08105ca1859bdca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05e8d4febf5fbd9ce08105ca1859bdca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05e8d4febf5fbd9ce08105ca1859bdca, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_05e8d4febf5fbd9ce08105ca1859bdca, type_description ,par_self, par_exclusive );

    // Release cached frame.
    if ( frame_05e8d4febf5fbd9ce08105ca1859bdca == cache_frame_05e8d4febf5fbd9ce08105ca1859bdca )
    {
        Py_DECREF( frame_05e8d4febf5fbd9ce08105ca1859bdca );
    }
    cache_frame_05e8d4febf5fbd9ce08105ca1859bdca = NULL;

    assertFrameObject( frame_05e8d4febf5fbd9ce08105ca1859bdca );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_26_exclusive );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exclusive );
    Py_DECREF( par_exclusive );
    par_exclusive = NULL;

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

    CHECK_OBJECT( (PyObject *)par_exclusive );
    Py_DECREF( par_exclusive );
    par_exclusive = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32$$$class_1_Serial$$$function_26_exclusive );
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



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_10_reset_input_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_10_reset_input_buffer,
        const_str_plain_reset_input_buffer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c1bf80527290b34fe1b8d1790d8cfdd2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_bd2e98b142ff21c9f389c674d6946c9a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_11_reset_output_buffer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_11_reset_output_buffer,
        const_str_plain_reset_output_buffer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d9a64f9f9f18898b733f3eda3db92a6e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_57027c3185c735e629ff3e28a5a985c8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_12__update_break_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_12__update_break_state,
        const_str_plain__update_break_state,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4f5dbb9a17af5e00861ce4f55c93689b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_09388aafcb6adb40da642c8223c8e7c5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_13__update_rts_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_13__update_rts_state,
        const_str_plain__update_rts_state,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4619b3d7f34369a92cb3769866f88eda,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_1d3403f47e70d0d3c7366e99c0db7fa8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_14__update_dtr_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_14__update_dtr_state,
        const_str_plain__update_dtr_state,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4d04645b0f917be1259a6434e0805129,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_2b96e25c8d393fdf065d358454fdf25c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_15__GetCommModemStatus(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_15__GetCommModemStatus,
        const_str_plain__GetCommModemStatus,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d27c9df37b699195f6a0445f4d69fb86,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_16_cts(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_16_cts,
        const_str_plain_cts,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c273e8bed2718d0b8444d56ffbd535f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_06425a8e1b9d5eab562978eb6eacf777,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_17_dsr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_17_dsr,
        const_str_plain_dsr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fb5bfd923cdf0db02d4bb8b11fcc6145,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_54cde0cd7a92974ff918f0defbd1eeb9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_18_ri(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_18_ri,
        const_str_plain_ri,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ce951a44b6c3b633ebb0a71f4391afd2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_c987d57c872daa303d57e57028663dbb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_19_cd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_19_cd,
        const_str_plain_cd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_789815a2d085a7e704e56fceb02af85f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_faa07c45c026cd5370bf39ce65b9f2d8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c554194d9b76f6b54f4939d0f06f1881,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_20_set_buffer_size( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_20_set_buffer_size,
        const_str_plain_set_buffer_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e14675a74688a2a0e3335227194950a3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_b61fa0e88bbe4976ba0c3486b94e2ad6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_21_set_output_flow_control( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_21_set_output_flow_control,
        const_str_plain_set_output_flow_control,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_06c622122b345c7f7b8fd4881a2f3f5a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_8ab7d280f3c27847f45a238edf5bac9d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_22_out_waiting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_22_out_waiting,
        const_str_plain_out_waiting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3e61fa00edce6b14ec1cfaec4bd899ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_5ed58a77f20ffb579393ed23bc7ec71b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_23__cancel_overlapped_io(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_23__cancel_overlapped_io,
        const_str_plain__cancel_overlapped_io,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6bbe9a79da45081851bc604ddf6b265c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_8589c768c45cb2df2310b69a6dd47c26,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_24_cancel_read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_24_cancel_read,
        const_str_plain_cancel_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_693ed2515d24361e89b3c842b8d0ba43,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_8589c768c45cb2df2310b69a6dd47c26,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_25_cancel_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_25_cancel_write,
        const_str_plain_cancel_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e9d5857f4436fa5dbf41329f83560ba5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_686727e74bc29d6f749822c8572b6c6c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_26_exclusive(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_26_exclusive,
        const_str_plain_exclusive,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_05e8d4febf5fbd9ce08105ca1859bdca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_cee0e65b93fa2a88bd408284fcdf4582,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_2_open(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_2_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6e8cfbdfb6ae24f593b52eb0cf79e7eb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_4b91cca6339a9a892cf0e30d6bd1bdfc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_3__reconfigure_port(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_3__reconfigure_port,
        const_str_plain__reconfigure_port,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4d073a349b472b12ad07dae0c26e6c32,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_47be6feae340d11ceea1b2be1116c946,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_4__close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_4__close,
        const_str_plain__close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_471fab22c01b95e19d3b72d803023f0d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_9154b8cf6e65b3c901c35e8e1d5d5876,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_5_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_5_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ddafb67b7790a03d104ddb0d65ca3347,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_ca3087f1fed5e9b894c48e0dbbd2f218,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_6_in_waiting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_6_in_waiting,
        const_str_plain_in_waiting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3b185e7502488044d3ca6f61ac9648fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_67e30ad9cc029aa9b34457de3a368897,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_7_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_7_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_15023db665da047c3cbdc5f950f1e4e2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_67381b97568fd04864d7225afb09d3b9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_8_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_8_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ed1bb012a51a4c7b4171eafd13374953,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_094a5755decb0ff88251d419e9b9deb6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$serialwin32$$$class_1_Serial$$$function_9_flush(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$serialwin32$$$class_1_Serial$$$function_9_flush,
        const_str_plain_flush,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3d1df36bfbc83d0ff1a67096ced046ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_66c5c36b8185e52d7e7b19bd4f1801a9,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$serialwin32 =
{
    PyModuleDef_HEAD_INIT,
    "serial.serialwin32",   /* m_name */
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

MOD_INIT_DECL( serial$serialwin32 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$serialwin32 );
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
    puts("serial.serialwin32: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.serialwin32: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial$serialwin32" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$serialwin32 = Py_InitModule4(
        "serial.serialwin32",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial$serialwin32 = PyModule_Create( &mdef_serial$serialwin32 );
#endif

    moduledict_serial$serialwin32 = (PyDictObject *)((PyModuleObject *)module_serial$serialwin32)->md_dict;

    CHECK_OBJECT( module_serial$serialwin32 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_33be1aa9452ea1a35db7fc513fc42137, module_serial$serialwin32 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial$serialwin32 );

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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
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
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    tmp_outline_return_value_1 = NULL;
    struct Nuitka_FrameObject *frame_db19c65841ff54f6d55d04bdc49c206c;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_089f2e47a9bade910c317610f85e4d9b;
    UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_db19c65841ff54f6d55d04bdc49c206c = MAKE_MODULE_FRAME( codeobj_db19c65841ff54f6d55d04bdc49c206c, module_serial$serialwin32 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_db19c65841ff54f6d55d04bdc49c206c );
    assert( Py_REFCNT( frame_db19c65841ff54f6d55d04bdc49c206c ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_ctypes;
    tmp_globals_name_1 = ((PyModuleObject *)module_serial$serialwin32)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_db19c65841ff54f6d55d04bdc49c206c->m_frame.f_lineno = 13;
    tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_3 );
    tmp_name_name_2 = const_str_plain_time;
    tmp_globals_name_2 = ((PyModuleObject *)module_serial$serialwin32)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    frame_db19c65841ff54f6d55d04bdc49c206c->m_frame.f_lineno = 14;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    assert( tmp_assign_source_4 != NULL );
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_4 );
    tmp_name_name_3 = const_str_plain_serial;
    tmp_globals_name_3 = ((PyModuleObject *)module_serial$serialwin32)->md_dict;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_win32_tuple;
    frame_db19c65841ff54f6d55d04bdc49c206c->m_frame.f_lineno = 15;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_win32 );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32, tmp_assign_source_5 );
    tmp_name_name_4 = const_str_plain_serial;
    tmp_globals_name_4 = ((PyModuleObject *)module_serial$serialwin32)->md_dict;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    frame_db19c65841ff54f6d55d04bdc49c206c->m_frame.f_lineno = 17;
    tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_serial, tmp_assign_source_6 );
    tmp_name_name_5 = const_str_digest_464621b44ad0d4884db68a925fcb5c8f;
    tmp_globals_name_5 = ((PyModuleObject *)module_serial$serialwin32)->md_dict;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_137e25f91938f4d736f3322b82e55d4b_tuple;
    frame_db19c65841ff54f6d55d04bdc49c206c->m_frame.f_lineno = 18;
    tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_7;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_SerialBase );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialBase, tmp_assign_source_8 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_SerialException );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException, tmp_assign_source_9 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_to_bytes );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_to_bytes, tmp_assign_source_10 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_portNotOpenError );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError, tmp_assign_source_11 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_writeTimeoutError );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_writeTimeoutError, tmp_assign_source_12 );
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

    // Tried code:
    tmp_assign_source_13 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialBase );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialBase );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SerialBase" );
        exception_tb = NULL;

        exception_lineno = 21;

        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_13;

    tmp_assign_source_14 = impl_serial$serialwin32$$$class_1_Serial( NULL );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_14;

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
    tmp_assign_source_15 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_16;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_4;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32 );
    return MOD_RETURN_VALUE( NULL );
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

    Py_DECREF( exception_keeper_type_2 );
    Py_XDECREF( exception_keeper_value_2 );
    Py_XDECREF( exception_keeper_tb_2 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_1 != NULL );
    goto try_return_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$serialwin32 );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$serialwin32 );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_15 = tmp_outline_return_value_1;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_15;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_Serial;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_db19c65841ff54f6d55d04bdc49c206c->m_frame.f_lineno = 21;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_17;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_db19c65841ff54f6d55d04bdc49c206c );
#endif
    popFrameStack();

    assertFrameObject( frame_db19c65841ff54f6d55d04bdc49c206c );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_db19c65841ff54f6d55d04bdc49c206c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_db19c65841ff54f6d55d04bdc49c206c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_db19c65841ff54f6d55d04bdc49c206c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_db19c65841ff54f6d55d04bdc49c206c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_18 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_18 );
    UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_18 );
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


    return MOD_RETURN_VALUE( module_serial$serialwin32 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
