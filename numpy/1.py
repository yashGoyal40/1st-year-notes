import numpy as np
n1=np.array([10,34,45,67,78])
print(n1)
# n2=np.array([[12,24,4,67],[35,68,67]])
# print(type(n2))
n3=np.zeros((2,3))
print(n3)
print()
n4=np.zeros((6,6))
print(n4)
print()
n5=np.full((6,6),10)
print(n5)
n6=np.arange(10,101,10)
print(n6)
n7=np.random.randint(1,100,10)
print(n7)
n8=np.array([[2,3,4],[4,5,6]])
print(n8.shape)
n8.shape = (3,2)
print(n8)
n9=np.array([2,3,4,6])
n10=np.array([6,7,8,9])
print(np.vstack([n9,n10]))