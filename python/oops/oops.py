''' 
oops principles
1 inheritance
2 polymorphism
3 encapsulation
4 abstaction
'''
#position name age level salary
se1 =['Software Engineer','Max',20,'junior',5000]
se2 =['Software Engineer','Celina',25,'senior',7000]
'''its difficult to store complex datastructure in list so class provide a infrastructure(blueprint) to store comlex datasructure'''
#class(blueprint)
class SoftwareEngineerTemp:
    pass
#instance(objects)
se1=SoftwareEngineerTemp()
'''class is just an infrastucture how a data will be stored in the instance of that perticular class'''

# working of an class
class SoftwareEngineer:
    def __init__(self,name,age,level,salary):
        #instance attributes
        self.name=name
        self.age=age
        self.level=level
        self.salary=salary
        #in self.name=name  (name is the parameter passed from outside) but (self.name can be used inside the class) 


Se1=SoftwareEngineer('Max',20,'junior',5000)
Se2=SoftwareEngineer('Celina',25,'senior',7000)
print(Se1.name)#refring to self.name for instance Se1
print(Se2.age)#refring to self.age for instance Se2
#they did not refer to paramiters passed from outside the ie value of instance atributes is is equal to the parameters passed from outside



class SoftwareEngineer2:

    #class atribute
    alias='magician'

    def __init__(self,name,age,level,salary):
        #instance attributes
        self.name=name
        self.age=age
        self.level=level
        self.salary=salary
''' instance atributes did not belongs to whole class eg- (SoSoftwareEngineer2.name) will give an error'''
#but
'''class atributes belongs to the class eg- (SoSoftwareEngineer2.alias) will give (magician)'''
te2=SoftwareEngineer2('Celina',25,'senior',7000)
te1=SoftwareEngineer2('Celinaa',24,'not senior',5000)
print(te2.alias)
print(SoftwareEngineer2.alias)
print(te1.alias)
'''class atributes belongs to every instance defined in the class'''