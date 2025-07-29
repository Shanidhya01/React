# Write a Python program to handle a ZeroDivisionError exception when dividing a number by zero.
def divide(x,y):
    try:
        result = x/y
        print("RESULT: ",result)
    except ZeroDivisionError:
        print("The Divison By Zero Is Not Allowed")
x = int(input("enter 1st number: "))
y = int(input("enter 2nd number: "))
divide(x,y)