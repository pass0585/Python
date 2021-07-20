from tkinter import *
from time import *

##전역 변수
btnList = [None]*9
fnameList = ["jeju1.gif", "jeju2.gif","jeju3.gif","jeju4.gif",
             "jeju5.gif","jeju6.gif","jeju7.gif","jeju8.gif","jeju9.gif"]
photoList = [None]*9
num = 0

#함수
def clickNext():
    global num
    num+=1
    if num>8:
        num=0
    photo = PhotoImage(file = "C:\GitRepository\Python&iot\Python\Image\GIF/" + fnameList[num])
    name = fnameList[num]
    pLabel.configure(image = photo)
    nameLabel.configure(text = fnameList[num])
    pLabel.image = photo

def clickPrev():
    global num
    num-= 1
    if num < 0 :
        num = 8
    photo = PhotoImage(file = "C:\GitRepository\Python&iot\Python\Image\GIF/" + fnameList[num])
    pLabel.configure(image = photo)
    pLabel.image = photo
    nameLabel.configure(text = fnameList[num])

##메인코드
window = Tk()
window.geometry("700x500")
window.title("사진 앨범 보기기")

btnPrev = Button(window, text = "<<이전", command = clickPrev)
btnNext = Button(window, text = "다음>>", command = clickNext)

photo = PhotoImage(file = "C:\GitRepository\Python&iot\Python\Image\GIF/" + fnameList[0])
pLabel = Label(window, image = photo)
nameLabel = Label(window, text = fnameList[0])

btnPrev.place(x = 250, y = 10)
btnNext.place(x = 400, y = 10)
pLabel.place(x = 15, y = 50)
nameLabel.place(x = 325, y = 10)

window.mainloop()
