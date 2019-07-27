n=int(input())
i=n+1
while True:

    s=set()
    for ch in str(i):
        s.add(ch)
    
    if len(s)==len(str(i)):
        print(i)
        break
    i=i+1