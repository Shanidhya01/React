# ou have given a Python list. Write a program to find value 20 in the list, and if it is present, replace it with 200. Only update the first occurrence of an item.
list1 = []
n = int(input("Enter the number of elements OF LIST 1: "))
for i in range(n):
    ele = input("Enter element {}: ".format(i + 1))
    list1.append(ele)
print("Your list1 is:", list1)
m = input('enter the number you want to replace : ')
p = input('enter the new  number you want to add : ')
# get the first occurrence index
index = list1.index(m)

# update item present at location
list1[index] = p
print(list1)