#  PYTHON PROGRAM TO SOLVE QUAD EQN
import cmath


a=int(input(" enter the 1st(a)positive variable of quad eqn  :  "))
b=int(input(" enter the 2nd(b)positive variable of quad eqn  :  "))
c=int(input(" enter the 3rd(c)positive variable of quad eqn  :  "))
 # calcuklating discriminnat
d = ((b *b)-4*a*c)
#Find the solution
sol1 = (-b + cmath.sqrt(d))/2*a
sol2 = (-b - cmath.sqrt(d))/2*a

print("THE SOLUTION OF QUADREATIC EQUATION ARE  :  ",sol1,sol2)