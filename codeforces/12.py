mystr=input().split("+")

#print(mystr)
mystr.sort()
newstr=""
newstr+=mystr[0]

for ch in mystr[1:]:
    newstr+="+"
    newstr+=ch
    

#del newstr[len(mystr)-1]
print(newstr)