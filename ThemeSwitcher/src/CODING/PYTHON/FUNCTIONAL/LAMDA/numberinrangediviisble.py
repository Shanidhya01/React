def divisible_by_digits(start_num, end_num):
    return  [
        n for n in range(start_num, end_num + 1)
        if not any(map(lambda x: int(x) == 0 or n % int(x) != 0, str(n)))
    ]
result = divisible_by_digits(1, 22)
print("Numbers within the range [1, 22] divisible by every digit they contain:")
print(result)