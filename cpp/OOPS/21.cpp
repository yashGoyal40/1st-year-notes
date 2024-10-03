//hyrarical 
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
};

int main(){
    B b1;
    c c1;
    b1.live();
    c1.live(); 
    return 0;
}

