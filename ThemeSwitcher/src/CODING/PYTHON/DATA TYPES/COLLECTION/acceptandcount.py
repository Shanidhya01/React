# Write a Python program that accepts some words and counts the number of distinct words.
# Print the number of distinct words and the number of occurrences of each distinct word according to their appearance
from collections import Counter, OrderedDict
class OrderedCounter(Counter , OrderedDict):
    pass
word_array = []
n = int(input("ENTER NUMBER OF WORDS: "))
print("ENTER THE WORDS : ")
for i in range(n):
    word_array.append(input().strip())
word_ctr = OrderedCounter(word_array)
print(len(word_ctr))
for word in word_ctr:
    print(word_ctr[word],end = ' ')