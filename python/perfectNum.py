a=int(input("enter a number"))
l=[]
if a<=0:
    print("no")
elif a==1:
    print("yes")
else:
    for i in range(1,a):
        if a%i==0:
            l.append(i)
    c=sum(l)
    if c==a:
        print("yes")
    else:
        print("no")
