def longest_common_subsequence(lst1, lst2):
    # Get the lengths of both input lists
    m, n = len(lst1), len(lst2)
    # Initialize a 2D table to store the lengths of common subsequences
    dp = [[0] * (n + 1) for _ in range(m + 1)]

    # Fill in the dp table using dynamic programming
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if lst1[i - 1] == lst2[j - 1]:
                # If the current elements are equal, increment the length by 1
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                # If the current elements are not equal, take the maximum length obtained so far
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

    # Initialize a list to store the longest common subsequence
    lcs = []
    # Backtrack to reconstruct the longest common subsequence
    i, j = m, n
    while i > 0 and j > 0:
        if lst1[i - 1] == lst2[j - 1]:
            # If the current elements are equal, they are part of the subsequence
            lcs.append(lst1[i - 1])
            i -= 1
            j -= 1
        elif dp[i - 1][j] > dp[i][j - 1]:
            # If the length above is greater, move upwards
            i -= 1
        else:
            # If the length on the left is greater, move leftwards
            j -= 1

    # Return the longest common subsequence in reverse order
    return lcs[::-1]

# Example usage:
nums1 = [1, 2, 3, 4, 5, 6, 7, 8]
nums2 = [6, 7, 5, 6, 7, 8]
result = longest_common_subsequence(nums1, nums2)
print("Longest common subsequence:", result)
