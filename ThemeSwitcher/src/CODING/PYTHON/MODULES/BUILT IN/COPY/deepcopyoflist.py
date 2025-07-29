import copy
nums_x = [1, [2, 3, 4]]
print("Original list: ", nums_x)
nums_y = copy.deepcopy(nums_x)
print("\nDeep copy of the said list:")
print(nums_y)
print("\nChange the value of an element of the original list:")
nums_x[1][1] = 10
print(nums_x)
print("\nCopy of the second list (Deep copy):")
print(nums_y)