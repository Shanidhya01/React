# Write a Python program that implements a decorator to handle 
# exceptions raised by a function and provide a default response.
def handle_exceptions(default_respose):
    def decorator(func):
        def wrapper(*args, **kwargs):
            try :
                return func(*args, **kwargs)
            except Exception as e:
                print(f"Exception occurred: {e}")
                return default_respose
        return wrapper
    return decorator

@handle_exceptions(default_respose="An error occurred!!!")
def divide_number(x,y):
    return x/y
print("\nRESULT:",divide_number(7,2))