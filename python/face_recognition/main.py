from tkinter import*
from tkinter import ttk
from PIL import Image,ImageTk


class Face_Recognisation_system:
    def __init__(self,root):
        self.root=root
        self.root.geometry("1530x790+0+0")
        self.root.title("face Recognition System")
# first img
        img=Image.open(r"D:\coding\python\face_recognition\college_images\facialrecognition.png")
        img=img.resize((500,130),Image.ANTIALIAS)
        self.photoimg=ImageTk.PhotoImage(img)

        f_lbl=Label(self.root,image=self.photoimg)
        f_lbl.place(x=0,y=0,width=500,height=134)

# second img
        img1=Image.open(r"D:\coding\python\face_recognition\college_images\facialrecognition.png")
        img1=img1.resize((500,130),Image.ANTIALIAS)
        self.photoimg1=ImageTk.PhotoImage(img1)

        f_lbl=Label(self.root,image=self.photoimg1)
        f_lbl.place(x=500,y=0,width=500,height=134)

# third img
        img2=Image.open(r"D:\coding\python\face_recognition\college_images\facialrecognition.png")
        img2=img2.resize((550,130),Image.ANTIALIAS)
        self.photoimg2=ImageTk.PhotoImage(img2)

        f_lbl=Label(self.root,image=self.photoimg2)
        f_lbl.place(x=1000,y=0,width=550,height=134)

# bg img
        img3=Image.open(r"D:\coding\python\face_recognition\college_images\download (2).jfif")
        img3=img3.resize((1530,710),Image.ANTIALIAS)
        self.photoimg3=ImageTk.PhotoImage(img3)

        bg_img=Label(self.root,image=self.photoimg3)
        bg_img.place(x=0,y=130,width=1530,height=710)
#title
        title_lbl=Label(bg_img,text="ADVANCE SCHOOL MANAGEMENT SYSTEM",font=("times new roman",35,"bold"),bg="white",fg="black")
        title_lbl.place(x=0,y=0,width=1530,height=45)
#student button
        img4=Image.open(r"D:\coding\python\face_recognition\college_images\download.jpeg")
        img4=img4.resize((220,220),Image.ANTIALIAS)
        self.photoimg4=ImageTk.PhotoImage(img4)

        b1=Button(bg_img,image=self.photoimg4,cursor="hand2")
        b1.place(x=200,y=100,width=220,height=220)

        b1_1=Button(bg_img,text="Student Details",cursor="hand2",font=("times new roman",15,"bold"),bg="black",fg="white")
        b1_1.place(x=200,y=300,width=220,height=40)

#detect face button
        img5=Image.open(r"D:\coding\python\face_recognition\college_images\face-REC..png")
        img5=img5.resize((220,220),Image.ANTIALIAS)
        self.photoimg5=ImageTk.PhotoImage(img5)

        b2=Button(bg_img,image=self.photoimg5,cursor="hand2")
        b2.place(x=500,y=100,width=220,height=220)

        b2_1=Button(bg_img,text="Face Detector",cursor="hand2",font=("times new roman",15,"bold"),bg="black",fg="white")
        b2_1.place(x=500,y=300,width=220,height=40)

#atendence button
        img6=Image.open(r"D:\coding\python\face_recognition\college_images\download.png")
        img6=img6.resize((220,220),Image.ANTIALIAS)
        self.photoimg6=ImageTk.PhotoImage(img6)

        b3=Button(bg_img,image=self.photoimg6,cursor="hand2")
        b3.place(x=800,y=100,width=220,height=220)

        b3_1=Button(bg_img,text="Atendence",cursor="hand2",font=("times new roman",15,"bold"),bg="black",fg="white")
        b3_1.place(x=800,y=300,width=220,height=40)

# help button
        img7=Image.open(r"D:\coding\python\face_recognition\college_images\help-desk-customer-care-team-icon-blue-square-button-isolated-reflected-abstract-illustration-89657179.jpg")
        img7=img7.resize((220,220),Image.ANTIALIAS)
        self.photoimg7=ImageTk.PhotoImage(img7)

        b4=Button(bg_img,image=self.photoimg7,cursor="hand2")
        b4.place(x=1100,y=100,width=220,height=220)

        b4_1=Button(bg_img,text="Help Desk",cursor="hand2",font=("times new roman",15,"bold"),bg="black",fg="white")
        b4_1.place(x=1100,y=300,width=220,height=40)

#train button
        img8=Image.open(r"D:\coding\python\face_recognition\college_images\download (1).jpg")
        img8=img8.resize((220,220),Image.ANTIALIAS)
        self.photoimg8=ImageTk.PhotoImage(img8)

        b5=Button(bg_img,image=self.photoimg8,cursor="hand2")
        b5.place(x=200,y=400,width=220,height=220)

        b5_1=Button(bg_img,text="Train data",cursor="hand2",font=("times new roman",15,"bold"),bg="black",fg="white")
        b5_1.place(x=200,y=600,width=220,height=40)

#photos button
        img9=Image.open(r"D:\coding\python\face_recognition\college_images\images.jfif")
        img9=img9.resize((220,220),Image.ANTIALIAS)
        self.photoimg9=ImageTk.PhotoImage(img9)

        b6=Button(bg_img,image=self.photoimg9,cursor="hand2")
        b6.place(x=500,y=400,width=220,height=220)

        b6_1=Button(bg_img,text="Photos",cursor="hand2",font=("times new roman",15,"bold"),bg="black",fg="white")
        b6_1.place(x=500,y=600,width=220,height=40)

#devloper button
        img10=Image.open(r"D:\coding\python\face_recognition\college_images\Team-Management-Software-Development.jpg")
        img10=img10.resize((220,220),Image.ANTIALIAS)
        self.photoimg10=ImageTk.PhotoImage(img10)

        b7=Button(bg_img,image=self.photoimg10,cursor="hand2")
        b7.place(x=800,y=400,width=220,height=220)

        b7_1=Button(bg_img,text="Devloper",cursor="hand2",font=("times new roman",15,"bold"),bg="black",fg="white")
        b7_1.place(x=800,y=600,width=220,height=40)

#exit button
        img11=Image.open(r"D:\coding\python\face_recognition\college_images\download (1).png")
        img11=img11.resize((220,220),Image.ANTIALIAS)
        self.photoimg11=ImageTk.PhotoImage(img11)

        b8=Button(bg_img,image=self.photoimg11,cursor="hand2")
        b8.place(x=1100,y=400,width=220,height=220)

        b8_1=Button(bg_img,text="Exit",cursor="hand2",font=("times new roman",15,"bold"),bg="black",fg="white")
        b8_1.place(x=1100,y=600,width=220,height=40)

if __name__ == "__main__":
    root=Tk()
    obj=Face_Recognisation_system(root)
    root.mainloop()

