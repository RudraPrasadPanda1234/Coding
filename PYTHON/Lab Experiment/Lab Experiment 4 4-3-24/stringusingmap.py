#WAP to convert the list of integers to the corresponding string while using map()
def string(x):
    if(x==0):
        return "Zero"
    elif (x==1):
        return "One"
    elif(x==2):
        return "Two"
    elif (x==3):
        return "Three"
    elif(x==4):
        return "Four"
    elif (x==5):
        return "Five"
numbers = [1, 2, 3, 4, 5]
string_list = list(map(str, numbers))
print("List in string is=",string_list)
stringlist=map(string,numbers)
for num in stringlist:
    print("Number after converting to word=",num)
    stringlist1=list(num)
    print("list after converting number in to word and then each letter to string to list =",list(stringlist1))
stringlist1=list(map(string,numbers))
print("Number after converting to list=",list(stringlist1))