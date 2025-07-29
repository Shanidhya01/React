# Write a Python program to find the first two elements of a given list whose sum is equal to a given value. Use the itertools module to solve the problem
import itertools as it 
def sum_pair(nums,n):
    pair = []
    for num2,num1 in list (it.combinations(nums[::-1],2))[::-1]:
        if num1+num2 == n:
            pair.append ([num1,num2])
    return pair
nums = [1,2,3,4,5,6,7,8]
n = 10
print("Original List: ",nums,"\n Given value:",n)
print("Sum Of Pair Equal To ",n,"=",sum_pair(nums,n))