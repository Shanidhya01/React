# Write a Python program to count the occurrences of items in a given list using lambda.
def count_occurance(nums):
    result = dict(map(lambda el:(el,list(nums).count(el)),nums))
    return result
nums = 3, 4, 5, 8, 0, 3, 8, 5, 0, 3, 1, 5, 2, 3, 4, 2
print("Original List: ", nums)
print("\nCount the occurance of the items in the said list:")
print(count_occurance(nums))