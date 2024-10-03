# def function_name(a,b,c,d):
#     print(a,b,c,d)
# function_name("harry","yash","sparsh","vansh")
def fargs(normal,*args,**kwargs):
    print(normal)
    for i in args:
        print(i,end=" ")
    # print(args[0])
    for key,value in kwargs.items():
        print(key,value)
ha=["yasj","aioh","lkd","ljn","dpo"]
normal="this is a normal"
k={"a":1,"b":3,"c":4,"d":5,"e":6}
fargs(normal,*ha,**k)