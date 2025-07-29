#PYTHON PROGRAM TO FIND SUM OF NATURAL NUMBER
n = int(input('ENTER THE  NUMBER :  '))
if n<0:
    print('ENTER A POSITIVE NUMBER ')
else:
    sum =0
    while n>0:
        sum = n +sum
        n= n-1
    print("the sum is ",sum)