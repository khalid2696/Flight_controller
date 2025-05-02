/* Hardware Abstraction Layer for FCB2.0.
Compatible with Nucleo-64 stm32f401re + MPU9250
Timers,ext_interrupts,Basic IO, Pin Declarations are all included here.

All rights reserved
Note:
In case Hardware is changed or upgraded. It should be possible to just plugin a
new Hardware Abstraction layer without changing the existing code
DONOT INCLUDE hardware specific code outside this folder
*/

#include "mbed.h"
#include "receiver.h"
