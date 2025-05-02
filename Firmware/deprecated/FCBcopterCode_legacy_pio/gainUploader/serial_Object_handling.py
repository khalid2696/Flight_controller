#PLEASE RUN THIS IN STANDARD PYTHON INTERPRETER. IPYTHON CRASHES THE IDE

#Idea is to Transfer an class object from arduino to python and decode the class
# as whole. This will simplify the process involved with serial communication

#class based transfer could be in comaptible with each other. So I am gonna use
#Character/string based transfer of all data

#ONLY ORDERED DICT SHOULD BE USED BECAUSE DICT HAS NO INHERANT ORDER.
#THIS CAN MESS UP THE ORDER

from collections import OrderedDict

#default values are set here
params = OrderedDict([    ('kp_pitch',  10.0),
                          ('ki_pitch',  5.2),
                          ('kd_pitch',  3.1),
                          ('kp_yaw',  10.0),
                          ('ki_yaw',  5.2),
                          ('kd_yaw',  3.1),
                          ('kp_roll',  10.0),
                          ('ki_roll',  5.2),
                          ('kd_roll',  3.1)
                    ])

#this thing is for transmitting data
def transmit_Data(active_port):
    print("transmiting data through "+active_port)
    import serial as sr
    port=sr.Serial(active_port,57600, timeout=2)
    n=0
    def serialWriter(n):
        dataToWrite=params.values();
        for i in range(0,len(dataToWrite)):
            n=n+port.write(str(dataToWrite[i]));
            n=n+port.write('\n');
        print 'done'
    startByte=b'#' #ASCII 35
    writeCommand=b'1'
    port.write(startByte);          #Start byte
    n=n+1
    port.write(writeCommand);       #Write command
    n=n+1
    serialWriter(n);
    port.close()
    print n
    print("trannsmitted through port"+active_port)
    #most important exception should be added!!!!!!