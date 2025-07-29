# Write a Python program to find the maximum difference between pairs in a given list.
from itertools import *
from heapq import *
def test(lst):
    result = nlargest(1,combinations(lst,2),key=lambda sub : abs(sub[0]-sub[1]))
    return result
marks = [32,14,90,10,22,42,31]
print("Original List: ",marks)
print("\nFind maximum difference pair of the said list:")
print(test(marks))
