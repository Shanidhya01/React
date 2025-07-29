# Python Program to Find the Factors of a Number
n = int(input("enter the number :  "))
for i in range (1,n+1):
    if n%i==0:
       print('THE FACTOR OF ',n, ' IS ',i)