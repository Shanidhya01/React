# Create a Bus child class that inherits from the Vehicle class. 
# The default fare charge of any vehicle is seating capacity * 100.
# If Vehicle is Bus instance, we need to add an extra 10% on full fare as a maintenance charge. 
# So total fare for bus instance will become the final amount = total fare + 10% of the total fare.
class vehicle ():
    def __init__ (self,name,mileage,capacity):
        self.name = name
        self.capacity = capacity
        self.mileage = mileage
        
    def fare(self):
        return self.capacity * 100
class bus (vehicle):
    def fare(self):
        amount = super().fare()
        amount += amount *10/100
        return amount 
school_bus = bus("school volvo ",12,50)
print("Total Bus Fair Is : ",school_bus.fare())

