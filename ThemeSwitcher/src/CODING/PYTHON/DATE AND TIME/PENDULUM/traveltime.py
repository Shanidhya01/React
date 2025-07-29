import pendulum
def calculate_travel_time(start_datetime,end_datetime):
    travel_time = start_datetime.diff(end_datetime)
    print(f"Travel time from {start_datetime} to {end_datetime}: {travel_time.in_words()}")

start_datetime_str = "2023-06-01 12:30:00"
end_datetime_str = "2023-06-02 15:45:00"
start_datetime = pendulum.parse(start_datetime_str)
end_datetime = pendulum.parse(end_datetime_str)
calculate_travel_time(start_datetime, end_datetime)