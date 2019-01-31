def removestones(mystr):
    n=len(mystr)
    i=0
    cr,cg,cb=0,0,0
    while i<n:
        if i<n and mystr[i]=="R":
            i+=1
            while i<n and mystr[i]=="R":
                cr+=1
                i+=1
                
        
        if i<n and mystr[i]=="G":
            i+=1
            while i<n and mystr[i]=="G":
                cg+=1
                i+=1
        
        if i<n and mystr[i]=="B":
            i+=1
            while i<n and mystr[i]=="B":
                cb+=1
                i+=1
        
    print(cr+cb+cg)
    
    
n=input()
mystr=input()
removestones(mystr)
                