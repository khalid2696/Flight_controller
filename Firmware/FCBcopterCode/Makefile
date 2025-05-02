#This file contains all the possible build options
#   	involving mbed-cli that is of use to us
#Note that I made FCB project build process to be compatible with both
#	PLATFORM IO and MBED-CLI interface
# This file is more like documentation of different options than a auto builder
# Rtos feature is not compiled by mentioning in .mbedignore file main directory
#
# INSTALLATION INSTRUCTION OF MBED-CLI##########
#	AVAILABLE IN MBED.ORG
#	YOU ALSO NEED TO DOWNLOAD ADDITIONAL TOOLS THROUGH PIP INSTALL COMMAND
# Also update the stlink provided by default on st-nucleo before doing anything
#	dependencies are given in repository mbed-os/requirements.txt file
#	Note that exact tools may not be available for installation. but still it will run
#	Tested by me on ubuntu 18.04 March 18 2019
#################################################


#Just compile with default options and flash
all:
	mbed compile --profile manoj_release.json --flash

compile:
	mbed compile --profile manoj_release.json

#Compile with target, board name and flash
#mbed target NUCLEO_F446RE toolchain GCC_ARM --flash

#Sample upload
#cp ./BUILD/NUCLEO_F446RE/GCC_ARM/mbed-os-example-blinky.bin /media/manoj/NODE_F446RE/
