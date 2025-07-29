# Write a Python program that implements a decorator
# to cache the result of a function.
def cache_reuslt(func):
    cache = {}
    def wrapper(*args, **kwargs):
        key = (*args,*kwargs.items())
        if key in cache:
            print("RETERIVING RESULT FROM CACHE .....")
            return cache[key]
        result = func(*args, **kwargs)
        cache[key] = result
        return result
    return wrapper
@cache_reuslt
def calculate_multiply(x,y):
    print("CALCULATING THE PRODUCT OF TWO NUMBERS.....")
    return x * y
print(calculate_multiply(4, 5))
print(calculate_multiply(4, 5))  
print(calculate_multiply(5, 7))  
print(calculate_multiply(-3, 7))        