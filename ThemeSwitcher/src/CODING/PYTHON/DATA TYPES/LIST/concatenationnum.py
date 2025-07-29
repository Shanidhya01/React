# Concatenate two lists index-wise
list1 = []
n = int(input("Enter the number of elements OF LIST 1 : "))
for i in range(n):
    ele = int(input("Enter element {}: ".format(i + 1)))
    list1.append(ele)
print("Your list1 is:", list1)
list2 = []
n = int(input("Enter the number of elements OF LIST 2: "))
for i in range(n):
    ele = int(input("Enter element {}: ".format(i + 1)))
    list2.append(ele)
print("Your list2 is:", list2)
list3= list1+ list2
print(list3)
