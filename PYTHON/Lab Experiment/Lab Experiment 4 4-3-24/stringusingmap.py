#4.WAP to convert the list of integers to the corresponding string while using map()
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
print("Number present in list but each number is string data type=",string_list)
stringlist=map(string,numbers)
for num in stringlist:
    print("Converting each number indiviaully to string eg. 1=one =",num)
    stringlist1=list(num)
    print("Displaying each word in list after converting number in to word and then converting each letter from the word to string =",list(stringlist1))
stringlist1=list(map(string,numbers))
print("Coverting the each number in the list to its's respective word then diplaying it in form of list =",list(stringlist1))