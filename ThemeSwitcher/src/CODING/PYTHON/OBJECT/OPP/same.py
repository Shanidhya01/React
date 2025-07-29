# Define a class attribute”color” with a default value white. I.e., Every Vehicle should be white.
class Vehicle():
    
    color = "white"
    def __init__(self,name,maxspeed,mileage ):
        self.name = name
        self.maxspeed = maxspeed
        self.mileage = mileage
class Bus(Vehicle):
    pass
class Car(Vehicle):
    pass
school_bus = Bus("School Volvo",180,16)
print(school_bus.color,school_bus.name,"SPEED :",school_bus.maxspeed,"MILEAGE : ",school_bus.mileage)
car = Car("AUDI Q5",250,25)
print(car.color,car.name,"SPEED:",car.maxspeed,"MILEAGE : ",car.mileage)       