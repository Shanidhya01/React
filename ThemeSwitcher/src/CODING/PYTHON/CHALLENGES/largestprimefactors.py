def largest_prime_factor(n):
    factor = 2
    # Divide n by 2 until it is odd
    while n % factor == 0:
        n //= factor
    # Check for odd factors starting from 3
    factor = 3
    while n != 1:
        if n % factor == 0:
            n //= factor
        else:
            factor += 2
    return factor

# Test data
number = 13195
print(f"The largest prime factor of {number} is {largest_prime_factor(number)}")
