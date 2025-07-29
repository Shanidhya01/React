# Write a Python program that uses the filter function to extract all uppercase letters from a list of mixed-case strings.
mixed = ['Hello','w3resource','Python','Filter','Learning']
print("Original list of string: ",mixed)
uppercase = list(filter(lambda char : char.isupper(),' '.join(mixed)))
print("\nExtract all uppercase letters from the said list of mixed-case strings:")
print(uppercase)