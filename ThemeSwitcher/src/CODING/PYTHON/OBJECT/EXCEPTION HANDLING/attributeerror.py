# Python program that executes a list operation and handles an AttributeError exception if the attribute does not exist.
def test_list_operation(nums):
    try:
        r = len(nums)
        print("Length of list : ",r)
    except AttributeError:
        print("Error: The list does not have a 'length' attribute.")
nums = [1,2,3,4,5]
test_list_operation(nums)