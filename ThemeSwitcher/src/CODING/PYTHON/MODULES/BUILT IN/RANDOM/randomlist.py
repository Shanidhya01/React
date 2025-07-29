# program to create a list of random integers and randomly select multiple items from the said list.
import random
print("Create a list of random integers:")
population = range(1,100)
num_list = random.sample(population,10)
print(num_list)
no_elements = 4
print("\nRandomly select",no_elements,"multiple items from the said list:0")
result_elements = random.sample(num_list,no_elements)
print(result_elements)