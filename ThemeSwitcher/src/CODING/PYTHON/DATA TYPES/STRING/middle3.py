# Write a program to create a new string made of the middle three characters of an input string.
def getmiddle(str):
    print("Original String is", str)
    mi = int(len(str) / 2)
    res = str[mi - 1:mi + 2]
    print("Middle three chars are:", res)
str =(input("ENTER THE STRING :  "))
getmiddle(str)