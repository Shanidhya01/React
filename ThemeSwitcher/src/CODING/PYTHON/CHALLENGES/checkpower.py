def ispower(x,y):
        while(x % y == 0):
            x = x/y
        return x==1
print(ispower(9,3))
print(ispower(81,3))
print(ispower(16,4))