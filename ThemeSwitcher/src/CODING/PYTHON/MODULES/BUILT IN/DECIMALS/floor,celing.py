import decimal
print("Configure the rounding to round to the floor:") 
decimal.getcontext().prec = 4
decimal.getcontext().rounding = decimal.ROUND_FLOOR      # floor = -infinity
print(decimal.Decimal(20)/decimal.Decimal(6))
print("Configure the rounding to round to the ceiling:") 
decimal.getcontext().prec = 4
decimal.getcontext().rounding = decimal.ROUND_CEILING      # ceiling = infinity
print(decimal.Decimal(20)/decimal.Decimal(6))