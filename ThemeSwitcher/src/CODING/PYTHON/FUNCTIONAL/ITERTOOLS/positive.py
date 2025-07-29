# Make an iterator that drops elements from the iterable as soon as a condition is true
import itertools as it
def drop_positive(nums):
    return it.dropwhile(lambda x:x<0,nums)
nums = [-1,-2,-3,4,-10,2,0,5,12]
print("Original List: ",nums)
result = drop_positive(nums)
print("Drop elements from the iterable when a positive number arises\n",list(result))