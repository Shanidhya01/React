# Configure the rounding to round up and round down a given decimal value
import decimal
print("Configure the rounding to round up:")
decimal.getcontext().prec = 1
decimal.getcontext().rounding =decimal.ROUND_UP  # round.up = away from zero
print(decimal.Decimal(30)/decimal.Decimal(4))
print("\nConfigure the rounding to round down:")
decimal.getcontext().prec = 3
decimal.getcontext().rounding = decimal.ROUND_DOWN  # round_down = toward zero
print(decimal.Decimal(30) / decimal.Decimal(4))
print("\nConfigure the rounding to round up:")
print(decimal.Decimal('8.325').quantize(decimal.Decimal('.01'), rounding=decimal.ROUND_UP))
print("\nConfigure the rounding to round down:")
print(decimal.Decimal('8.325').quantize(decimal.Decimal('.01'), rounding=decimal.ROUND_DOWN))