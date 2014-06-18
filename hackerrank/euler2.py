mylist=[]
mylist.append(0)
mylist.append(1)
mylist.append(1)
i=3
sum=0
while(mylist[i-1]+mylist[i-2]<400000):
    mylist.append(mylist[i-1]+mylist[i-2])
    if (mylist[i]%2==0):
        sum=sum+mylist[i]
    i=i+1
print (mylist)
print(sum)
