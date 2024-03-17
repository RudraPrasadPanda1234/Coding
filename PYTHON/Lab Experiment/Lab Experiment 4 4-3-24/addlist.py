#WAP to add three given lists of equal number of elements using map()
def add(x,y,z):
    return x+y+z
l1=eval(input("Enter a list"))
l2=eval(input("Enter a list"))
l3=eval(input("Enter a list"))
if(len(l1)==len(l2)==len(l3)):
    l4=list(map(add,l1,l2,l3))
    print("The list after adding according to its index value",l4)
else:
    print("Length is not same")