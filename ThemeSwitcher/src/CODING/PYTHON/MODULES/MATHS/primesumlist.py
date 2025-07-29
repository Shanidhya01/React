# program to calculate the sum of all prime numbers in a given list of positive integers
def test(nums):
    if len(nums) >0:
        return sum(list(filter(lambda x:(x>1 and all ( x % y !=0 for y in range(2,x))), nums)))
    return "EMPTY LIST !!!!!"
nums = [1,3,4,7,9]
print("ORIGINAL LIST : ",nums )
print("SUM OF ALL PRIME NUMBER IN THE LIST OF NUMBER: ",test(nums))
