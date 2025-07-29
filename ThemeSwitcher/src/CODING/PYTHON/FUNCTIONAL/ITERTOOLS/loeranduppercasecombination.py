# Write a Python program to find all lower and upper mixed case combinations of a given string.
import itertools
def combination(str1):
    result = map(' '.join,itertools.product(*((c.lower(),c.upper()) for c in str1)))
    return list(result)
st = "abc"
print("Original String:",st)
print("\nAll lower and upper mixed case combinations of the said string:")
print(combination(st))