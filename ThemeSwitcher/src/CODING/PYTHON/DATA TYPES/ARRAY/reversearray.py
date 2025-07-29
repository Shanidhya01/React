# Write a Python program to reverse the order of the items in the array.
def reverse_array(arr):
    return arr[::-1]
# original_array = [1, 2, 3, 4, 5]
from array import *
arr = array('i',[1,3,5,7,9])
# reversed_array = reverse_array(original_array)
print(f"Original array: {arr}")
print(f"Reversed array: {reverse_array(arr)}")