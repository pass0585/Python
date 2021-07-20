from tkinter import *
from tkinter import messagebox

##함수선언
def myFunc():
    messagebox.showinfo("강아지버튼", "강아지가 귀엽지?")

#메인코드
window = Tk()

photo = PhotoImage(file = "C:\GitRepository\Python&iot\Python\Image\GIF/dog.gif")
button1 = Button(window, image = photo, command = myFunc)

button1.pack()

window.mainloop()