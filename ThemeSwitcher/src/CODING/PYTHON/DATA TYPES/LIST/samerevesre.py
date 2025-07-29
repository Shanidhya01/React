# Given a two Python list. Write a program to iterate both lists simneously and display items from list1 in original order and items from list2 in reverse order.
list1 = []
n = int(input("Enter the number of elements OF LIST 1: "))
for i in range(n):
    ele = input("Enter element {}: ".format(i + 1))
    list1.append(ele)
print("Your list1 is:", list1)
list2 = []
n = int(input("Enter the number of elements OF LIST 2: "))
for i in range(n):
    ele = input("Enter element {}: ".format(i + 1))
    list2.append(ele)
print("Your list2  is:", list2)
for x , y in zip(list1,list2[::-1]):
    print(x,  y)