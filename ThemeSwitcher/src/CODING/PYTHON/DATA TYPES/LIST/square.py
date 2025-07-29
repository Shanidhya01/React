# Given a list of numbers. write a program to turn every item of a list into its square
list = []
n = int(input("Enter the number of elements OF LIST : "))
for i in range(n):
    ele = int(input("Enter element {}: ".format(i + 1)))
    list.append(ele)
print("Your list is:", list)
res = []
for i in list:
    res.append(i*i)
print(res)