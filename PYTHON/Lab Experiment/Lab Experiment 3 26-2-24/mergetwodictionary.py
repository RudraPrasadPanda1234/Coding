#1.Write a program to read two dictionaries from the keyboard and merge the two dictionaries.
d1=eval(input("Enter a dictionary"))
d2=eval(input("Enter a dictionary"))
print("Dictionary1 is=",d1)
print("Dictionary2 is=",d2)
d1.update(d2)
print("Merge dictionary is =",d1)