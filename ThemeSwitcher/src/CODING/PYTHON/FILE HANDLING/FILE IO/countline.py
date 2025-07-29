def file_lenghty(fname):
    with open(fname) as f:
        for i,l in enumerate(f):
            pass
        return i+1
print("Number of lines in the file : ",file_lenghty("test.txt"))