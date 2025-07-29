# You have given a nested list. Write a program to extend it by adding the sublist ["h", "i", "j"] in such a way that it will look like the following list
list1 = ["a", "b", ["c", ["d", "e", ["f", "g"], "k"], "l"], "m", "n"]
sub_list = ["h", "i", "j"]

# understand indexing
# list1[2] = ['c', ['d', 'e', ['f', 'g'], 'k'], 'l']
# list1[2][1] = ['d', 'e', ['f', 'g'], 'k']
# list1[2][1][2] = ['f', 'g']

# solution
list1[2][1][2].extend(sub_list)
print(list1)
