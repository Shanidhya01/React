# Program to check Armstrong numbers in a certain interval

n1 = int(input('ENTER THE 1ST NUMBER :  '))
n2 = int(input('ENTER THE 2ND NUMBER :  '))

for num in range(n1,n2 + 1):

   # order of number
   order = len(str(num))
   sum = 0

   temp = num
   while temp > 0:
       digit = temp % 10
       sum += digit ** order
       temp //= 10

   if num == sum:
       print(num)
