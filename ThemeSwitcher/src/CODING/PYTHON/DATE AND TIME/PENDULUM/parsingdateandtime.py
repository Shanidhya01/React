# program to parse the string "2019-02-01 15:45:00" into a Pendulum object using Pendulum module.
import pendulum
date_time_str = "2019-02-01 15:45:00"
parsed_datetime = pendulum.parse(date_time_str)
print("Parsed Pendulum Object: ",parsed_datetime)