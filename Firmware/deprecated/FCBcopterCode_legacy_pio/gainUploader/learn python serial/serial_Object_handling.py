#PLEASE RUN THIS IN STANDARD PYTHON INTERPRETER. IPYTHON CRASHES THE IDE

#Idea is to Transfer an class object from arduino to python and decode the class
# as whole. This will simplify the process involved with serial communication

#class based transfer could be in comaptible with each other. So I am gonna use
#Character/string based transfer of all data

#ONLY ORDERED DICT SHOULD BE USED BECAUSE DICT HAS NO INHERANT ORDER.
#THIS CAN MESS UP THE ORDER of transmission

import serial as sr
from collections import OrderedDict

port=sr.Serial('/dev/ttyACM2',57600, timeout=2)
n=0
params = OrderedDict([    ('kp_pitch',  10.0),
                          ('ki_pitch',  5.2),
                          ('kd_pitch',  3.1)
                    ])   
def serialWriter():
    dataToWrite=params.values();
    for i in range(0,len(dataToWrite)):
        n=n+port.write(str(dataToWrite[i]));
        n=n+port.write('\n');
    print 'done'
    
    
startByte=b'\xff'
writeCommand=b'\x01'
port.write(startByte);          #Start byte
n=n+1
port.write(writeCommand);       #Write command 
n=n+1
serialWriter();
port.close()
print n