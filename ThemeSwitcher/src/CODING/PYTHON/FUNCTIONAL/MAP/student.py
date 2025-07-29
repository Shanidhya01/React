# Write a Python program to create a new list taking specific elements from a tuple and convert a string value to an integer
student_data  = [('Alberto Franco','15/05/2002','35kg'), ('Gino Mcneill','17/05/2002','37kg'), ('Ryan Parkes','16/02/1999', '39kg'), ('Eesha Hinton','25/09/1998', '35kg')]
print("Original List: ")
print(student_data)
student_data_name = list(map(lambda x:x[0],student_data))
student_data_dob = list(map(lambda x:x[1],student_data))
student_data_weight = list(map(lambda x:x[2],student_data))
print("\n Student name: ",student_data_name)
print("\n Student dob: ",student_data_dob)
print("\n Student weight: ",student_data_weight)