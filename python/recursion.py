def fact(n):
    if n==1:
        return 1
    elif n==0:
        return 1
    else: 
        return n*fact(n-1)
print(fact(0))
def fac(n):
    fac=1
    for i in range(1,n+1):
        fac=fac*i
    print(fac)
fac(5)
#0 1 1 2 3 5 8 ... (fibonaci)
def fibo(n):
    a=0
    b=1
    for i in range(1,n+1):
        print(a)
        c=a+b
        a=b
        b=c
fibo(5)

def fibona(n):
    if n<=1:
        return n
    else:
        return fibona(n-1)+fibona(n-2)
for i in range(5):
    print(fibona(i))