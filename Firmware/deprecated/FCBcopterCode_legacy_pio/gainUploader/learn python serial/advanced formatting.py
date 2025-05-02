#! /usr/bin/python
 
#-*- coding: utf-8 -*-
"""
Created on Wed May 17 13:56:33 2017
FCB gui for controlling inflight params
This file is just done to learn Tkinter

@author: manoj
"""


import Tkinter
import tkMessageBox

#WINDOW DECLARATION
top = Tkinter.Tk()# Window declaration

#BUTTON FUNCTIONS
def helloCallBack(): # declaration of interrupt kind of function
    tkMessageBox.showinfo("hello python","hello message")
    
def dest():
    top.destroy()
  
# BUTTON  
B=Tkinter.Button(top,text="Hello button",command=helloCallBack) #make button object
B.grid(column=0,row=0,sticky=Tkinter.W)# pack a widget into parent window/widget(denoted by top in previous line)

# BUTTON  
B1=Tkinter.Button(top,text="Close ",command=dest) #make button object
B1.grid(column=1,row=0,sticky=Tkinter.W)# pack a widget into parent window/widget(denoted by top in previous line)

# LABEL
L=Tkinter.Label(top,text="Name: ");
L.grid(column=0,row=1,sticky=Tkinter.W)

# FRAME
F=Tkinter.Frame(top)

# TEXT
T=Tkinter.Text(top,height=1,width=25,font="Comic\ Sans\ MS")
T.grid(column=1,row=1,sticky=Tkinter.W)

# CHECKBOX
CB=Tkinter.Checkbutton(F)
CB.grid(column=0,row=0,sticky=Tkinter.S)

#RADIO BUTTON
RB=Tkinter.Radiobutton(F)
RB.grid(column=1,row=0,sticky=Tkinter.W)
F.grid(column=2,row=1,sticky=Tkinter.W)


#EXECUTE
top.mainloop(); #To display the top window

