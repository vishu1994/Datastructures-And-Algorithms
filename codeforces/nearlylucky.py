def islucky(n):
    
    for ch in str(n):
        
        if ch!='4' and ch!='7':
            return False
    
    
    return True

def isluckydigit(n):
    if n=="4" or n=="7":
        return True
    else:
        return False
    
n=input()
c=0
for ch in n:
    if isluckydigit(ch):
        c+=1
if islucky(c):
    print("YES")
else:
    print("NO")