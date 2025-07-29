# Slice list into 3 equal chunks and reverse each chunk
list1 = []
n = int(input("Enter the number of elements OF LIST : "))
for i in range(n):
    ele = int(input("Enter element {}: ".format(i + 1)))
    list1.append(ele)
print("Your list is:", list1)
n = int(input('ENTER THE NUMBER FOR HOW MANY PART FOR SLICING :  '))
length = len(list1)
chunk_size = int(length / n )
start = 0
end = chunk_size
for i in range(n):
    indexes = slice(start, end)
    list_chunk = list1[indexes]
    print("Chunk ", i, list_chunk)
    print("After reversing it ", list(reversed(list_chunk)))
    start = end
    end += chunk_size