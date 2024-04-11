#WAP to take two equal number of lists now perform the power operation here base is the one list and power is another list 
def pow1(x,y):
    return pow(x,y)
l1=eval(input("Enter a list base"))
l2=eval(input("Enter a list for power"))
#l3=eval(input("Enter a list"))
if(len(l1)==len(l2)):
    l4=list(map(pow1,l1,l2))
    print("Power=",l4)
else:
    print("Length is not same")