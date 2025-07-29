#  program to compute the sum of digits of each number in a given list of positive integers.
from itertools import *
def sum_of_digits(nums):
    return sum(int(y) for y in (chain(*[str(x) for x in nums])))
nums = [10,2,56]
print("Original Tuple: ",nums)
print("Sum of digits of each number of the said list of integers:")
print(sum_of_digits(nums))