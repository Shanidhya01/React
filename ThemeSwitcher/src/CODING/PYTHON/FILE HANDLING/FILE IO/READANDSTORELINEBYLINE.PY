with open("abc.txt", "r") as file:
    lines = []
    for line in file:
        lines.append(line.strip())

print(lines)