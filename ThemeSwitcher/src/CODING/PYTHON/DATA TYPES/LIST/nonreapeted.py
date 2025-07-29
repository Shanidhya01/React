# Define a function to find the first non-repeated element in a list
def first_non_repeated_el(lst):
    ctr = {}
    for i in lst:
        # If the element is already in the dictionary, increment its count
        if i in ctr:
            ctr[i] += 1
        else:
            ctr[i] = 1
    # Iterate through the elements in the list again
    for i in lst:
        # Find the first element with a count of 1 (non-repeated)
        if ctr[i] == 1:
            return i
    # If no non-repeated element is found, return None
nums =  [1, 2, 3, 4, 5, 6, 7, 8]
print("Original list:")
print(nums)
result = first_non_repeated_el(nums)
print("First non-repeated element in the said list:")
print(result)