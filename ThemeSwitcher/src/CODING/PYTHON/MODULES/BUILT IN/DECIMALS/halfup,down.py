import decimal
print("Configure the rounding to round to the nearest, with ties going towards 0:")
decimal.getcontext().prec = 1
decimal.getcontext().rounding = decimal.ROUND_HALF_DOWN   #ROUND_HALF_DOWN = nearest with ties going towards zero.
print(decimal.Decimal(10) / decimal.Decimal(4))
print("\nConfigure the rounding to round to the nearest, with ties going away from 0:")
decimal.getcontext().prec = 1
decimal.getcontext().rounding = decimal.ROUND_HALF_UP  #ROUND_HALF_UP =  nearest with ties going away from zero.
print(decimal.Decimal(10) / decimal.Decimal(4))