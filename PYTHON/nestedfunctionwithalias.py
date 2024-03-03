def f1():
    print("f1 is outer function started")
    def f2():
        print("f2 is inner function of f1")
    print("End of outer function")
    return f2

f1()#2 statements
f3=f1#this is alias name but not store the return value
f3() #2 statemnts
f4=f1()#we must have return statement
f4()#3 statements -> f1 body + return value of f1
#f2() --> we can't access the inner function at outside of the outer function 