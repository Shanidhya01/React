# Python program to add 3 hours and 30 minutes to the current date and time, then subtract 1 day using Pendulum module.
import pendulum
current_datetime = pendulum.now()
new_datetime = current_datetime.add(hours=3,minutes=30)
result_datetime = new_datetime.subtract(days=1)
print("Current Date and Time:", current_datetime)
print("After adding 3 hours and 30 minutes:", new_datetime)
print("After subtracting 1 day:", result_datetime)