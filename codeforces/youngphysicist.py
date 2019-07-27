n=int(input())
sx,sy,sz=0,0,0
for i in range(n):
    mylist=list(map(int,input().split()))
    sx+=mylist[0]
    sy+=mylist[1]
    sz+=mylist[2]

if sx==0 and sy==0 and sz==0:
    print("YES")
else:
    print("NO")