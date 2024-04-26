#2.wap to create an integer list of 20 elements , now increase the odd values by 5
#1st way
#integerlist= list(range(1, 21))
#2nd way
integerlist=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
for i in range(len(integerlist)):
    if integerlist[i] % 2 != 0:
        integerlist[i]+=5
print(integerlist)
