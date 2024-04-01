#1.wap for zero division  error
try:
    a=int(input("Enter a number"))
    b=int(input("Enter a number"))
    c=a/b
    print("Result=",c)
except ZeroDivisionError:
    print("Zero division error ocurred")
    
