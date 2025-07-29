# Python Program to Find the Factorial of a Number

# To take input from the user
num = int(input("Enter a number: "))

def fac(n):
    if(n<=1):
        return 1
    else:
        return fac(n-1) * n
# check if the number is negative, positive or zero
if num < 0:
   print("Sorry, factorial does not exist for negative numbers")
elif num == 0:
   print("The factorial of 0 is 1")
else:
   print("The factorial of",num,"is",fac(num))
