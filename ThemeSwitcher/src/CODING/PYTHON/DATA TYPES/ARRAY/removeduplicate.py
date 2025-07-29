# Write a Python program that removes all duplicate elements from an array and returns a new array.
from array import * 
def test(nums):
    return sorted(set(nums),key=nums.index)
arr = array('i',[1,3,5,1,3,7,9])
print("Original Array : ")
for i in range(len(arr)):
    print(arr[i],end= ' ')
print("\nAfter removing duplicate elements from the said array:")
result = array('i', test(arr))
for i in range(len(result)):    
    print(result[i], end=' ')