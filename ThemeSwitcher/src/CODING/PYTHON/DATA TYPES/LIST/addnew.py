# Add new item to list after a specified item
list1 = []
n = int(input("Enter the number of elements OF LIST 1: "))
for i in range(n):
    ele = input("Enter element {}: ".format(i + 1))
    list1.append(ele)
print("Your list1 is:", list1)
list1.append(6000)
print(list1)