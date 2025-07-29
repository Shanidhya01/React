# Write a Python program to read a given string character by character and compress repeated characters by storing the length of those characte
from itertools import *
def encode_str(input_str):
    return [(len(list(n)),m) for m,n in groupby(input_str)]
str1 = "AAASSSSKKIOOOORRRREEETTTTAAAABBBBBBDDDDD"
print("Original String:",str1)
print("Result:",encode_str(str1))