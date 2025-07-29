# Add a week (7 days) and 12 hours to a given date
from datetime import datetime,timedelta
date = datetime(2020, 3, 22, 10, 0, 0)
print("Given date")
print(date)
days_to_subtract = 7
res_date = date + timedelta(days=days_to_subtract)
print("New Date")
print(res_date)
