list1 = []
n = int(input("Enter the number of elements OF LIST 1: "))
for i in range(n):
    ele = int(input("Enter element {}: ".format(i + 1)))
    list1.append(ele)
print("Your list is:", list1)
list2 = []
m = int(input("Enter the number of elements OF LIST 2: "))
for i in range(m):
    ele = int(input("Enter element {}: ".format(i + 1)))
    list2.append(ele)
print("Your list is:", list2)
res = list()
odd_elements = list1[1::2]
print("Element at odd-index positions from list one")
print(odd_elements)
even_elements = list2[0::2]
print("Element at even-index positions from list two")
print(even_elements)
print("Printing Final third list")
res.extend(odd_elements)
res.extend(even_elements)
print(res)
