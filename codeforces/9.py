def finddangerous(mystr):
    i=0
    ans1=0
    ans0=0
    while i<len(mystr):
        
        if i<len(mystr) and mystr[i]=='1':
            c1=1
            i+=1
            while i<len(mystr) and mystr[i]=='1':
                c1+=1
                i+=1
            
            ans1=max(ans1,c1)
            
            
            
        elif i<len(mystr) and mystr[i]=='0':
            c0=1
            i+=1
            while i<len(mystr) and mystr[i]=='0':
                c0+=1
                i+=1
            
            ans0=max(ans0,c0)
        
    
    if ans0>=7 or ans1>=7:
        print("YES")
    
    else:
        print("NO")
            
mystr=input()            
finddangerous(mystr)        
        
        
        
        
        
        
        
        
            