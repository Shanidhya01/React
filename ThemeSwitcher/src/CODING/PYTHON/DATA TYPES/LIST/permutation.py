def find_permutations(input_list):
    """
    Args:
        input_list (list): The input list for which permutations need to be found.
    Returns:
        list: A list of tuples, where each tuple represents a permutation.
    """
    from itertools import permutations
    all_permutations = list(permutations(input_list))
    return all_permutations

my_list = [1, 2, 3]
result = find_permutations(my_list)
print(result)
