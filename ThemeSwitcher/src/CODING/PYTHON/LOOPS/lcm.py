#python program to find lcm of the number 
n1 = int(input("enter 1st number :  "))
n2 = int(input("enter 2nd number :  "))
if n1 > n2:
       greater = n1
else:
       greater = n2
# for i in range(1,greater+1):
while(True):
       if((greater % n1 == 0) and (greater % n2 == 0)):
           lcm = greater
           break
       greater += 1
print("The L.C.M. of ",n1, "and", n2," is",lcm)