# Write a Python program that creates a list of names and uses the filter function to extract names that start with a vowel (A, E, I, O, U).
names = ["Elita", "Vitold", "Audovacar", "Kerensa", "Ramana", "Iolanda", "Landyn"]
print("Original list of names:")
print(names)
def startwithvowel(name):
    return name[0].lower() in ['a','e','i','o','u']
vowelnames = list(filter(startwithvowel,names))
print("\nExtract names starting with vowels:")
print(vowelnames)