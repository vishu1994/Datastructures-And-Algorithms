nt=list(map(int,input().split()))
n=nt[0]
t=nt[1]
myqueue=list(input())

for i in range(t):
    j=0
    while j<len(myqueue)-1:
        if myqueue[j]=="B" and myqueue[j+1]=="G":
            myqueue[j],myqueue[j+1]="G","B"
            j=j+2
        else:
            j=j+1
            

for i in myqueue:
    print(i,end="")


            