# Write a Python program to convert a given list of integers and a tuple of integers into a list of strings
nums_list = [1, 2, 3, 4]
nums_tuple = (0, 1, 2, 3)
print("Original list and tuple:")
print(nums_list)
print(nums_tuple)
result_list = list(map(str, nums_list))
result_tuple = tuple(map(str, nums_tuple))
print("\n LIST OF STRING: ",result_list)
print("TUPLE OF STRING: ",result_tuple)