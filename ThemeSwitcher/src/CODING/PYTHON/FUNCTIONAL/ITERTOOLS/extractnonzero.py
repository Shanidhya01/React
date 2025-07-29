# Python program to extract a non-zero block from a given integer list.
import itertools as it 
def test(lst):
    result = [list(x[1]) for x in it.groupby(lst,lambda x:x==0) if not x[0]]
    return result
nums = [3,4,6,2,0,0,0,0,0,0,6,7,6,9,10,0,0,0,0,0,7,4,4,0,0,0,0,0,0,5,3,2,9,7,1]
print("Original List: ",nums)
print("\nExtract non zero block from a given integers list: ")
print(test(nums))