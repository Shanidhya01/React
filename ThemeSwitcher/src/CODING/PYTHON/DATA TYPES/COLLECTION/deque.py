# Write a Python program to create a new deque with three items and iterate over the deque's elements.
from collections import deque
dq = deque('aeiou')
for element in dq:
   print(element)