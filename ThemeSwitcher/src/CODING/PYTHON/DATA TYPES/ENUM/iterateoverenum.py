# Write a Python program that iterates over an enum class and displays each member and their value.
from enum import *
class Country(Enum):
    Afghanistan = 93
    Albania = 355
    Algeria = 213
    Andorra = 376
    Angola = 244
    Antarctica = 672
for data in Country:
    print('{} = {}'.format(data.name,data.value))
