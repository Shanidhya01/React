# Concatenate two lists in the following order
list1 = []
n = int(input("Enter the number of elements OF LIST 1 : "))
for i in range(n):
    ele = input("Enter element {}: ".format(i + 1))
    list1.append(ele)
print("Your list 1 is:", list1)
list2 = []
m = int(input("Enter the number of elements OF LIST2 : "))
for i in range(m):
    ele = input("Enter element {}: ".format(i + 1))
    list2.append(ele)
print("Your list2 is:", list2)
res = [ x + y for x in list1 for y in list2]
print (res)