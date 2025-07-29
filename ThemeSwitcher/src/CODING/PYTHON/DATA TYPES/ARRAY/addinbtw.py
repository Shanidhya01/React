# Write a Python program to insert a newly created item before the second element in an existing array.
from array import *
arr = array('i',[1,3,5,7,9])
print("Original array: ")
for i in arr:
    print(i)
print("Insert new value 4 before 3: ")
arr.insert(1,4)
print("New array : ")
for i in arr:
    print(i)