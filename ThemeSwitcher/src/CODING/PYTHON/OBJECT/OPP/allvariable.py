# Create a child class Bus that will inherit all of the variables and methods of the Vehicle class
from re import S


class vehicle:
    def __init__(self,name,max_speed,mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage
class bus(vehicle):
    pass
school_bus = bus("SCHOOL VOLVO ",180,25)
print("vehicle name : ",school_bus.name)
print("\n SPEED :",school_bus.max_speed)
print("\n MILEAGE : ",school_bus.mileage)