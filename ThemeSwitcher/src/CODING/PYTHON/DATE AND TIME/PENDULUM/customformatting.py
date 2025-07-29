import pendulum
current_datetime = pendulum.now()
custom_format = "DD/MM/YYYY  HH:mm:ss  A"
formatted_datetime = current_datetime.format(custom_format)
print("Formatted date and time using custom format:", formatted_datetime)