# Write a Python program that creates a list of words and use the filter function to extract words that contain more than five letters.
words = ["Red", "Green", "Orange", "White", "Black", "Pink", "Yellow"]
print("List of words:")
print(words)
def has_more_than_five_letters(word):
    return len(word) > 5
long_words = list(filter(has_more_than_five_letters, words))
print("\nExtract words with more than five letters:")
print(long_words)