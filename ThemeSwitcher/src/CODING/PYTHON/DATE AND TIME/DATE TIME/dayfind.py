#  Find the day of the week of a given date
# from datetime import datetime
# date = datetime(2020, 7, 26)

# #to get week day  as integer 
# print(date.weekday())
# #to get week day in english
# print(date.strftime('%A'))


import calendar
from datetime import datetime
date = datetime(2020, 7, 26)
weekday = calendar.day_name[date.weekday()]
print(weekday)