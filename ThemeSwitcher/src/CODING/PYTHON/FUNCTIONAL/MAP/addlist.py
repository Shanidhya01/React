# Write a Python program to add three given lists using Python map and lambda
nums1 = [1,2,3,4,5,6]
nums2 = [7,8,9,10,11,12]
nums3 = [13,14,15,16,17,18]
print("Original list:")
print(nums1)
print(nums2)
print(nums3)
result = map(lambda x,y,z: x+y+z,nums1,nums2,nums3)
print("\n After adding all list new list : ",list(result))