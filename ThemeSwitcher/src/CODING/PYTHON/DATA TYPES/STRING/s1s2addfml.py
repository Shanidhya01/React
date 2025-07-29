# Given two strings, s1 and s2, write a program to return a new string made of s1 and s2’s first, middle, and last characters.
s1=(input("ENTER 1st STRING :   "))
s2=(input("ENTER 2nd STRING :   "))
res = s1[0]
res=res+s2[0]
l1 = len(s1)
l2 =len(s2)
mid1 = int(l1/2)
mid2= int(l2/2)
res = res + s1[mid1]
res = res + s2[mid2]
res = res + s1[l1-1]
res = res + s2[l2-1]
print(res)