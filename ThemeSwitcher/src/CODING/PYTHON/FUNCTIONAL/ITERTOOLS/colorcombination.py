# Write a Python program that will select a specified number of colours from three different colours, and then generate all the combinations with repetitions
from itertools import *
def combinations_colors(l,n):
    return combinations_with_replacement(l,n)
l = ["RED","GREEN","BLUE"]
print("Original List: ",l)
n=1
print("\nn = 1")
print(list(combinations_colors(l, n)))
n=2
print("\nn = 2")
print(list(combinations_colors(l, n)))
n=3
print("\nn = 3")
print(list(combinations_colors(l, n)))