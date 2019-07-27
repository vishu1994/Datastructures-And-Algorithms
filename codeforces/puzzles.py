nm=list(map(int,input().split()))
n=nm[0]
m=nm[1]
puzlist=list(map(int,input().split()))
puzlist.sort()
ans=10000
for i in range(m-n+1):
    ans=min(ans,puzlist[i+n-1]-puzlist[i])

print(ans)
