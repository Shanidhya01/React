import pendulum
import calendar
current_datetime = pendulum.now()
day_of_week = current_datetime.day_of_week
is_weekday = day_of_week >= 1 and day_of_week <= 5
is_weekend = day_of_week ==6 or day_of_week ==7
if is_weekday:
    print("Today is weekday.")
elif is_weekend:
    print("Today is weekend.")
else:
    print("Error in day detection")