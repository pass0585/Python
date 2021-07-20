from tkinter import *
window = Tk()
window.title("냥이들")

photo1 = PhotoImage(file = "C:\GitRepository\Python&iot\Python\Image\GIF/cat.gif")
photo2 = PhotoImage(file = "C:\GitRepository\Python&iot\Python\Image\GIF/cat2.gif")

label1 = Label(window, image = photo1)
label2 = Label(window, image = photo2)

label1.pack(side=LEFT)
label2.pack(side=LEFT)

window.mainloop()