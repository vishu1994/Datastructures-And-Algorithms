n=int(input())
c=0
for i in range(n):
    mylist=list(map(int,input().split()))
    if mylist[1]-mylist[0]>=2:
        c+=1
print(c)