# Find all occurrences of a substring in a given string by ignoring the case
str1 = input('enter a string : ')
sub_string = input('what to find : ')

# convert string to lowercase
temp_str = str1.lower()

# use count function
count = temp_str.count(sub_string.lower())
print("The ",sub_string," count is:", count)
