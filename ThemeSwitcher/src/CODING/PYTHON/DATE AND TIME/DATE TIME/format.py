# Print a date in a the following format
# Day_name  Day_number  Month_name  Year
from datetime import datetime
given = datetime(2020,2,25)
print(" GIVEN DATE IS : ")
print(given.strftime('%A %d %B %Y'))