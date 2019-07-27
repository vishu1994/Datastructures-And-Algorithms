mystr=input()
if mystr.isupper():
    print(mystr.lower())

elif mystr[0].islower() and len(mystr)==1:
    print(mystr[0].upper())

elif mystr[0].islower() and mystr[1:].isupper():
    newstr=mystr[0].upper()+mystr[1:].lower()
    print(newstr)

else:
    print(mystr)
    