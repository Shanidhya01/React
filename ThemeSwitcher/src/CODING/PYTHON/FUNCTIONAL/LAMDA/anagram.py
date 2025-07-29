# Write a Python program to find all anagrams of a string in a given list of strings using Lambda.
from collections import Counter
texts = ["bcda", "abce", "cbda", "cbea", "adcb"]
str = "abcd"
print("Original list of string: ")
print(texts)
result = list(filter(lambda x:(Counter(str) == Counter(x)),texts))
print("\nAnagrams of 'abcd' in the above string: ")
print(result)