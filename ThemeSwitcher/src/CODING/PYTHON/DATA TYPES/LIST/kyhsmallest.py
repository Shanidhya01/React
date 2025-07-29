# Write a Python function to find the kth smallest element in a list.
def kth_smallest_el(lst, k):
    lst.sort() 
    # Return the kth smallest element (0-based index, so k-1)
    return lst[k - 1]

# Example usage:
nums = [1, 2, 4, 3, 5, 4, 6, 9, 2, 1]
print("Original list:")
print(nums)
sorted_nums = sorted(nums)
print(f"Sorted list: {sorted_nums}")
k = 3
print(f"kth smallest element when k = {k}: {kth_smallest_el(nums, k)}")