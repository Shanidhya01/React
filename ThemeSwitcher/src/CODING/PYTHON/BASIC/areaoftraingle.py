#  python program to find the area of traingle 
# taking user input 
a=int(input(" 1st Side :  "))
b=int(input(" 2nd Side :  "))
c=int(input(" 3rd Side :  "))
#   find semi perimeter 
s = (a+b+c)/2
#calculate the area 
area = (s*(s-a)*(s-b)*(s-c))**0.5
print('The area of the triangle is %0.2f' %area)
