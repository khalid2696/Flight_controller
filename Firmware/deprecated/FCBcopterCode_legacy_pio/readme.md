To use this. 
1) Download atom editor and install platformIO on it.
2) Open this folder as a project folder in platform IO open menu/ through atom open menu
3) Menu plaformIO->Build for compiling the code
4) Menu PlatformIO ->Upload for uploading the code to ST Nucleo Board

More:
Lib folder contains all the libraries which includes,
	1) Actuators, ESC control
	2) Buffered Serial
	3) Filters(not verified)
	4) IMU
	5) PPM receiver library
	6) Pin declarations
	7) PID library(using complex filters) - has some issues	
	8) PID library(using simple first order filter)- working
src folder contains
	1) main.cpp- Does mainly the task scheduling
	2) controller.h - contains the entire quadcopter controller. This is the only file which needs to be edited
	3) parameters.h - holds most of the parameters including the good old PID gains
