'''def add(a,b=50):
    c=a+b
    return c
print(add(10))'''
def add(*num):
    sum=0
    for i in num:
        sum=sum+i
        print("sum",sum)
add(1,2,3,4,5,6,7)
