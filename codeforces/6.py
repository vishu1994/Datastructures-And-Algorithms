def myfun(ar):
	c=0
	for x in ar:
		if x==1:
			c+=1

	if c>=2:
		return 1

	else:
		return 0


t=int(input())
c=0
for x in range(t):
	ar=list(map(int,input().split()))
	c+=myfun(ar)

print(c)