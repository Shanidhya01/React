# Write a Python program to add two given lists and find the difference between them. Use the map() function.
nums1 = [1,2,3,4,5,6]
nums2 = [7,8,9,10,11,12]
print("Original list:")
print(nums1)
print(nums2)
result1 = list(map(lambda x,y : x+y,nums1,nums2))
result2 = list(map(lambda x,y : x-y,nums1,nums2))
print("\n After adding : ",result1)
print("After substracting: ",result2)