# Write a Python program to count the same pair in two given lists. use map() function.
from operator import *
def countpair(nums1,nums2):
    result = sum(map(eq , nums1,nums2))
    return result
nums1 = [1, 2, 3, 4, 5, 6, 7, 8]
nums2 = [2, 2, 3, 1, 2, 6, 7, 9]
print("Original list:")
print(nums1)
print(nums2)
print("Number of same pair of the said two given lists:")
print(countpair(nums1, nums2))