# Write a Python program that generates the running product of elements in an iterable.
from itertools import *
import operator
def running_product(it):
    return accumulate(it,operator.mul)
result = running_product([1,2,3,4,5,6,7])
print("Running product of a list:")
for i in result:
    print(i)