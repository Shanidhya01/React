# Handling ValueError Exception in Python integer input program
def get_integers(prompt):
    try:
        value = int(input(prompt))
        return value
    except ValueError:
        print("Error: Invalid input,input a valid integers")
n = get_integers("ENTER A  NUMBERS: ")
print("INPUT VALUE: ",n)    