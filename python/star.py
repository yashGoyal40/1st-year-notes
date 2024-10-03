n=int(input("enter the number of stars: "))
for i in range(0,n):
    for j in range(0,i+1):
        print("*",end="")
    print()
for i in range(1,n+1):
    for j in range(1,i+1):
        print(j,end="")
    print()
for i in range(1,n+1):
    for j in range(1,i+1):
        print(i,end="")
    print()


