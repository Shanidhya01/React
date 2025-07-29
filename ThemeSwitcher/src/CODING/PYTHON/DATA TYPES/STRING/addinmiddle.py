# Given two strings, s1 and s2. Write a program to create a new string s3 by appending s2 in the middle of s1.
def addmiddle(s1, s2):
    print("Original Strings are", s1, s2)
    mi = int(len(s1) / 2)
    # get character from 0 to the middle index number from s1
    x = s1[:mi]
    # concatenate s2 to it
    x = x + s2
    # append remaining character from s1
    x = x + s1[mi:]
    print("After appending new string in middle:", x)
s1 = input('ENTER 1ST STRING :   ')
s2 = input('ENTER 2ND STRING :   ')
addmiddle(s1,s2)
