# Write a Python program to generate the maximum and minimum values of the elements of an iterable.
from itertools import *
def running_max(el):
    return accumulate(el,max)
def running_min(el):
    return accumulate(el,min)
result1 = running_max([1,3,2,7,9,8,10,11,12,14,11,12,7])
result2 = running_min([58,26,16,3,1,11,12,0,7])
print("Running maximum value of a list:")
for i in result1:
    print(i)
print("Running minimum value of a list:")
for i in result2:
    print(i)