# Write a program to check if two strings are balanced. For example, strings s1 and s2 are balanced if all the characters in the s1 are present in s2. The character’s position doesn’t matter.
def balance_test(s1, s2):
    flag = True
    for char in s1:
        if char in s2:
            continue
        else:
            flag = False
    return flag
s1 = input('ENTER 1ST STRING :   ')
s2 = input('ENTER 2ND STRING :   ')
check = balance_test(s1,s2)
print("s1 and s2 are balanced:", check)