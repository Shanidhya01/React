#  Calculate number of days between two given dates
from datetime import datetime
# 2020-02-25
date1 = datetime(2020, 2, 25)

# 2020-09-17
date2 = datetime(2020, 9, 17)
delta = None
if date1> date2:
    delta= date1-date2
else:
    delta = date2-date1
print("difference is : ",delta.days,"DAYS")