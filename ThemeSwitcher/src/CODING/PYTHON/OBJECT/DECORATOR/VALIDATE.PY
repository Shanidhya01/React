# Write a Python program that implements a decorator  to
# validate function arguments based on a given condition
def validate_argument(condition):
    def decorator (func):
        def wrapper(*args, **kwargs):
            if condition(*args, **kwargs):
                return func(*args, **kwargs)
            else :
                raise ValueError ("INVALID ARGUMENT PASSED TO FUNCTION")
        return wrapper
    return decorator
@validate_argument(lambda x : x>0)
def calculate_cube(x):
    return x**3
print(calculate_cube(5))
print(calculate_cube(-2))