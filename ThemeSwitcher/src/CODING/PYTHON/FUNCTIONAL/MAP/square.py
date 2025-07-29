#  Write a Python program to square the elements of a list using the map() function.
nums = [1,2,3,4,5,6,7,8,9]
print("Original list:")
print(nums)
result =  list(map(lambda x :x**2,nums))
print(result)