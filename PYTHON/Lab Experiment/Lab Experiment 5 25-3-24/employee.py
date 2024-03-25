class Employee:
    oname="GIETU"
    def __init__(self,emp_name,age,emp_id,dept):
        self.emp_id=emp_id
        self.emp_name=emp_name
        self.dept=dept
        self.age=age
    def display_details(self):
        """Prints the employee's details."""
        print(f"Employee ID: {self.emp_id}")
        print(f"Name: {self.emp_name}")
        print(f"Department: {self.dept}")
        print(f"Age:{self.age}")
        print(f"Organization: {Employee.oname}")
def get_employee_details():
        name=input("Enter name of the emoloyee")
        age=int(input("Enter age of the employee"))
        empid=int(input("Enter empid of the employee"))
        dept=input("Enter the dept name of the employee")
        return name,age,empid,dept
employee_objects = []
for i in range(5):
    print("\nEnter details for Employee",i+1)
    emp_name,age,emp_id,dept = get_employee_details()
    employee = Employee(emp_name,age,emp_id,dept)
    employee_objects.append(employee)
        
for employee in employee_objects:
    employee.display_details()
    
