# Write a Python program to sort a given mixed list of integers and strings using lambda. Numbers must be sorted before strings.
def sort_mixed_list(mixed_list):
    mixed_list.sort(key=lambda el: (isinstance(el, str), el))
    return mixed_list
mixed_list = [19, 'red', 12, 'green', 'blue', 10, 'white', 'green', 1]
print("Original list:")
print(mixed_list)
print("\nSort the said mixed list of integers and strings:")
print(sort_mixed_list(mixed_list))