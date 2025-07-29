# Write a Python program to compute the sum of elements of an array of integers. Use the map() function.
from array import * 
def arrsum(nums_arr):
    sum = 0
    for i in nums_arr:
        sum += i
    return sum
nums = array('i',[1,2,3,4,5,-15])
print("Original Array: ",nums)
nums_arr = list(map(int , nums))
result = arrsum(nums_arr)
print("Sum of all elements of the said array: ",result)