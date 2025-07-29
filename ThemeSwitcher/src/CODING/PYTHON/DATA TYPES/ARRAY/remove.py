# Write a Python program to remove a specified item using the index of an array.
from array import *
arr = array('i',[1,3,5,7,9])
print("Original array: ")
for i in arr:
    print(i)
n = int(input("enter the position of element to be removed: "))
print(f"Remove the {n} element from the array: ")
arr.pop(n-1)
print("New array : ")
for i in arr:
    print(i)