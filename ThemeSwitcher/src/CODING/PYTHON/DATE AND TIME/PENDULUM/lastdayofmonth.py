import pendulum
import calendar
current_month = pendulum.now()
last_day_of_month = current_month.end_of('month')
print("First day of current month : ",last_day_of_month)