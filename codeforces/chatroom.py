def linearsearch1(mylist,x,i):
    
    for i in range(i,len(mylist)):
        #print("in for")
        if mylist[i]==x:
            
            return i
    
    return -1
            
            

def checkHello(mylist):
    mylist1=[]
    i=0
    for x in "hello":
        #print(x)
    
        idx=linearsearch1(mylist,x,i)
        if idx==-1:
            print("NO")
            return
        
        i=idx+1
        #mylist1.append(idx)
    
    print("YES")
    
    
        
mystr=input()
mylist=[]
for ch in mystr:
    mylist.append(ch)
#print(mylist)
checkHello(mylist)