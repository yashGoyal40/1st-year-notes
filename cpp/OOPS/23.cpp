//inheritance ambiguity 
#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"this is a A class function "<<endl;
    }
};
class B{
    public:
    void func(){
        cout<<"this is a B class function "<<endl;
    }
};

class C:public A,public B{
    public:

};

int main(){

    C *obj=new C;

    // obj->func();
    // func() function is ambigious

    obj->A::func();
    obj->B::func();


    // :: scope resolution 

    return 0;
}