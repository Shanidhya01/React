# Given a string s1, write a program to return the sum and average of the digits that appear in the string, ignoring all other characters.
str = input('ENTER THE STRING : ')
total = 0
cnt = 0
for char in str:
    if char.isdigit():
        total += int(char)
        cnt += 1

# average = sum / count of digits
avg = total / cnt
print("Sum is:\n", total, "Average is ", avg)
