import string,os
if not os.path.exists("letters"):
    os.makedirs("letters")
for letter in string.ascii_uppercase:
    with open(letter + ".py","w") as f:
        f.writelines(letter)