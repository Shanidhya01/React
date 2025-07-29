import pendulum
interval1_start = "2020-03-15T08:00:00"
interval1_end = "2020-03-15T12:00:00"

interval2_start = "2020-03-15T10:30:00"
interval2_end = "2020-03-15T14:00:00"
interval1_start_time = pendulum.parse(interval1_start)
interval1_end_time = pendulum.parse(interval1_end)
interval2_start_time = pendulum.parse(interval2_start)
interval2_end_time = pendulum.parse(interval2_end)

overlap_start = max(interval1_start_time,interval2_start_time)
overlap_end = min(interval1_end_time,interval2_end_time)

if overlap_start <= overlap_end:
    print(f"There is an overlapping period from {overlap_start} to {overlap_end}.")
else:
    print("There is no overlapping period.")