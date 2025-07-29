# Find words with both alphabets and numbers
# str1 = "Emma25 is Data scientist50 and AI Expert"
str1=input('ENTER A TSRING :   ')
print("The original string is : " , str1)
res = []
temp = str1.split()
for word in temp: 
        if any(chr.isalpha() for chr in word) and any(chr.isdigit() for chr in word):
            res.append(word)  
print("Displaying words with alphabets and numbers")
for i in res:
    print(i)