def file_read(fname,nlines):
    from itertools import islice
    with open(fname) as f:
        for line in islice(f,nlines):
            print(line)
file_read('document.txt',2)