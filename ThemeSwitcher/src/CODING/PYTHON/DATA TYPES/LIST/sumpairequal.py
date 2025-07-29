# Write a Python program to find all the pairs in a list whose sum is equal to a given value.
def pairs_with_sum(lst,g_sum):
    # Create an empty dictionary 'complement_dict' to store complements of visited numbers
    complement_dict = {}
    pairs = []
    #Iterate through the Element in the input list 'lst'
    for num in lst:
        #Calculate the complement of the current number with respect to the target value
        complement = g_sum - num
        #check if the compliment is already in the' complement_dict'
        if complement in complement_dict:
            #If found, add the current number and its complement as  a pair to 'pairs'
            pairs.append((num,complement))
        else:
            #If not found  , stored the compliment_dict for the future checks
            complement_dict[num] = num 
        #Return the list of pairs that sum up to the Target value
    return pairs

nums = [1,2,3,4,5 ,6,7,8,9]
val = 10
print("Original list:")
print(nums)

#Call the pair with some function with the list of number and the targets. Sum 'val' and stored the result in result.
result = pairs_with_sum(nums,val)
print("List all pairs of the set list with sum is equal to",val)
print(result)