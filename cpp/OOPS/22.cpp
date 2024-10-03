//hybrid 

#include<iostream>
using namespace std;

class A{
    public:
    void live(){
        cout<<"is living"<<endl;
    }
};

class B:public A{
    public:
};

class c:public A{
    public:
    void grow(){
        cout<<"growing"<<endl;
    }
};

class d:public c{
    public:
};

int main(){
    B b1;
    c c1;
    d d1;
    b1.live();
    c1.live();
    c1.grow();
    d1.live();
    d1.grow(); 
    return 0;
}

