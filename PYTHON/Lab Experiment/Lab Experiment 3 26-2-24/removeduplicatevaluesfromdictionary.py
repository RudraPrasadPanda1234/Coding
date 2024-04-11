#3.WAP to create dictionary and remove the duplicate values.
d1=eval(input("Enter a dictionary"))
print("The dictionary with values =",d1)
values=d1.values()
print("only dictinary values before removing duplicate=",values)
s=set(values)
print("After removing duplicate values using set",s)
l2=[]
for i in values:
    if i not in l2:
        l2.append(i)
print("Remove duplicate using list=",l2)