def move_last(num_list):
    a = [num_list[0] for i in range(num_list.count(num_list[0]))]
    x = [i for i in num_list if i!= num_list[0]]
    x.extend(a)
    return (x)
l1 = [0,1,3,45,6,7,8,9,10]
l2 = [10,0,11,12,15,0,17]
print("original list: ",l1)
print(move_last(l1))
print("original list: ",l2)
print(move_last(l2))