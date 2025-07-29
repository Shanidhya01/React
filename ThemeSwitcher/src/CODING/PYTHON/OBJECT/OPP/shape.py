# Write a Python program to create a class that represents a shape.
# Include methods to calculate its area and perimeter.
# Implement subclasses for different shapes like circle, triangle, and square.
import math
class Shape:
    def area(self):
        pass
    def perimeter(self):
        pass
 
class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius
    def area(self):
        return math.pi * self.radius ** 2
    def perimeter(self):
        return 2 * math.pi * self.radius 
    
class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width 
    def area(self):
        return self.length * self.width
    def perimeter(self):
        return 2 * (self.length + self.width) 
    
class Triangle(Shape):
    def __init__(self, base,height,side1,side2,side3):
        self.base = base
        self.height = height
        self.side1 = side1
        self.side2 = side2
        self.side3 = side3

    def area(self):
        return 0.5 * self.base * self.height
    def perimeter(self):
        return self.side3 + self.side2 + self.side1
r =7
circle = Circle(r)
circle_area = circle.area()
circle_perimeter = circle.perimeter()
print("Radius of the circle:", r)
print("Circle Area:", circle_area)
print("Circle Perimeter:", circle_perimeter)

l = 5
w = 7
rectangle = Rectangle(l, w)
rectangle_area = rectangle.area()
rectangle_perimeter = rectangle.perimeter()
print("\nRectangle: Length =", l, " Width =", w)
print("Rectangle Area:", rectangle_area)
print("Rectangle Perimeter:", rectangle_perimeter)

base = 5
height = 4
s1 = 4
s2 = 3
s3 = 5
print("\nTriangle: Base =", base, " Height =", height, " side1 =", s1, " side2 =", s2, " side3 =", s3)
triangle = Triangle(base, height, s1, s2, s3)
triangle_area = triangle.area()
triangle_perimeter = triangle.perimeter()
print("Triangle Area:", triangle_area)
print("Triangle Perimeter:", triangle_perimeter)