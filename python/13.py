# a=2020
# b=2004
# if a>b:
a=2020
b=2104
if a>b:
    for i in range(b,a+1):
        if (i % 400 == 0) and (i % 100 == 0):
            print(i)
        elif (i % 4 ==0) and (i % 100 != 0):
            print(i)
        else:
            continue
else:
    for i in range(a,b+1):
        if (i % 400 == 0) and (i % 100 == 0):
            print(i)
        elif (i % 4 ==0) and (i % 100 != 0):
            print(i)
        else:
            continue