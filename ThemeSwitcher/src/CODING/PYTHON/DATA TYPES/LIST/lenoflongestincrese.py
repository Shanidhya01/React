# Write a Python function find the length of the longest increasing sub-sequence in a list.
def longest_increasing_subsequence(nums):
    n = len(nums)
    arr=[1]*n
    for i in range(1,n):
        for j in range(i):
            if nums[i]>nums[j]:
                arr[i] = max(arr[i],arr[j] + 1) 
    return max(arr)
nums = [10,20,30,40,50,60,70,80]
print("ORIGINAL LIST: ")
print(nums)
print("Length of the longest increasing sub-sequence in the said list:")
print(longest_increasing_subsequence(nums))

nums=[10,20,30,40,50,30,30,20]
print("ORIGINAL LIST: ")
print(nums)
print("Length of the longest increasing sub-sequence in the said list:")
print(longest_increasing_subsequence(nums))

nums = [-1,-2,-3,-4,-5,-11,-12,-13]
print("ORIGINAL LIST: ")
print(nums)
print("Length of the longest increasing sub-sequence in the said list:")
print(longest_increasing_subsequence(nums))
