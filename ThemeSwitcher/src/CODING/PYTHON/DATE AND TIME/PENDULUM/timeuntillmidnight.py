import pendulum
current_datetime = pendulum.now()
time_until_midnight = current_datetime.end_of('day').diff(current_datetime)
print(f"Time until midnight: {time_until_midnight.in_words()}")