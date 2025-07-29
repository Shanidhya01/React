def is_geometric(l):
    if len(l)<=1:
        return True
    ratio = l[1]/float(l[0])
    for i in range(1,len(l)):
        if not l[i]/float(l[i-1]) == ratio:
            return False
    return True
print(is_geometric([2, 6, 18, 54]))

print(is_geometric([10, 5, 2.5, 1.25]))

print(is_geometric([5, 8, 9, 11]))