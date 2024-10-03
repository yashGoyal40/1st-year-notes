#process by which one class takes all the  attributes and method of other class, newly formed class is child class and the other class is called parent class

#inherit all of the atributes from employee 
class Employeee:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def work(self):
        print(f"{self.name} is working")
class SoftwareEngineer1(Employeee):
    pass

class Designerr(Employeee):
    pass
Se1=Employeee("max",33)
print(Se1.name,Se1.age)
Se=Designerr("yash",32)
print(Se.name,Se.age)
Se.work()
Se1.work()


#extending
class Employee1:
    def __init__(self,name,age,salary):
        self.name=name
        self.age=age
        self.salary=salary
    def work(self):
        print(f"{self.name} is working")
class SoftwareEngineer1(Employee1):
    def __init__(self,name,age,salary,lavel):
        super().__init__(name,age,salary)
        self.lavel=lavel
    def debug(self):
        print(f"{self.name} is debugging")
class Designer1(Employee1):
    def draw(self):
        print(f"{self.name} is drawing")
see1=SoftwareEngineer1("rax",33,7000,"junior")
see1.work()
print(see1.lavel)
see1.debug()
see=Designer1("yash",32,6060)
see.draw()

#overWriting
class Employee:
    def __init__(self,name,age,salary):
        self.name=name
        self.age=age
        self.salary=salary
    def work(self):
        print(f"{self.name} is coding")
class SoftwareEngineer(Employee):
    def __init__(self,name,age,salary,lavel):
        super().__init__(name,age,salary)
        self.lavel=lavel
    def debug(self):
        print(f"{self.name} is debugging")
class Designer(Employee):
    def draw(self):
        print(f"{self.name} is drawing")
    def work(self):
        print(f"{self.name} is designing")
se1=SoftwareEngineer("eng1",33,7000,"junior")
se=Designer("des1",32,6060)
se1.work()
se.work()

#polymorphism
'''polymorphism gives us a way to use a child class exactly like its parent but still each child class keep its own method as they are '''
employees=[
    SoftwareEngineer("eng1",33,7000,"junior"),
    SoftwareEngineer1("rax",33,7000,"junior"),
    Designer("des1",32,6060)
]
def motivate_(employees):
    for employee in employees:
        employee.work()

motivate_(employees)