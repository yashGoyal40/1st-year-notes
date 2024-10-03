import tkinter as tk

class Calculator:
    def __init__(self, root):
        self.root = root
        self.root.title("Calculator")
        self.root.geometry("250x250")
        self.root.resizable(0, 0)

        self.display = tk.Entry(root, font=("Helvetica", 15), justify="right", bd=10, bg="#eee", width=22)
        self.display.grid(row=0, column=0, columnspan=4, pady=10)

        self.button1 = tk.Button(root, text="1", font=("Helvetica", 15), bd=5, width=5, command=lambda: self.insert("1"))
        self.button2 = tk.Button(root, text="2", font=("Helvetica", 15), bd=5, width=5, command=lambda: self.insert("2"))
        self.button3 = tk.Button(root, text="3", font=("Helvetica", 15), bd=5, width=5, command=lambda: self.insert("3"))
        self.button4 = tk.Button(root, text="4", font=("Helvetica", 15), bd=5, width=5, command=lambda: self.insert("4"))
        self.button5 = tk.Button(root, text="5", font=("Helvetica", 15), bd=5, width=5, command=lambda: self.insert("5"))
        self.button6 = tk.Button(root, text="6", font=("Helvetica", 15), bd=5, width=5, command=lambda: self.insert("6"))
        self.button7 = tk.Button(root, text="7", font=("Helvetica", 15), bd=5, width=5, command=lambda: self.insert("7"))
        self.button8 = tk.Button(root, text="8", font=("Helvetica", 15), bd=5, width=5, command=lambda: self.insert("8"))