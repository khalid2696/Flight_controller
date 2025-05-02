from __future__ import division

# def arm_disarm():

# ! /usr/bin/python

# -*- coding: utf-8 -*-
"""
Created on Wed May 17 13:56:33 2017
FCB gui for controlling inflight params

@author: FCB
"""

from Tkinter import *  # for gui elements
# import tkMessageBox as tmb # to display error message and so on
from serial_Object_handling import *#importing the other function modeules from same directory
from serialportsExample import *#importing the other function modeules from same directory

active_port=""#the no. of active port is set zero initially


# back end
# used in dropdown button to set port
def setport(i):
    global active_port
    active_port = serial_ports()[i]
    print("port set to"+active_port)

# used for write button to transmit data
def checkedwrite():
    global params
    data_got = [kp_pitch.get(), ki_pitch.get(), kd_pitch.get(), kp_yaw.get(), ki_yaw.get(), kd_yaw.get(), kp_roll.get(), ki_roll.get(), kd_roll.get()]
    for x in range(0, len(data_got)):
        if data_got[x] == "":
            print"Manoj Enter data please!"
        else:
            params[params.keys()[x]] = float(data_got[x])
    print("trying to transmit through port "+active_port)
    transmit_Data(active_port)
    print data_got

#this function reads th default value from memory
def read():
    kp_pitch.delete(0, END)
    ki_pitch.delete(0, END)
    kd_pitch.delete(0, END)
    kp_yaw.delete(0, END)
    ki_yaw.delete(0, END)
    kd_yaw.delete(0, END)
    kp_roll.delete(0, END)
    ki_roll.delete(0, END)
    kd_roll.delete(0, END)
    kp_pitch.insert(END, float(params[params.keys()[0]]))
    ki_pitch.insert(END, float(params[params.keys()[1]]))
    kd_pitch.insert(END, float(params[params.keys()[2]]))
    kp_yaw.insert(END, float(params[params.keys()[3]]))
    ki_yaw.insert(END, float(params[params.keys()[4]]))
    kd_yaw.insert(END, float(params[params.keys()[5]]))
    kp_roll.insert(END, float(params[params.keys()[6]]))
    ki_roll.insert(END, float(params[params.keys()[7]]))
    kd_roll.insert(END, float(params[params.keys()[8]]))


def armdisarm(statusL, arm_disarmB):
    if statusL.cget("text") == "Disarmed":
        statusL.config(text="Armed")
        arm_disarmB.config(text="Disarm")
        #write your arm function here
    elif statusL.cget("text") == "Armed":
        statusL.config(text="Disarmed")
        arm_disarmB.config(text="Arm")
        #write your disarm function here

# front end
top = Tk()  # Window declaration
top.configure(bg='#E6E6E6')
# WIDGET DEFINITIONS
menu = Menu(top)
top.config(menu=menu)
submenu_info = Menu(menu)
menu.add_cascade(label="FCB GUI V1.0", menu=submenu_info)
submenu_info.add_command(label="exit", command=quit)
#port selection menu is defined below
submenu_ports = Menu(menu)
menu.add_cascade(label="Select Ports", menu=submenu_ports)
#checks the no. of ports acrive and makes that no. port selection menu
for i in range(len(serial_ports())):
    submenu_ports.add_command(label=serial_ports()[i], command=lambda: setport(i))
#arm disarm button
arm_disarmB = Button(top, text="Arm", command=lambda: armdisarm(statusL, arm_disarmB))
arm_disarmB.grid(column=0, row=1)
statusL = Label(top, text="Disarmed", background="RED")
statusL.grid(column=1, row=1)

#heading labels of gains
pitchL = Label(top, text="pitch control ||", background="blue").grid(column=0, row=3)
yawL = Label(top, text="yaw control", background="blue").grid(column=2, row=3)
rollL = Label(top, text="roll control", background="blue").grid(column=4, row=3)
#pitch gains (input text)
kp_pitch = Entry(top, width=10, font="Comic\ Sans\ MS", text="FCB V1.0")
kp_pitch.grid(column=1, row=4)
ki_pitch = Entry(top, width=10, font="Comic\ Sans\ MS")
ki_pitch.grid(column=1, row=5)
kd_pitch = Entry(top, width=10, font="Comic\ Sans\ MS")
kd_pitch.grid(column=1, row=6)
#yaw gains (input text)
kp_yaw = Entry(top, width=10, font="Comic\ Sans\ MS")
kp_yaw.grid(column=3, row=4)
ki_yaw = Entry(top, width=10, font="Comic\ Sans\ MS")
ki_yaw.grid(column=3, row=5)
kd_yaw = Entry(top, width=10, font="Comic\ Sans\ MS")
kd_yaw.grid(column=3, row=6)
#roll gains (input text)
kp_roll = Entry(top, width=10, font="Comic\ Sans\ MS")
kp_roll.grid(column=5, row=4)
ki_roll = Entry(top, width=10, font="Comic\ Sans\ MS")
ki_roll.grid(column=5, row=5)
kd_roll = Entry(top, width=10, font="Comic\ Sans\ MS")
kd_roll.grid(column=5, row=6)
#this are just labels to the input text field (not important)
kpL = Label(top, text="Kp").grid(column=0, row=4)
kiL = Label(top, text="Ki").grid(column=0, row=5)
kdL = Label(top, text="Kd").grid(column=0, row=6)
kpL1 = Label(top, text="Kp").grid(column=2, row=4)
kiL1 = Label(top, text="Ki").grid(column=2, row=5)
kdL1 = Label(top, text="Kd").grid(column=2, row=6)
kpL2 = Label(top, text="Kp").grid(column=4, row=4)
kiL2 = Label(top, text="Ki").grid(column=4, row=5)
kdL2 = Label(top, text="Kd").grid(column=4, row=6)

#read and write button
readB = Button(top, text="Read", command=read).grid(column=0, row=7)
writeB = Button(top, text="write",command=checkedwrite).grid(column=1, row=7)
#most important command to make the gui run
top.mainloop()
