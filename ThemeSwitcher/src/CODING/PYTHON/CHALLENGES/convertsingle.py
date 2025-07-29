#  program to add the digits of a positive integer repeatedly until the result has a single digit.
def add_digit(n):
    return (n-1)%9+1  if n>0 else 0
print(add_digit(48))