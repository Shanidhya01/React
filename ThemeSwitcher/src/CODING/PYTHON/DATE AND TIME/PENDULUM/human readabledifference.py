# Python program to find the human-readable difference between two arbitrary 
# dates (e.g., "2 weeks and 3 days ago") using Pendulum module
import pendulum
date_str1 = "2019-03-15"
date_str2 = "2019-04-22"
date1 = pendulum.parse(date_str1)
date2 = pendulum.parse(date_str2)
human_readable_difference = date2.diff_for_humans(date1,absolute=True)
print(f"Difference between {date_str1} and {date_str2} : {human_readable_difference}")