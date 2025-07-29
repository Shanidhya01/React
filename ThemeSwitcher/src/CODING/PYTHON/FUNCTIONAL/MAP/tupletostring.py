# Write a Python program to convert a given list of tuples to a list of strings using the map function.
def tuples_to_string(lst):
    return list(map(' '.join,lst))
colors = [('red', 'pink'), ('white', 'black'), ('orange', 'green')]
print("Original List Of tuples: ",colors)
print("Convert the said list of tuples to a list of strings:")
print(tuples_to_string(colors))