t=int(input())
cp=0
cn=0
for i in range(t):
    op=input()
    
    for c in op:
        if c=='+':
            cp+=1
            break
        elif c=='-':
            cn+=1
            break

print(cp-cn)