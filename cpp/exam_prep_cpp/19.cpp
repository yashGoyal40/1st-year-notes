#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;

    A(int val):a(val){}
};

class B{
    public:
    int b;

    operator int() {return b;}

};
int main()
{
    //implicit conversion 

    A obj =10;

    cout<<obj.a;

    
    return 0;
}