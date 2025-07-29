import math
def ispower(n,base):
    if base == 1 and n!=1:
        return False
    if base ==1 and n==1:
        return True
    if base ==0 and n!=1:
        return False
    power = int (math.log(n,base) + 0.5)
    return base ** power == n
print(ispower(127,2))
print(ispower(128,2))