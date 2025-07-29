# Write a python program to remove NONE value from the list using lambda function.
def remove_none(nums):
    result = filter(lambda y:y is not None,nums)
    return list(result)
nums = [12,0,None,23,None,-54,234,86,None,0,6,-12]
print("Original List: ")
print(nums)
print("\nRemove NOne value from the list:")
print(remove_none(nums))