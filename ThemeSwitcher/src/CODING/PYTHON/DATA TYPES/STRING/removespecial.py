# Remove special symbols / punctuation from a string

str = input('ENTER A  STRING :  ')
print("the original string is: ",str)
def remove_punctuation(str):
    result = ""
    for char in str:
        if char.isalpha() or char.isspace():
            result += char
    return result
filtered_string = remove_punctuation(str)
print(filtered_string)
