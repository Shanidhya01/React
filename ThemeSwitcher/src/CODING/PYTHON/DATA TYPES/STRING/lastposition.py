# Find the last position of a given substring
str1 = input('ENTER A STRING : ' )
print("Original String is:", str1)
key = input('WHAT TO FIND : ')
index = str1.rfind(key)
print("Last occurrence of ",key," starts at index:", index)