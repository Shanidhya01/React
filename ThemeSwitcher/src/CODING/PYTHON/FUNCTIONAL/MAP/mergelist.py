# Write a Python program to interleave two lists into another list randomly. Use the map() function.
import random
def randomlytinterleave(nums1,nums2):
    zipped = str(nums1) +  str(nums2)
    interleaved = map(lambda x:random.choice(x),zipped)
    return list(interleaved)
nums1 = [1, 2, 7, 8, 3, 7]
nums2 = [4, 3, 8, 9, 4, 3, 8, 9]
print("Original lists:")
print(nums1)
print(nums2)
result = randomlytinterleave(nums1,nums2)
print("Interleave two given lists into another list randomly:")
print(result)