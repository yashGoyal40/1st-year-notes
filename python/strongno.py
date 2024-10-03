import math
a=int(input())
b=int(input())
l1=[]
for i in range(a,b):
    temp=str(i)
    l=len(temp)
    li=[]
    for j in temp:
        li.append(math.factorial(int(j)))
    if sum(li)==i:
        l1.append(i)
    else:
        continue
print(l1)
C=[x**2 for x in l1 ]
print(C)