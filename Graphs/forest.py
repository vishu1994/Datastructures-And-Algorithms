
def dfs(graph,src,vis):
    global v
    global e
    vis[src]=1
    
    v+=1
    e+=len(graph[src])
#     print(src,end=" ")
    
    for  ng in graph[src]:
        if vis[ng]==0:
            dfs(graph,ng,vis)
    
    
t=int(input())
for i in range(t):
    graph,n=makeGraph()
    vis=[0]*(n+1)
    flag=0
    for i in range(1,n+1):
        
        v,e=0,0
        if vis[i]==0:
            dfs(graph,i,vis)
            if e//2!=v-1:
                print("No")
                flag=1
                break
    
    if flag==0:
        print("Yes")
    

    
        

