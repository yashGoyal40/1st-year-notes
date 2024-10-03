a="pytho"
b=list(a)
b[0],b[-1]=b[-1],b[0]
a=str(b)
print(a)