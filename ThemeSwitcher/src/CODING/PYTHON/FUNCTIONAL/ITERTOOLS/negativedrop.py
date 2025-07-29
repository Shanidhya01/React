# Write a Python program to make an iterator that drops elements from the iterable 
# as long as the elements are negative; afterwards, it returns every element.
import itertools as it
def drop_(nums):
    return it.takewhile(lambda x:x<0,nums)
nums = [-1,-2,-3,4,-10,2,0,5,12]
print("Original List: ",nums)
result = drop_(nums)
print("Drop elements from the said list as long as elements are negative\n",list(result))