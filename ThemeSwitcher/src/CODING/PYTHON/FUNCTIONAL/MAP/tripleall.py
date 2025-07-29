#  Write a Python program to triple all numbers in a given list of integers
num = [1,2,3,4,5,6]
print("Original List: ",num)
triple = map(lambda x : x*3,num)
print("\n after tripling all numbers: ")
print(list(triple))