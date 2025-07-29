#python program to print fibonacci using function
n = int(input(" ENTER THE NUMBER :  "))

def sum(a):
    if a<=1:
        return a
    else:
        return sum(a-1)+a
if n < 0:
   print("Plese enter a positive integer")
   n = int(input(" ENTER THE NUMBER :  "))
else:
   print("SUM:",sum(n))
