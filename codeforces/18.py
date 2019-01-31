def checkgender(mystr):
    
    cntar=[0]*26
    for ch in mystr:
        idx=ord(ch)-ord('a')
        cntar[idx]+=1
    
    cnt=0
    for x in cntar:
        if x!=0:
            cnt+=1
    
    if int(cnt%2)==0:
        print("CHAT WITH HER!")
    
    else:
        print("IGNORE HIM!")

        
        
mystr=input()
checkgender(mystr)