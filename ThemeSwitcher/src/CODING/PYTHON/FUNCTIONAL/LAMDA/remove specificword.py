# Write a Python program to remove specific words from a given list using lambda.
def remove_words(list1,remove_words):
    result = list(filter(lambda word:word not in remove_words,list1))
    return result
colors = ['orange','red','green','blue','white','black']    
remove_colors = ['orange','black']
print("Original List:")
print(colors)
print("\nRemove words:" , remove_colors)
print("\nAfter removing the specified words from the said list:")
print(remove_words(colors,remove_colors))