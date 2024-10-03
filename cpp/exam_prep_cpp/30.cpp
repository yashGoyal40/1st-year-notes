//templated -> generic functions/class

#include<bits/stdc++.h>
using namespace std;

template<typename T> T func(T a,T b){
    return (a + b);
}

template<typename A,typename B> void func2(A a,B b){
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b);
}

int main()
{

    cout<<func(2.232323,2.267788)<<endl;
    func2(4,6.22);
    
    return 0;
}