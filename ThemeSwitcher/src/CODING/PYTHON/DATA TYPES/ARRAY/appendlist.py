# Write a Python program to append items to a specified list
from array import *
num = [1,2,3,4]
arr = array('i',[])
print("Items in the list : ",num)
print("Append items from the list: ")
arr.fromlist(num)
for i in arr:
    print(i)