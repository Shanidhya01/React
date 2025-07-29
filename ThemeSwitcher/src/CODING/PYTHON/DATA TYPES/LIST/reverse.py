# Reverse a list in Python
import reverse
list = []
n = int(input("Enter the number of elements OF LIST : "))
for i in range(n):
    ele = int(input("Enter element {}: ".format(i + 1)))
    list.append(ele)
print("Your list is:", list)
# list.reverse()
list =  list[::-1]
print(list)

