# program to find the difference in days between two arbitrary dates using Pendulum module
import pendulum
date_str1 = "2018-03-15"
date_str2 = "2018-04-20"
date1 = pendulum.parse(date_str1)   #parse is used to convert date time to standard foemat yyyy-mm-dd hh:mm:ss
date2 = pendulum.parse(date_str2)
days_difference = date2.diff(date1).in_days()
print(f"Difference in days between {date_str1} and {date_str2}: {days_difference} days")