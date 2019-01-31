

def linearsearch(ar,i,n,y):
    for j in range(i,n):
        if ar[j]==y:
            return j
    
    return -1


n=input()
mylist=list(map(int,input().split()))
mylist.sort()
#print(mylist)
cnt=0
i=0
while i<len(mylist):
    y=4-mylist[i]
    if y==0:
        cnt+=1
        mylist.remove(mylist[i])
        
    
    #index=binarysearch(mylist,i+1,len(mylist)-1,y)
    index=linearsearch(mylist,i+1,len(mylist),y)
    if index==-1:
        cnt+=1
        mylist.remove(mylist[index])
        
    else:
        mylist.remove(mylist[index])
        mylist.remove(y)
        cnt+=1
    #print(mylist)
    
print(cnt)
        