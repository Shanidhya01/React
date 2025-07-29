import copy
nums_x = [1,2,[3,4,5,6]]
print("Original List : ",nums_x)
nums_y = copy.copy(nums_x)
print("\nCopy of the said list:")
print(nums_y)
print("\nSecond list:")
print(nums_y)
nums =  [[1], [2]]
nums_copy = copy.copy(nums)
print("\nOriginal list:")
print(nums)
print("\nCopy of the said list:")
print(nums_copy)
print("\nChange the value of an element of the original list:")
nums[0][0] = 0
print("\nFirst list:")
print(nums)
print("\nSecond list:")
print(nums_copy)