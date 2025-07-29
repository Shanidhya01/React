# Write a Python function to find the kth largest element in a list
def kth_largest_el(lst, k):
    # Sort the list in ascending order
    lst.sort(reverse=True)
    # Return the kth largest element (0-based index, so k-1)
    return lst[k - 1]

# Example usage:
nums = [1, 2, 4, 3, 5, 4, 6, 9, 2, 1]
print("Original list:")
print(nums)
sorted_nums = sorted(nums)
print(f"Sorted list: {sorted_nums}")
k = int(input("enter a elemen k :"))
# k = 3
print(f"kth largest element when k = {k}: {kth_largest_el(nums, k)}")
