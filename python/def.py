# a="hello"
# def test():
#     global a
#     a="good morning"
# def test2():
#     a="night life"
# print(a)
# test()
# test2()
# print(a)
# a=int(input("a: "))
# def changeglobal():
# def square(x):
#     return x**2
# def double(x):
#     return x*2
# a=int(input("x:"))
# square(a)
# double(a)
def fact(n):
    if n==1:
        return n
    else:
        return n*fact(n-1)
n=int(input())
if n<0:
    print("no")
elif n==0:
    print(1)
else:
    print(fact(n))

