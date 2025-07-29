# Write a Python program to find the most common elements and their counts in a specified text.
from collections import Counter
s = 'LKSCROPEWDSSAFSDFFKWPE'
print("Original string: "+s)
print("Most common character of the string: ")
print(Counter(s).most_common(5))