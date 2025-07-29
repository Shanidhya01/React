def filtereven(nums):
    def isodd(num):
        return num%2!=0
    odd_nums = list(filter(isodd,nums))
    return odd_nums
nums = [1,2,3,4,5,6,7,8,9,10]
print("Original Numbers: ",nums)
result = filtereven(nums)
print("After filters out even number from said list of integers:")
print(result)