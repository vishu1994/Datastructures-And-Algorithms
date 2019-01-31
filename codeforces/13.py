mystr=input()
newstr=""
newstr+=mystr[0].upper()
for ch in mystr[1:]:
    newstr+=ch

print(newstr)