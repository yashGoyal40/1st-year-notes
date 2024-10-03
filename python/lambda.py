add10=lambda x:x+10
print(add10(5))

def add10_func(x):
    return x+10

mult= lambda x,y:x*y
print(mult(2,7))

points2d=[(1,2),(15,1),(5,-1),(10,4)]
points2d_sorted=sorted(points2d,key=lambda x:x[1])
points2d_sorted_1=sorted(points2d,key=lambda x:x[0])
points2d_sorted_2=sorted(points2d,key=lambda x:x[0]+x[1],reverse=True)

print(points2d)
print(points2d_sorted)
print(points2d_sorted_1)
print(points2d_sorted_2)

a=[1,2,3,4,5]
b=list(map(lambda x:x*2,a))
print(b)

c=[x*2 for x in a]
print(c)

d=[1,2,3,4,5,6]
e=list(filter(lambda x: x%2==0,d))
print(e)

f=[x for x in d if x%2==0]
print(f)