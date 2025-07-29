import csv
data = csv.DictReader(open("department.csv"))
print("CSV file as a dictonary: \n")
for row in data:
    print(row)