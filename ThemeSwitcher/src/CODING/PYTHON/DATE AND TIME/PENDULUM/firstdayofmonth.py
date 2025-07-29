import pendulum
import calendar
current_month = pendulum.now()
first_day_of_month = current_month.start_of('month')
print("First day of current month : ",first_day_of_month)