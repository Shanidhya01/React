# program to reverse the bits of an integer 
def reverse_bits(n):
    result = 0
    while n > 0:
        result = (result << 1) | (n & 1)
        n >>= 1
    return result
input_number = 1234 
reversed_bits = reverse_bits(input_number)
print(f"Original: {bin(input_number)}, Reversed: {bin(reversed_bits)}, Decimal: {reversed_bits}")
