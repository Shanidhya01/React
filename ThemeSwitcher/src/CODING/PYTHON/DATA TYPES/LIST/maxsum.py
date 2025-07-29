# Write a Python a function to find the maximum 
# sum sub-sequence in a list. Return the maximum value.
def max_sum_subsequence(arr):
    n = len(arr)
    dp = [0] * n
    dp[0] = arr[0]

    for i in range(1, n):
        dp[i] = max(arr[i], dp[i - 1] + arr[i])

    return max(max(dp), 0)

# Example usage:
nums = [1, 2, 4, 3, 5, 4, 6, 9, 2, -10]
result = max_sum_subsequence(nums)
print("Maximum sum sub-sequence:", result)
