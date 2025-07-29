# Write a Python program to remove the first occurrence of a specified element from an array.
from array import *
arr = array('i', [1, 3, 5, 3, 7, 1, 9, 3])
print("Original array: ")
for i in arr:
    print(i)
n= int(input("the number whose 1st occurance is to be removed: "))
print(f"Remove the first occurrence of {n} from the said array:")
arr.remove(n)
print("New array: ")
for i in arr:
    print(i)
