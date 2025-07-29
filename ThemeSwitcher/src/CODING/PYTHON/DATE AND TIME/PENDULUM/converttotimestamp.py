import pendulum
current_datetime = pendulum.now()
unix_timestamp = current_datetime.timestamp()
print("Unix timestamp for the currnt date and time:",unix_timestamp)