from collections import deque

def bfs(graph,src,des):
    if src==des:
        return True
    n=len(graph)
    vis=[0]*n
    q=deque([])
    q.append(src)
    vis[src]=1
    
    while len(q)!=0:
        node=q.popleft()
        if node==des:
            return True
        
        #print(node,end=" ")
        #print(graph[node])
        
        for ng in graph[node]:
            #print(ng)
            if vis[ng]==0:
                q.append(ng)
                vis[ng]=1
            
    
    return False

def makeGraph():
    ne=list(map(int,input().split()))
    n=ne[0]
    e=ne[1]

    graph=[[] for i in range(n+1)]
    for i in range(e):
        uv=list(map(int,input().split()))
        u=uv[0]
        v=uv[1]
        #w=uv[2]
        graph[u].append(v)
        graph[v].append(u)
        
    
    #print(graph)
    return graph

t=int(input())

for i in range(t):
    graph=makeGraph()
    q=int(input())
    for i in range(q):
        uv=list(map(int,input().split()))
        if bfs(graph,uv[0],uv[1]):
            print("Yes")
        else:
            print("No")
    
