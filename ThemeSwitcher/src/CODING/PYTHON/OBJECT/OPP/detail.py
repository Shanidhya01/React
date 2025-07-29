from datetime import date
class Person:
        def __init__(self, name, country, dob):
             self.name = name
             self.country = country
             self.dob = dob
             
        def calculate_age(self):
            today = date.today()
            age = today.year - self.dob.year
            if today < date(today.year, self.dob.month, self.dob.day):
                  age -= 1
            return age
person1 = Person("Ferdi Odilia", "France", date(1962, 7, 12))
person2 = Person("Shweta Maddox", "Canada", date(1982, 10, 20))
person3 = Person("Elizaveta Tilman", "USA", date(2000, 1, 1))

print("Person 1:")
print("Name:", person1.name)
print("Country:", person1.country)
print("Date of Birth:", person1.dob)
print("Age:", person1.calculate_age())

print("\nPerson 2:")
print("Name:", person2.name)
print("Country:", person2.country)
print("Date of Birth:", person2.dob)
print("Age:", person2.calculate_age())

print("\nPerson 3:")
print("Name:", person3.name)
print("Country:", person3.country)
print("Date of Birth:", person3.dob)
print("Age:", person3.calculate_age())
