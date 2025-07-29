#  Count all letters, digits, and special symbols from a given string
def find_digits_chars_symbols(sample_str):
    char_count = 0
    digit_count = 0
    symbol_count = 0
    for char in sample_str:
        if char.isalpha():
            char_count += 1
        elif char.isdigit():
            digit_count += 1
        # if it is not letter or digit then it is special symbol
        else:
            symbol_count += 1

    print("Chars = \n", char_count, "Digits =\n", digit_count, "Symbol =\n", symbol_count)

sample_str = input('ENTER A STRING  :   ')
print("total counts of chars, Digits, and symbols \n")
find_digits_chars_symbols(sample_str)
