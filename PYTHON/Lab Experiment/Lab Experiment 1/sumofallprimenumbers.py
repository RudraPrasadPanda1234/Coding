s=0
for i in range(2,200):
    k=0
    for n in range(1,i):
        if(i%n==0):
            k=k+1
    if(k==1):
        print(i,end=",")
        s=s+i
print("sum=",s)