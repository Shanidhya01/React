#python program to find hcf of the  number 
n1 = int(input("enter 1st number :  "))
n2 = int(input("enter 2nd number :  "))
if n1>n2:
    smaller = n1
else:
    smaller = n2
for i in range(1,smaller+1):
    if(n1%i==0) and (n2%i==0):
        hcf = i

print("The H.C.F. of ",n1, "and", n2," is", hcf)
