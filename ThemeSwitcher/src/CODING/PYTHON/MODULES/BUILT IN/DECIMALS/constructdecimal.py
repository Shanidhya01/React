# Construct a Decimal from a float and a Decimal from a string
import decimal
print("Construct a decimal from a float:")
pi_val = decimal.Decimal(3.14159)
print(pi_val)
print(pi_val.as_tuple())
print(pi_val.as_integer_ratio())