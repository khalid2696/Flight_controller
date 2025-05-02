# -*- coding: utf-8 -*-

# This code is to learn how to setup serial communication to arduino from python

import serial as sr # Open Serial port 

#ser = serial.Serial('/dev/ttyUSB0')  # create serial object and open port
#
#print(ser.name)  # display name of port opened
#
#ser.write(b'hello')
#ser.close()

## READ DATA
#port=sr.Serial('/dev/ttyUSB0',57600, timeout=1.5)
#s = port.readline()
#port.close()

## LIST PORTS
availablePorts=list()           #Declare List
import serial.tools.list_ports as st  #import serial tools
ports = list(st.comports());   #convert comports() to list
for port_no, description, address in ports:
    if 'USB' in description:    #Find the USB serial port
        availablePorts.append(port_no)    
        
print "\nno of available ports ", len(availablePorts)
print '\nports available ', availablePorts  #display the serial port

