# Write a Python program that creates a list of dictionaries containing student information (name, age, grade) and uses the filter function to extract students with a grade greater than or equal to 95.
students = [
    {"name": "Denis Helio", "age": 17, "grade": 97},
    {"name": "Hania Mehtap", "age": 16, "grade": 92},
    {"name": "Kelan Stasys", "age": 17, "grade": 90},
    {"name": "Velvet Mirko", "age": 16, "grade": 94},
    {"name": "Delores Aeneas", "age": 17, "grade": 100},
]
print("Student information:")
print(students)
def has_high_grade(student):
    return student["grade"] >= 95
high_grade_students = list(filter(has_high_grade, students))
print("\nStudents with high grades:")
print(high_grade_students)
