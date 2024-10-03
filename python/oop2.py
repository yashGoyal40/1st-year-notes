class Employee:
    no_of_leaves=8
    def __init__(self,name,salary,role):
         self.name=name
         self.salary=salary
         self.role=role
    def printdetails(self):
        return f"Name is {self.name} salary is {self.salary} Role is {self.role}"
    @classmethod
    def change_leaves(cls,newleave):
        cls.no_of_leaves=newleave
    @classmethod
    def from_str(cls,string):
        # pr=string.split("-")
        # return cls(pr[0],pr[1],pr[2])
        return cls(*string.split("-"))
    @staticmethod
    def printgood():
        print("this is good")
        return "this is good"
harry = Employee("harry",255,"instructor")
rohan =Employee("rohan",44,"stu")
karan=Employee.from_str("Karan-450-stu")
rohan.change_leaves(34)
print(harry.no_of_leaves)
print(karan.salary)
print(karan.printgood())
print(Employee.printgood())