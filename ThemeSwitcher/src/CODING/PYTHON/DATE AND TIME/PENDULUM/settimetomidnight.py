import pendulum
current_datetime = pendulum.now()
midnight_datetime = current_datetime.start_of('day')
print(f"Current datetime: {current_datetime}")
print(f"Date with time set to midnight: {midnight_datetime}")
