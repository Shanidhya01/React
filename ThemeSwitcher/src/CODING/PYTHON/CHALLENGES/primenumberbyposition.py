def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def find_1000th_prime():
    count = 0
    num = 1
    while count < 1000:
        num += 1
        if is_prime(num):
            count += 1
    return num
print(f"The 1000th prime number is {find_1000th_prime()}")
