# Write a Python program to get the length in bytes of one array item in the internal representation.
from array import *
arr = array('i',[1,3,5,7,9])
print("Original array: ")
for i in arr:
    print(i)
print("Length of bytes of one array item: ",(arr.itemsize))