#  Create a Python set such that it shows the element from both lists in a pair
list1 = []
n = int(input("Enter the number of elements OF LIST 1  : "))
for i in range(n):
    ele = int(input("Enter element {}: ".format(i + 1)))
    list1.append(ele)
print("Your list1 is:", list1)
list2 = []
m = int(input("Enter the number of elements OF LIST 2: "))
for i in range(m):
    ele = int(input("Enter element {}: ".format(i + 1)))
    list2.append(ele)
print("Your list is:", list2)
result = zip(list1, list2)  #  zip() function. This function takes two or more iterables (like list1, dict, string), aggregates them in a tuple, and returns it.
print(set(result))