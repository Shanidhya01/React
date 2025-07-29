# Write a Python a function to find the minimum sum sub-sequence in a list. Return the sub-sequence
def min_sum_subsequence(arr):
    n = len(arr)
    dp = [0] * n
    dp[0] = arr[0]

    for i in range(1, n):
        dp[i] = min(arr[i], dp[i - 1] + arr[i])

    return min(min(dp), 0)

# Example usage:
nums = [1, 2, 4, 3, 5, 4, 6, 9, 2, -10]
result = min_sum_subsequence(nums)
print("minimum sum sub-sequence:", result)
