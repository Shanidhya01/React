#  program that chooses a specified number of colors from three different colors and generates unique combinations
from itertools import *
def unique_combination(list_data,n):
    return ["  and  " .join(items) for items in combinations(list_data,n)]
color = ["RED","green","blue"]
print("Original LISt: ",color)
n =1
print("\n n=1")
print(list(unique_combination(color,n)))
n =2
print("\n n=2")
print(list(unique_combination(color,n)))
n =3
print("\n n=3")
print(list(unique_combination(color,n)))