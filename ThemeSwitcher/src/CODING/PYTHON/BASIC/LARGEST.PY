# Python Program to Find the Largest Among Three Numbers
a=int(input(" 1st NUMBER :  "))
b=int(input(" 2nd NUMBER :  "))
c=int(input(" 3rd NUMBER :  "))
if(a>b) and (a>c):
    print(a,' is the largest number ')
elif(b>c):
    print(b,' is the largest number ')
else:
    print( c ,' is the largest number ')
