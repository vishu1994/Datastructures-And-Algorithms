def totalmoney(k,n,w):
    s=0
    for i in range(1,w+1):
        s+=k*i
    
    if s<n:
    	print("0")
    	return
    
    print(abs(n-s))
            

knw=list(map(int,input().split()))
k=knw[0]
n=knw[1]
w=knw[2]
totalmoney(k,n,w)
