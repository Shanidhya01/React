# Write a Python program to get the number of occurrences of a specified element in an array.
from array import *
arr = array('i',[1,3,5,7,9,3,7,6,9,3])
print("Original array: ")
for i in arr:
    print(i)
n = int(input("enter the number whose occurance is to be find: "))
print(f"Number of occurance of the number {n}: ",arr.count(n))