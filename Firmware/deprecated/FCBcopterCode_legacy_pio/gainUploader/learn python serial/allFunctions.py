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
B.pack()# pack a widget into parent window/widget(denoted by top in previous line)

# BUTTON  
B1=Tkinter.Button(top,text="Close ",command=dest) #make button object
B1.pack()# pack a widget into parent window/widget(denoted by top in previous line)

# LABEL
L=Tkinter.Label(top,text="Name: ");
L.pack()

# FRAME
F=Tkinter.Frame(top)

# TEXT
T=Tkinter.Text(F,height=1,width=25,font="Comic\ Sans\ MS")
T.pack()

# CHECKBOX
CB=Tkinter.Checkbutton(F)
CB.pack(anchor=Tkinter.W)

#RADIO BUTTON
RB=Tkinter.Radiobutton(F)
RB.pack(anchor='w')
F.pack()


#EXECUTE
top.mainloop(); #To display the top window

