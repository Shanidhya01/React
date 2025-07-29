# program that executes an operation on a list and handles 
# an IndexError exception if the index is out of range.
def test_index(data,index):
    try:
        result = data[index]
        print("RSSULT: ",result)
    except IndexError:
        print("Error: Index out of range.")
nums = [1,2,3,4,5,6,7]
index = int(input("ENTER THE INDEX: "))
test_index(nums,index)