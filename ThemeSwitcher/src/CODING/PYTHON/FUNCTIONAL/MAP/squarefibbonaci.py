# Write a Python program to compute the square of the first N Fibonacci numbers, using the map function and generate a list of the numbers.
def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        a, b = 0, 1
        for _ in range(n - 1):
            a, b = b, a + b
        return b

n = int(input("enter a number : "))
squares = list(map(lambda x: x**2, [fibonacci(i) for i in range(n)]))
print(squares)