#4.zero division error in outer try block and value error in inner try block
try:
    try:
        a=int(input("Enter a number"))
        b=int(input("Enter a number"))
        c=a/b
        print("Result=",c)
    except ValueError:
        print("Value error error ocurred in inner try block")
except ZeroDivisionError:
    print("Zero Divison error ocurred in outer try block")
