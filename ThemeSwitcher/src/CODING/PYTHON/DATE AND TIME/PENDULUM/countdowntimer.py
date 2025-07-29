import pendulum
import time
def countdowkn_timer(end_datetime):
    current_datetime = pendulum.now()
    remaining_time = end_datetime.diff(current_datetime)
    while remaining_time.total_seconds() >0:
        print(f"Remaining time: {remaining_time.total_seconds()} seconds\n", end='\r')
        time.sleep(1)
        current_datetime = pendulum.now()
        remaining_time = end_datetime.diff(current_datetime)
    print("\nCountdown reached zero!")
end_datetime_str = "2023-12-31 23:59:59"
end_datetime = pendulum.parse(end_datetime_str)
countdown_timer(end_datetime)