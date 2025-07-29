# Write a Python program that prompts the user to input a number and handles a KeyboardInterrupt exception if the user cancels the input.
try: 
    n = int(input("INPUT A NUMBER: "))
    print("You entered: ",n)
except KeyboardInterrupt:
    print("Input canceled by the user.")