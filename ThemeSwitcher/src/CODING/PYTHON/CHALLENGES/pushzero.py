def move_zero(n):
    a = [0 for i in range(n.count(0))]
    x = [ i for i in n  if i !=0]
    x.extend(a)
    return(x)
print(move_zero([0,2,3,4,56,8,1,0,10]))