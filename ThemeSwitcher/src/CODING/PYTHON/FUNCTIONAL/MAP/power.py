#  Write a Python program to create a list containing the power of said number in bases raised to the corresponding number in the index using Python map.
base = [10,20,30,40,50,60,70,80,90,100]
index = [1,2,3,4,5,6,7,8,9,10]
print("Base number and index: ")
print(base)
print(index)
result = map(pow ,base,index )
print(list(result))