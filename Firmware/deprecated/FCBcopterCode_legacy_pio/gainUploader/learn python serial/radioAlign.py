# -*- coding: utf-8 -*-

import Tkinter as tk

window = tk.Tk()
radio_one = tk.Radiobutton(window, text="I'm a radio")
radio_two = tk.Radiobutton(window, text="I'm another radio")
button = tk.Button(window, text="I am a very long button", width=50)
button.grid(row=0, column=0, columnspan=2, sticky=tk.N+tk.S+tk.W+tk.E)
radio_one.grid(column=0, row=1, sticky=tk.N+tk.W)
radio_two.grid(column=1, row=1, sticky=tk.N+tk.W)

window.mainloop()