a=raw_input()
b=a.split()
c=int(b[0])
d=int(b[1])
ans=0
for i in range (d):
		q=raw_input()
		q=q.split()
		w=int(q[0])
		e=int(q[1])
		r=int(q[2])
		ans=ans+(e-w+1)*r
ans=ans/c
print(ans)
