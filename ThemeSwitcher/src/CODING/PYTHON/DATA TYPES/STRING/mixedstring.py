#  Write a program to create a new string s3 made of the first char of s1, then the last char of s2, Next, the second char of s1 and second last char of s2, and so on. Any leftover chars go at the end of the s3.
s1=(input("ENTER 1st STRING :   "))
s2=(input("ENTER 2nd STRING :   "))
l1 = len(s1)
l2 =len(s2)
length = l1 if l1 > l2 else l2
res = " "
s2=s2[::-1]
for i in range(length):
    if i < l1:
        res = res + s1[i]
    if i < l2:
        res = res + s2[i]
print(res)