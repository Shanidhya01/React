# Write a program to iterate a given list and count the occurrence of each element and create a dictionary to show the count of each element.
list1 = []
n = int(input("Enter the number of elements OF LIST : "))
for i in range(n):
    ele = int(input("Enter element {}: ".format(i + 1)))
    list1.append(ele)
print("Your list is:", list1)
count_dict = dict()
for item in list1:
    if item in count_dict:
        count_dict[item] += 1
    else:
        count_dict[item] = 1

print("Printing count of each item  ", count_dict)
