# Write a Python program to square and cube every number in a given list of integers using Lambda
nums = [1,2,3,4,5,6,7,8,9,10]
print("Original list of Integers:")
print(nums)
print("\n Square of every number of the list:")
square = list(map(lambda x : x**2,nums))
print(square)
print("\n Cube of every number of the list:")
cube = list(map(lambda x : x**3,nums))
print(cube)