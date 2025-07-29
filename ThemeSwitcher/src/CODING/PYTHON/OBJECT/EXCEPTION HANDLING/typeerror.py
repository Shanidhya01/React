# Handling TypeError Exception in Python numeric input program
def get_numeric_input(prompt):
     while True:
        try:
            value = float(input(prompt))
            return value
        except ValueError:
            print("Error: Invalid input. Please Input a valid number.")
            
n1 = get_numeric_input("INPUT 1st NUMBER: ")
n2 = get_numeric_input("ENTER 2nd NUMBER: ")
result = n1*n2
print("Product of the said two numbers:", result)