# Write a Python program to convert all the characters into uppercase and lowercase and eliminate duplicate letters from a given sequence. Use the map() function
def change_cases(s):
    return str(s).upper(),str(s).lower()
chars =  {'a', 'b', 'E', 'f', 'a', 'i', 'o', 'U', 'a'}
print("Original list: ",chars)
result =  list(map(change_cases,chars))
print("\nAfter converting above characters in upper and lower cases\nand eliminating duplicate letters:")
print(result)