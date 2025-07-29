# Write a Python program to create an iterator that returns consecutive keys and groups from an iterable.
import itertools as it 
print("Iterate over characters of a string and display\nconsecutive keys and groups from the iterable:")
str1 = 'AAAAJJJJHHHHNWWWEERRRSSSOOIIU'
data_groupby = it.groupby(str1)
for key,group in data_groupby:
    print('key:',key)
    print('group:',list(group))

