# Remove empty strings from a list of strings
strlist = ["Emma", "Jon", "", "Kelly", None, "Eric", ""]

# use built-in function filter to filter empty value
str_list = list(filter(None, strlist))

print("After removing empty strings")
print(str_list)