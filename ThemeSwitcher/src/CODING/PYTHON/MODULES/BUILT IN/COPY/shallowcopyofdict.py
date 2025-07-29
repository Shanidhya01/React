import copy
nums_x = {"a":1, "b":2, 'cc':{"c":3}}
print("Original dictionary: ", nums_x)
nums_y = copy.copy(nums_x)
print("\nCopy of the said list:")
print(nums_y)
print("\nChange the value of an element of the original dictionary:")
nums_x["cc"]["c"] = 10
print(nums_x)
print("\nSecond dictionary:")
print(nums_y)