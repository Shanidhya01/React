#python program to check prime number 
n = int(input("enter the number :  "))
flag = False
if n==1:
    print(n,"NUMBER IS NOT PRIME ")
elif n>1:
    for i in range(2,n):
        if(n%i)==0:
            flag = True
            break
    
    if flag:
      print(n," IS NOT PRIME ")
    else:
     print(n," IS  PRIME ")


