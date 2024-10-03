class car():
    def __init__(self,name,color):
        self.name=name
        self.color=color
    def getspeed(self):
        print("top speed of "+ self.name +"is 150km/h")
honda_city=car('honda','red')
honda_city.getspeed()
