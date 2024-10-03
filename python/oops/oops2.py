se1 =['Software Engineer','Max',20,'junior',5000]
se2 =['Software Engineer','Celina',25,'senior',7000]
def code(se):
    print(f"{se[1]} is writting code")
code(se1)
code(se2)
#better way
class SoftwareEngineer:
    def __init__(self,name,age,level,salary):
        self.name=name
        self.age=age
        self.level=level
        self.salary=salary
    #instance method (writing self in instance method we can acess all the instance attributes)
    def code(self):
        print(f"{self.name} is writing code")

    def code_in_lang(self,lang):
        print(f"{self.name} is writing code in {lang}")

    # def information(self):
    #     information =(f"name= {self.name} age= {self.age} level= {self.level} salary= {self.salary}")
    #     return information

    #deunder methods
    def __str__(self):
         information =(f"name= {self.name} age= {self.age} level= {self.level} salary= {self.salary}")
         return information

    def __eq__(self,other):
        return self.name==other.name and self.age==other.age

    @staticmethod
    def entry_salary(age):
        if age<25:
            return 5000
        elif age<30:
            return 7000
        else:
            return 9000

Se1 =SoftwareEngineer('Max',20,'junior',5000)
Se2 =SoftwareEngineer('Celina',25,'senior',7000)
Se3 =SoftwareEngineer('Celina',25,'senior',7000)
Se1.code()
Se2.code()
Se1.code_in_lang('python')
Se1.code_in_lang('java')
# print(Se1.information())
# print(Se2.information())
print(Se1)
print(Se2)
print(Se2==Se3)
print(Se1.entry_salary(54))
print(SoftwareEngineer.entry_salary(24))
