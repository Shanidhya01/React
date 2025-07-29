def read_last_n_lines(file_path, n):
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()
            last_n_lines = lines[-n:]
            return last_n_lines
    except FileNotFoundError:
        return f"File {file_path} not found."
file_path = "document.txt"
n = int(input("ENTER THE NO. OF LINES : "))
result = read_last_n_lines(file_path, n)
print("Last", n, "lines of", file_path, "are:")
for line in result:
    print(line.strip())