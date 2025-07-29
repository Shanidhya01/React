# Write a program to create a new string made of an input string’s first, middle, and last character.
str=(input("ENTER THE STRING :   "))
res = str[0]
l = len(str)
mid = int(l/2)
res = res + str[mid]
res = res + str[l-1]
print(res)