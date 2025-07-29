# Write a Python program to create a class representing a Circle.
# Include methods to calculate its area and perimeter.
import math
class Circle:
    def __init__(self,radius):
        self.radius = radius
    def area(self):
        return math.pi * self.radius**2
    def perimeter(self):
        return 2 * math.pi * self.radius
radius = float(input("enter the radius of the circle : "))
circle = Circle(radius)
print("THE AREA OF CIRCLE IS : ",circle.area())
print("THE PERIMETER OF CIRCLE IS : ",circle.perimeter())