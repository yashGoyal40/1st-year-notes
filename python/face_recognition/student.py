from tkinter import*
from tkinter import ttk
from PIL import Image,ImageTk


class Student:
    def __init__(self,root):
        self.root=root
        self.root.geometry("1530x790+0+0")
        self.root.title("face Recognition System")
 # first img
        img=Image.open(r"D:\coding\python\face_recognition\college_images\images (1).jfif")
        img=img.resize((500,130),Image.ANTIALIAS)
        self.photoimg=ImageTk.PhotoImage(img)

        f_lbl=Label(self.root,image=self.photoimg)
        f_lbl.place(x=0,y=0,width=500,height=134)

# second img
        img1=Image.open(r"D:\coding\python\face_recognition\college_images\images (1).jfif")
        img1=img1.resize((500,130),Image.ANTIALIAS)
        self.photoimg1=ImageTk.PhotoImage(img1)

        f_lbl=Label(self.root,image=self.photoimg1)
        f_lbl.place(x=500,y=0,width=500,height=134)

# third img
        img2=Image.open(r"D:\coding\python\face_recognition\college_images\images (1).jfif")
        img2=img2.resize((550,130),Image.ANTIALIAS)
        self.photoimg2=ImageTk.PhotoImage(img2)

        f_lbl=Label(self.root,image=self.photoimg2)
        f_lbl.place(x=1000,y=0,width=550,height=134)

#bg img
        img3=Image.open(r"D:\coding\python\face_recognition\college_images\download (3).jfif")
        img3=img3.resize((1530,710),Image.ANTIALIAS)
        self.photoimg3=ImageTk.PhotoImage(img3)

        bg_img=Label(self.root,image=self.photoimg3)
        bg_img.place(x=0,y=130,width=1530,height=710)

#title
        title_lbl=Label(bg_img,text="STUDENT MANAGEMENT SYSTEM",font=("times new roman",35,"bold"),fg="black")
        title_lbl.place(x=0,y=0,width=1530,height=45)

#main frame
        main_frame=Frame(bg_img)
        main_frame.place(x=0,y=43,width=1530,height=650)
# left label frame 
        Left_frame=LabelFrame(main_frame,bg="white",bd=2,relief=RIDGE,text="Student Details",font=("times new roman",12,"bold"))
        Left_frame.place(x=10,y=10,width=745,height=620)
#Current course
        current_course=LabelFrame(Left_frame,bg="white",bd=2,relief=RIDGE,text="Current Course",font=("times new roman",12,"bold"))
        current_course.place(x=10,y=10,width=715,height=220)
#dep
        dep_label=Label(current_course,text="Dapartment",bg="white",font=("times new roman",12,"bold"))
        dep_label.grid(row=0,column=0,padx=10)

        dep_combo=ttk.Combobox(current_course,font=("times new roman",12,"bold"),state="readonly")
        dep_combo["values"]=("Select Department","CSE","IT","Civil","Mechanical","Electronics")
        dep_combo.current(0)
        dep_combo.grid(row=0,column=1,padx=2,pady=10)
#course
        course_label=Label(current_course,text="Course",bg="white",font=("times new roman",12,"bold"))
        course_label.grid(row=1,column=0,padx=10)

        course_combo=ttk.Combobox(current_course,font=("times new roman",12,"bold"),state="readonly")
        course_combo["values"]=("Select Course","FE","SE","TE","LE")
        course_combo.current(0)
        course_combo.grid(row=1,column=1,padx=2,pady=10)
#year
        Year_label=Label(current_course,text="Year",bg="white",font=("times new roman",12,"bold"))
        Year_label.grid(row=2,column=0,padx=10)

        year_combo=ttk.Combobox(current_course,font=("times new roman",12,"bold"),state="readonly")
        year_combo["values"]=("Select Year","2017-2021","2018-2022","2019-2023","2020-2024","2021-2025","2022-2026")
        year_combo.current(0)
        year_combo.grid(row=2,column=1,padx=2,pady=10)
#semester
        semester_label=Label(current_course,text="Semester",bg="white",font=("times new roman",12,"bold"))
        semester_label.grid(row=3,column=0,padx=10)

        sem_combo=ttk.Combobox(current_course,font=("times new roman",12,"bold"),state="readonly")
        sem_combo["values"]=("Select Semester","First Sem","Second Sem")
        sem_combo.current(0)
        sem_combo.grid(row=3,column=1,padx=2,pady=10)
# class stu info  
        stu_info=LabelFrame(Left_frame,bg="white",bd=2,relief=RIDGE,text="Student Class Information",font=("times new roman",12,"bold"))
        stu_info.place(x=10,y=250,width=715,height=340)
#stu id
        stu_id=Label(stu_info,text="StudentID",bg="white",font=("times new roman",12,"bold"))
        stu_id.grid(row=0,column=0,padx=10,pady=10)

        stu_id_entry=ttk.Entry(stu_info,width=20,font=("times new roman",12,"bold"))
        stu_id_entry.grid(row=0,column=1,padx=10,pady=10)
#stu name
        stu_name=Label(stu_info,text="Student Name",bg="white",font=("times new roman",12,"bold"))
        stu_name.grid(row=1,column=0,padx=10,pady=10)

        stu_name_entry=ttk.Entry(stu_info,width=20,font=("times new roman",12,"bold"))
        stu_name_entry.grid(row=1,column=1,padx=10,pady=10)
#stu section
        stu_sec=Label(stu_info,text="Section",bg="white",font=("times new roman",12,"bold"))
        stu_sec.grid(row=2,column=0,padx=10,pady=10)

        stu_sec_entry=ttk.Entry(stu_info,width=20,font=("times new roman",12,"bold"))
        stu_sec_entry.grid(row=2,column=1,padx=10,pady=10)
#stu roll
        stu_roll=Label(stu_info,text="Roll No",bg="white",font=("times new roman",12,"bold"))
        stu_roll.grid(row=3,column=0,padx=10,pady=10)

        stu_roll_entry=ttk.Entry(stu_info,width=20,font=("times new roman",12,"bold"))
        stu_roll_entry.grid(row=3,column=1,padx=10,pady=10)
#stu gender
        stu_gen=Label(stu_info,text="Specify Gender",bg="white",font=("times new roman",12,"bold"))
        stu_gen.grid(row=4,column=0,padx=10,pady=10)

        stu_gen_entry=ttk.Entry(stu_info,width=20,font=("times new roman",12,"bold"))
        stu_gen_entry.grid(row=4,column=1,padx=10,pady=10)
#email
        stu_mail=Label(stu_info,text="Mail ID",bg="white",font=("times new roman",12,"bold"))
        stu_mail.grid(row=0,column=4,padx=10,pady=10)

        stu_mail_entry=ttk.Entry(stu_info,width=20,font=("times new roman",12,"bold"))
        stu_mail_entry.grid(row=0,column=5,padx=10,pady=10,sticky=W)
#age
        stu_age=Label(stu_info,text="Age",bg="white",font=("times new roman",12,"bold"))
        stu_age.grid(row=1,column=4,padx=10,pady=10)

        stu_age_entry=ttk.Entry(stu_info,width=20,font=("times new roman",12,"bold"))
        stu_age_entry.grid(row=1,column=5,padx=10,pady=10,sticky=W)
#dob
        stu_dob=Label(stu_info,text="DOB",bg="white",font=("times new roman",12,"bold"))
        stu_dob.grid(row=2,column=4,padx=10,pady=10)

        stu_dob_entry=ttk.Entry(stu_info,width=20,font=("times new roman",12,"bold"))
        stu_dob_entry.grid(row=2,column=5,padx=10,pady=10,sticky=W)
#phone no
        stu_no=Label(stu_info,text="Phone No",bg="white",font=("times new roman",12,"bold"))
        stu_no.grid(row=3,column=4,padx=10,pady=10)

        stu_no_entry=ttk.Entry(stu_info,width=20,font=("times new roman",12,"bold"))
        stu_no_entry.grid(row=3,column=5,padx=10,pady=10,sticky=W)
#add
        stu_add=Label(stu_info,text="Address",bg="white",font=("times new roman",12,"bold"))
        stu_add.grid(row=4,column=4,padx=10,pady=10)

        stu_add_entry=ttk.Entry(stu_info,width=20,font=("times new roman",12,"bold"))
        stu_add_entry.grid(row=4,column=5,padx=10,pady=10,sticky=W)

#radio button
        rb1=ttk.Radiobutton(stu_info,text="Take Photo Sample",value="Yes")
        rb1.grid(row=5,column=1)

        rb2=ttk.Radiobutton(stu_info,text="No Photo Sample",value="No")
        rb2.grid(row=5,column=4)

#button frame
        btn_frame=Frame(stu_info,relief=RAISED,bg="white")
        btn_frame.place(x=30,y=260,width=650,height=50)
#take_photo_btn
        take_photo_btn=Button(btn_frame,text="Take Photo",font=("times new roman",16,"bold"),bg="light green",fg="black")
        take_photo_btn.grid(row=0,column=0,padx=20)
#update_photo_btn
        update_photo_btn=Button(btn_frame,text="Update Photo",font=("times new roman",16,"bold"),bg="light green",fg="black")
        update_photo_btn.grid(row=0,column=1,padx=20)
#save button
        save_btn=Button(btn_frame,text="save",font=("Al Tarikh",12,"bold"),bg="light green",fg="black")
        save_btn.grid(row=0,column=2,padx=5)
#update button
        update_btn=Button(btn_frame,text="Update",font=("times new roman",12,"bold"),bg="light green",fg="black")
        update_btn.grid(row=0,column=3,padx=5)
#del button
        del_btn=Button(btn_frame,text="Delete",font=("times new roman",12,"bold"),bg="light green",fg="black")
        del_btn.grid(row=0,column=4,padx=5)
#reset button
        reset_btn=Button(btn_frame,text="Reset",font=("times new roman",12,"bold"),bg="light green",fg="black")
        reset_btn.grid(row=0,column=5,padx=5)

#Right label frame
        Right_frame=LabelFrame(main_frame,bg="white",bd=2,relief=RIDGE,text="Student Details Database",font=("times new roman",12,"bold"))
        Right_frame.place(x=765,y=10,width=755,height=620)

#=========searching_system=========
        searching_system=LabelFrame(Right_frame,bg="white",bd=2,relief=RIDGE,text="Search System",font=("times new roman",12,"bold"))
        searching_system.place(x=10,y=10,width=715,height=70)

        search_bar=Label(searching_system,text="Search By",bg="white",font=("times new roman",12,"bold"))
        search_bar.grid(row=0,column=0,padx=10,pady=10)


        search_combo=ttk.Combobox(searching_system,font=("times new roman",12,"bold"),state="readonly")
        search_combo["values"]=("Select","Student ID","Full Rollno.")
        search_combo.current(0)
        search_combo.grid(row=0,column=1,padx=10,pady=10)

        search_id_entry=ttk.Entry(searching_system,width=20,font=("times new roman",12,"bold"))
        search_id_entry.grid(row=0,column=2,padx=10,pady=10)

        search_btn=Button(searching_system,text="Search",font=("Al Tarikh",12,"bold"),bg="light green",fg="black")
        search_btn.grid(row=0,column=3,padx=5)

        show_all_btn=Button(searching_system,text="Show All",font=("Al Tarikh",12,"bold"),bg="light green",fg="black")
        show_all_btn.grid(row=0,column=4,padx=5)

#====table frame====
        table_frame=Frame(Right_frame,bd=2,bg="white",relief=RIDGE)
        table_frame.place(x=5,y=90,width=720,height=500)
#scroll bar
        scroll_x=ttk.Scrollbar(table_frame,orient=HORIZONTAL)
        scroll_y=ttk.Scrollbar(table_frame,orient=VERTICAL)

        self.student_table=ttk.Treeview(table_frame,columns=("dep","course","year","sem","id","name","sect","roll","gender","mail","age","dob","phone","add","photo"),xscrollcommand=scroll_x.set,yscrollcommand=scroll_y.set)

        scroll_x.pack(side=BOTTOM,fill=X)
        scroll_y.pack(side=RIGHT,fill=Y)
        scroll_x.config(command=self.student_table.xview)
        scroll_y.config(command=self.student_table.yview)


        self.student_table.heading("dep",text="Department")
        self.student_table.heading("course",text="Course")
        self.student_table.heading("year",text="Year")
        self.student_table.heading("sem",text="Semester")
        self.student_table.heading("id",text="Student ID")
        self.student_table.heading("name",text="Name")
        self.student_table.heading("sect",text="Section")
        self.student_table.heading("roll",text="Roll Number")
        self.student_table.heading("gender",text="Gender")
        self.student_table.heading("mail",text="E-Mail")
        self.student_table.heading("age",text="Age")
        self.student_table.heading("dob",text="DOB")
        self.student_table.heading("phone",text="Phone Number")
        self.student_table.heading("add",text="Address")
        self.student_table.heading("photo",text="PhotoSampleStatus")
        self.student_table["show"]="headings"

        self.student_table.column("dep",width=100)
        self.student_table.column("course",width=100)
        self.student_table.column("year",width=100)
        self.student_table.column("sem",width=100)
        self.student_table.column("id",width=100)
        self.student_table.column("name",width=100)
        self.student_table.column("sect",width=100)
        self.student_table.column("roll",width=100)
        self.student_table.column("gender",width=100)
        self.student_table.column("mail",width=100)
        self.student_table.column("age",width=100)
        self.student_table.column("dob",width=100)
        self.student_table.column("phone",width=100)
        self.student_table.column("add",width=100)
        self.student_table.column("photo",width=150)


        self.student_table.pack(fill=BOTH,expand=1)



if __name__ == "__main__":
    root=Tk()
    obj=Student(root)
    root.mainloop()