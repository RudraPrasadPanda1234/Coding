#1.Create an employe class attributes all employes are belongs to
#the same organization every employe having their own employe id and
#employe name and dept.Create five employe objects and display their details
class Employee:
    oname="GIETU"
    def __init__(self, emp_id, emp_name, dept,age):
        self.emp_id = emp_id
        self.emp_name = emp_name
        self.dept = dept
        self.age=age

    def display_details(self):
        print("Employee ID:", self.emp_id)
        print("Employee Name:", self.emp_name)
        print("Department:", self.dept)
        print("Age:",self.age)
        print()

# Creating employee objects
employee1 = Employee(1, "John", "HR",23)
employee2 = Employee(2, "Alice", "Finance",34)
employee3 = Employee(3, "Bob", "IT",43)
employee4 = Employee(4, "Emily", "Marketing",35)
employee5 = Employee(5, "David", "Operations",46)

# Displaying details of employees
employee1.display_details()
employee2.display_details()
employee3.display_details()
employee4.display_details()
employee5.display_details()

