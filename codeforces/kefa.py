n=int(input())
mylist=list(map(int,input().split()))
ans,c,i=0,0,0

while i<len(mylist)-1:
    if mylist[i]<=mylist[i+1]:
        c+=1
        ans=max(ans,c)
        
    else:
        
        c=0
    
    i+=1
    
print(ans+1)

    
    
            
        
            