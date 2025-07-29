# Write a Python function to check if a list is a palindrome or not. Return true otherwise false.
def is_palindrome(lst):
    return lst == lst[::-1]
nums = [1,2,4,3,5,4,6,9,2,1]
print("Original list:")
print(nums)
print("Check the said list is palindrome or not ?")
print(is_palindrome(nums))
colors = ["Red", "Green", "Red"]
print("\nOriginal list:")
print(colors)
print("Check the said list is palindrome or not ?")
print(is_palindrome(colors))