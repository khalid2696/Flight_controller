#! /usr/bin/python
 
#-*- coding: utf-8 -*-
"""
Created on Wed May 17 13:56:33 2017
FCB gui for controlling inflight params

@author: manoj
"""


import Tkinter
import tkMessageBox


top = Tkinter.Tk()# Window declaration

def helloCallBack(): # declaration of interrupt kind of function
    tkMessageBox.showinfo("hello python","hello message")
    
B=Tkinter.Button(top,text="Hello button",command=helloCallBack) #make button object
B.pack()# pack a widget into parent window/widget(denoted by top in previous line)

top.mainloop(); #To display the top window

