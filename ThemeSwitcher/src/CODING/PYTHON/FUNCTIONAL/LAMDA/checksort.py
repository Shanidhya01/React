# Write a Python program to check whether a specified list is sorted or not using lambda.
def is_sorted_list(nums1):
    for i in range(1, len(nums1)):
        if nums1[i] < nums1[i - 1]:
            return False
    return True

# def is_sorted_sorted(nums1):
#     return nums1 == sorted(nums1)

nums1 = 1,2,4,6,8,10,12,14,15,17
print("Original list:")
print(nums1)
print("\nIs the said list sorted?")
print(is_sorted_list(nums1))
# print(is_sorted_sorted(nums1))