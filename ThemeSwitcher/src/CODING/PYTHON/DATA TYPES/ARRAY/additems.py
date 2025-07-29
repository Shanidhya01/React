# Write a Python program to append a new item to the end of the array.
from array import *
arr = array('i',[1,3,5,7,9])
print("Original array: ")
for i in arr:
    print(i)
print("Append 11 at the end of array:")
arr.append(11)
print("New array: ")
for i in arr:
    print(i)