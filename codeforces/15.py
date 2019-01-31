def matrix(mat):
    r,c=0,0
    for i in range(5):
        for j in range(5):
            if mat[i][j]==1:
                r,c=i,j
                break
    
    print(abs(r-2)+abs(c-2))

mat=[]
for i in range(5):
    row=[]
    row=list(map(int,input().split()))
    mat.append(row)

matrix(mat)
    
            