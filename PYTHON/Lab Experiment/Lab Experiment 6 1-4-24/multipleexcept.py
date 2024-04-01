#2.try with multipule excepts
try:
    a=int(input("Enter a number"))
    b=eval(input("Enter a number"))
    c=a/b
    print("Result=",c)
except ZeroDivisionError:
    print("Zero division error ocurred")
except ValueError:
    print("value error have occured")
except TypeError:
    print("Type error have ocurred")
    
