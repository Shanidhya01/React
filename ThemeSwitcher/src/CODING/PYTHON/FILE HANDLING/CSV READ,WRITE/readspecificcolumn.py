# program to read specific columns of a given CSV file and print the content of the columns.
import csv
with open('department.csv',newline='') as csvfile:
    data = csv.DictReader(csvfile)
    print("ID Department Name")
    print("----------------------------------")
    for row in data :
        print(row['department_id'],row['department_name'])