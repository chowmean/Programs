#read the string and if its car replace it with barber

file=open('toread.txt')

text=''
try:
    for s in file:
        print (s)
        
finally:
    text=file.read()
    file.close()
print (text)
