# Write a Python program to listify the list of given strings individually using Python map
color = ['Red','Blue','Black','White','Pink']
print("Original list:")
print(color)
print("\nAfter listify the list of strings are:")
result = (map(list,color ))
print(list(result))