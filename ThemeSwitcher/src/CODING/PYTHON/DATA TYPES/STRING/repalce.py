# Replace each special symbol with # in the following string
import string
str1 = input('ENTER A STRING : ')
# str1 = '/*Jon is @developer & musician!!'
print("The original string is : ", str1)

# string.punctuation to get the list of all special symbols
for char in string.punctuation:
    str1 = str1.replace(char, '#')

print("The strings after replacement : ", str1)
