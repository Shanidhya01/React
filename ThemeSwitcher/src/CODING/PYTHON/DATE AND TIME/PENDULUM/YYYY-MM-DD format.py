# program to format the current date and time as "YYYY-MM-DD HH:mm:ss" using Pendulum module.
import pendulum
current_datetime = pendulum.now()
formatted_datetime = current_datetime.format('YYYY-MM-DD HH:mm:ss')
print("Current Date And Time:",formatted_datetime)