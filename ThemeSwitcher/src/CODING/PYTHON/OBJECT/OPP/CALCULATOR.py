# Write a Python program to create a calculator class.
# Include methods for basic arithmetic operations.
class Calculator:
    def add(self,x,y):
        return x+y
    def subtract(self,x,y):
        return x-y
    def multiply(self,x,y):
        return x*y
    def divide(self,x,y):
        if y!=0:
           return x/y
        else:
            return ("CANNOT DIVIDE BY ZERO")
        
calculator = Calculator()
print("7 + 5 =", calculator.add(7,5))
print("7 - 5 =", calculator.subtract(7,5))
print("7 * 5 =", calculator.multiply(7,5))
print("7 / 5 =", calculator.divide(7,5))