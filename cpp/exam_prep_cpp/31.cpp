#include<bits/stdc++.h>
using namespace std;

template<class T>
class tmp{
    public:
    T var;

    tmp(T dat) : var(dat){}

};

template<class A,class B>
class myclass{
    public:
    A x;
    B y;

    myclass(A a,B b): x(a),y(b){}
};
int main()
{
    tmp<int> obj1(3);
    cout<<obj1.var;

    tmp<char> obj2('h');
    cout<<obj2.var<<endl;

    myclass<int,float> on(2,3.4);

    
    return 0;
}