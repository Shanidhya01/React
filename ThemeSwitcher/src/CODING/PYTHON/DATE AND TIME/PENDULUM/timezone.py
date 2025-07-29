# program to create a Pendulum object for the current date and time 
# in the "Europe/London" timezone using Pendulum module
import pendulum
london_datetime = pendulum.now('Europe/London')
print('Pendulum object for the current date and time in London timezone:',london_datetime)