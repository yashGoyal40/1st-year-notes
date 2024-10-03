#include<bits/stdc++.h>
using namespace std;


template<typename T>
T add(T a,T b){
    return (a+b);
} 

template<class S,class J>
class A{
    public:
    S data;
    J f;

    A(S l,J p):data(l),f(p){}

};

template<class S,class J>
class B:public A<S,J>{
    public:

};


int main()
{
    A<int,float> boj(10,2.4);
    cout<<boj.data;
    cout<<boj.f;


    
    return 0;
}