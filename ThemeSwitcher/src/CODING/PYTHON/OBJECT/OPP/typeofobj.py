# Write a program to determine which class a given Bus object belongs to
class Vehicle():
    
    color = "white"
    def __init__(self,name,maxspeed,mileage ):
        self.name = name
        self.maxspeed = maxspeed
        self.mileage = mileage
class Bus(Vehicle):
    pass

school_bus = Bus("School Volvo",180,16)
print(type(school_bus))
