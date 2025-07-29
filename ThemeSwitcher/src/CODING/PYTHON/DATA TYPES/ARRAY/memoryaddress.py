# Write a Python program to get the current memory address and the length in elements of the 
# buffer used to hold an array's contents. Also, find the size of the memory buffer in bytes.
from array import *
arr = array('i',[1,3,5,7,9])
print("Original array: ")
for i in arr:
    print(i)
print("Current memory address and the length in the element of the buffer: ",(arr.buffer_info()))
print("The sides of the murder buffer in bytes: ",(arr.buffer_info()[1]*arr.itemsize))