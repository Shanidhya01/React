# program that executes division and handles an ArithmeticError exception if there is an arithmetic error.
def division(dividend, divisor):
    try :
        result = dividend/divisor
        print("RESULT: ",result)
    except ArithmeticError:
        print("Error: Arithmetic Error occured!!!!!!")
a = float(input("ENTER THE DIVIDEND: "))
b = float(input("ENTER THE DIVISOR: "))
division(a,b)