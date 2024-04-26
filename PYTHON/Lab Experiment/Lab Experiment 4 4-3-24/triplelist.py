#1.Program to triple all numbers in a given list of integers using map()and using functions.
def cube(x):
    return x*3
l1=eval(input("Enter a list"))
l2=list(map(cube,l1))
print("List after triple=",l2)