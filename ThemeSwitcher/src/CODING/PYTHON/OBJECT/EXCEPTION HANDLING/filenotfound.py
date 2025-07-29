# Handling FileNotFoundError Exception in Python File Handling Program
def open_file(filename):
    try:
        file = open(filename,'r')
        contents = file.read()
        print("File Content : ")
        print(contents)
        file.close()
    except FileNotFoundError:
        print("ERROR : FILE NOT FOUND")
filename = input("INPUT A FILE NAME: ")
open_file(filename)