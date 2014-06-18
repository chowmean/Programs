def isPalin(n):
    """
        is 'n' a palindromic number?
    """
    ns = list(str(n))
    for n in ns:
        if n != ns.pop():
            return False
    return True
    

i=999
j=999
flag=0;
val=0
for i in range (999, 800, -1):
    for j in range(999, 800, -1):
        print (i)
        print (j)
        if(isPalin(i*j)):
            flag=1
            val=i*j
            break
    if(flag==1):
        break
print (val)
