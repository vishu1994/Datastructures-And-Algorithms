a="4"
b=10


n=len(a)
ans=0

for i in range(n):
	if i==n-1:
		ans=int((ans+int(a[i]))%b)
	else:
		ans=int((ans+int((int(ar[i])*10)%b))%b)


print(ans)	