# Write a program to split a given string on hyphens and display each substring.Write a program to split a given string on hyphens and display each substring.
str = input('enter a string : ')
print('the original string is : ',str)

#split string
sub_string =  str.split(' ')

# printing splited string 

#for printing in tuple form
print(' the sub strings are : \n',sub_string)
#for printing in simple way
for i in sub_string:
    print(i)