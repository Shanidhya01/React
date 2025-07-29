# Removal all characters from a string except integers

str = input('ENTER A  STRING :  ')
print("the original string is: ",str)
def remove_punctuation(str):
    result = ""
    for char in str:
        if char.isdigit() :
            result += char
    return result
filtered_string = remove_punctuation(str)
print(filtered_string)
