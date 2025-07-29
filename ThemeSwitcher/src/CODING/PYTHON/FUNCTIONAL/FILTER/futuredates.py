# Write a Python program that implements a Python program that filters out dates (in the format "YYYY-MM-DD") that are in the future using the filter function.
from datetime import datetime
date_strings = ["2023-07-11", "2022-02-22", "2024-05-11", "2025-12-31", "2021-01-01"]
print("List of dates:")
print(date_strings)
dates = [datetime.strptime(date, "%Y-%m-%d") for date in date_strings]
current_date = datetime.now()
print("Current date:",current_date)
def is_date_in_future(date):
    return date > current_date
dates_in_past = list(filter(is_date_in_future, dates))
filtered_date_strings = [date.strftime("%Y-%m-%d") for date in dates_in_past]
print("\nCheck if a date is in the future!")
print(filtered_date_strings)