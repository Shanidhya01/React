#python program to print fibonacci using function
n = int(input(" ENTER THE NUMBER :  "))

def fibo(a):
    if a<=1:
        return a
    else:
        return (fibo(a-1) + fibo(a-2))
if n <= 0:
   print("Plese enter a positive integer")
   n = int(input(" ENTER THE NUMBER :  "))
else:
   print("Fibonacci sequence:")
   for i in range(n):
       print(fibo(i))
