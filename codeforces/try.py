
def printstr(mystr):
	mystr=mystr.lower()
	mylist=[]
	for ch in mystr:
		if ch not in ('a','e','i','o','u','y'):
			mylist.append(".")
			mylist.append(ch)


	for c in mylist:
		print(c,end="")

	print()

mystr=input()
printstr(mystr)

