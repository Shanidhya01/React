# Write a Python program to append items from inerrable to the end of the array.
from array import *
arr = array('i',[1,3,5,7,9])
print("Original array: ")
for i in arr:
    print(i)
arr.extend(arr)
print("Extended array: ")
for i in arr:
    print(i)