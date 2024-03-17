#6.Wap to remove duplicate values from list
l1=[1,2,2,3,5,6]
i=0
while i<len(l1)-1:
    if l1[i]==l1[i+1]:
        l1.remove(l1[i])
    else:
        i+=1
print(l1)


