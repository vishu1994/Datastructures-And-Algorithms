def checkop(mystr):
    if "H" in mystr:
        print("YES")
        return
    
    elif "Q" in mystr:
        print("YES")
        return
    
    elif "9" in mystr:
        print("YES")
        return
    
    
    else:
        print("NO")


mystr=input()
checkop(mystr)