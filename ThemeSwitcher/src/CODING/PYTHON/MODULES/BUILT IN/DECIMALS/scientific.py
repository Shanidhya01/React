def display_scientific_notation(decimal_value):
    # Convert the decimal value to scientific notation
    scientific_notation = "{:.2e}".format(decimal_value)
    return scientific_notation

# Example usage
decimal_value =40812300000.00000000000000000
scientific_value = display_scientific_notation(decimal_value)
print(f"The scientific notation of {decimal_value} is {scientific_value}")
