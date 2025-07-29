# Write a Python program to create Fibonacci series up to n using Lambda.
from functools import*
fib = lambda n : reduce(lambda x,_:x+[x[-1] + x[-2]], range(n-2),[0,1])
n = int(input("enter the number till which you want the series:"))
print(f"Fibonacci series up to {n}: ")
print(fib(n))