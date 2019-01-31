def count(m,n):
	c=0
	c=m//2*n

	if int(m%2)==1:
		c+=n//2

	print(c)


mn=input().split()
m=int(mn[0])
n=int(mn[1])

count(m,n)