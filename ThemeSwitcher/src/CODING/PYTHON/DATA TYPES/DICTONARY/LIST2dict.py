# Convert two lists into a dictionary
list1= []
n = int(input('enter the number of element in list 1: '))
for i in range(n):
    ele = input("enter element {}: ".format(i+1))
    list1.append(ele)
print(" list 1 is : ",list1)
list2= []
m = int(input('enter the number of element in list 2: '))
for i in range(m):
    ele = input("enter element {}: ".format(i+1))
    list2.append(ele)
print(" list 1 is : ",list2)
res_dict = dict(zip(list1,list2))
print(res_dict)