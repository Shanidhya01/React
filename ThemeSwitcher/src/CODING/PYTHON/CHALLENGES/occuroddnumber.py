def odd_occurance(arr):
    result = 0
    for element in arr:
        result = result ^ element
    return result
num = [4,5,4,5,2,2,3,3,2,4,4]
num1 = [4,5,8,9,6,3,2,2,4,5,8,9,6,3]
print(odd_occurance(num))
print(odd_occurance(num1))