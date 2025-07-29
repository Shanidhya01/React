# Create a Bus class that inherits from the Vehicle class. Give the capacity argument of Bus.seating_capacity() a default value of 50.

class vehicle:
    def __init__(self,name,max_speed,mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage
        
    def seating_capacity(self,capacity):
        return  f"The seating capacity of a {self.name} is {capacity} passengers "
class bus(vehicle):
    def seating_capacity(self, capacity=50):
        return super().seating_capacity(capacity=50)
school_bus = bus('School volvo ',180,20)
print(school_bus.seating_capacity())