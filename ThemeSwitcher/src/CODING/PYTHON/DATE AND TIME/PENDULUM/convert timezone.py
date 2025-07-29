# Python program to convert the current date and time from
# "UTC" to "America/New_York" timezone using Pendulum module
import pendulum
utc_datetime = pendulum.now('UTC')
ny_datetime = utc_datetime.in_tz('America/New_York')
print("Converted date and time to America/New_York timezone",ny_datetime)