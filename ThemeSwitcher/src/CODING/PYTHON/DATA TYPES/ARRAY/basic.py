# Write a Python program to create an array of 5 integers and display the array items.
# Access individual elements through indexes.
from array import *
arr_num = array('i',[1,2,3,4,5])
for i in arr_num:
    print(i)
print("Access first three item individually")
print(arr_num[0])
print(arr_num[1])
print(arr_num[2])