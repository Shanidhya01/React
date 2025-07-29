# Write a program to remove the item present at index 4 and add it to the 2nd position and at the end of the list.
list = []
n = int(input("Enter the number of elements OF LIST : "))
for i in range(n):
    ele = int(input("Enter element {}: ".format(i + 1)))
    list.append(ele)
print("Your list is:", list)
element = list.pop(4)  #pop(index): Removes and returns the item at the given index from the list.
print("List After removing element at index 4 ", list)  
list.insert(2,element)         #insert(index, item): Add the item at the specified position(index) in the list
print("List After adding element at index 2 ", list)
list.append(element)            #append(item): Add item at the end of the list.
print("List After adding element at last ", list)