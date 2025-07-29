# Write a Python function that filters out all elements less than or equal than a specified value from a list of numbers using the filter function.
def filterlessthan(nums,threshold):
    def isless(num):
        return num <= threshold
    filterednum = list(filter(isless,nums))
    return filterednum
nums = [20,15,24,37,23,11,7]
print("Original list: ",nums)
threshold = 20
print("\nFilters out all elements less than or equal to a specified value",threshold,":")
result = filterlessthan(nums, threshold)
print(result)