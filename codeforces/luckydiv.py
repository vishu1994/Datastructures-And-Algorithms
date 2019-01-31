def islucky(n):
    
    for ch in str(n):
        
        if ch!='4' and ch!='7':
            return False
    
    
    return True

def checklucky(n):
    for i in range(n+1):
        
        if islucky(i):
            #print(i,end=" ")
            if n%i==0:
                print("YES")
                return
    
    print("NO")

n=int(input())
checklucky(n)