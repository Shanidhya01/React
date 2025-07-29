import time
import datetime
print("Current Date And Time: ",datetime.datetime.now())
print("Current Year: ",datetime.date.today().strftime("%Y"))
print("Current Month: ",datetime.date.today().strftime("%B"))
print("Week Number Of The Year: ",datetime.date.today().strftime("%W"))
print("Weekday of the week: ", datetime.date.today().strftime("%w"))
print("Day of year: ", datetime.date.today().strftime("%j"))
print("Day of the month : ", datetime.date.today().strftime("%d"))
print("Day of week: ", datetime.date.today().strftime("%A")) 