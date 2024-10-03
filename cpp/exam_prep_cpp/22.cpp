#include<bits/stdc++.h>
using namespace std;

class Super{
    public:
    void display(){
        cout<<"hello";
    }
};

//virtual makeshure that there is only one coppy of base calss in inherited class
class A:virtual public Super{
    
};

class B:virtual public Super{
    
};

class C:public A,public B{
    public:
    int a;
};

int main()
{
    C obj;
    obj.display();
    obj.display();
    return 0;
}