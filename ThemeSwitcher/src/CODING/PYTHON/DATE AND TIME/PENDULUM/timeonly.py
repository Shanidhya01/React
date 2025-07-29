import pendulum
current_datetime = pendulum.now()
time_part = current_datetime.format('HH:mm:ss')
print("The time part from the current date and time :",time_part)