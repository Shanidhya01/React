import pendulum
import calendar
current_datetime = pendulum.now()
start_of_week = current_datetime.start_of('week')
end_of_week = current_datetime.end_of('week')
print("Start date of the current week:", start_of_week)
print("End date of the current week:", end_of_week)