# Write a Python program to convert a given list of strings into a list of lists using the map function
def string_to_list(str):
    result = map(list,str)
    return list(result)
colors = ["Red", "Green", "Black", "Orange"]
print("Original List Of String: ",colors)
print("Convert the said list of strings into list of lists:")
print(string_to_list(colors))