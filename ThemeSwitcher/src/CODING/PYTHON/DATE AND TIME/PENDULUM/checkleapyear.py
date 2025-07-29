import pendulum
import calendar
current_year = pendulum.now().year
is_leap_year = calendar.isleap(current_year)
if is_leap_year:
    print(f"{current_year} is a leap year")
else:
    print(f"{current_year} is not a leap year")