#pragma once

#define I2C3_SCL_PIN PA_8
#define I2C3_SDA_PIN PC_9
#define IMU_INTERRUPT_PIN PC_12
#define LED_RED_PIN PB_13
#define LED_GREEN_PIN PB_14
#define LED_BLUE_PIN PB_15
#define RX_INTERRUPT_PIN PC_4
#define USER_BUTTON_PIN PC_13
//Last four pins are renamed to be first 4 pins!!
//This was done to fix the mbed PWM Pin clashes
//Dont enable PWM on both PB1 and PB_15-blue led simultaneously
//Use PWM pins with caution!!
// #define ESC_1_PIN PB_6 // 5 in PCB
// #define ESC_2_PIN PB_7 // 6 in PCB
// #define ESC_3_PIN PB_8 // 7 in PCB
// #define ESC_4_PIN PB_9 // 8 in PCB
// #define ESC_5_PIN PB_4 // 1 in PCB
// #define ESC_6_PIN PB_5 // 2 in PCB
// #define ESC_7_PIN PB_0 // 3 in PCB
// #define ESC_8_PIN PB_1 // 4 in PCB
#define ESC_1_PIN PB_9 // 8 in PCB I SCREWED IT UP HAHAHHAH
#define ESC_2_PIN PB_8 // 7 in PCB
#define ESC_3_PIN PB_7 // 6 in PCB
#define ESC_4_PIN PB_6 // 5 in PCB

#define POT_1_PIN PA_6
#define POT_2_PIN PA_7
//telemetry pins are (PC_6, PC_7)(tx,rx)

#define SPI2_MOSI PC_3 // Used for LIDAR
#define SPI2_NSS PB_12 // Used for Lidar
