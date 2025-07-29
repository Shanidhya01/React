# Write a Python program to find the numbers in a given string and store
# them in a list. Afterward, display the numbers that are longer than  the length
# of the list in sorted form. Use the lambda function to solve the problem.
str1 = "sdf 23 safs8 5 sdfsd8 sdfs 56 21sfs 20 5"
print("Original string: ", str1)
str_num = [i for i in str1.split(' ')]
print(str_num)
lenght = len(str_num)
numbers = sorted([int(x) for x in str_num if x.isdigit()])
print(lenght)
print('Numbers in sorted form:')
for i in (filter(lambda x: x > lenght, numbers)):
    print(i, end=' ') 
