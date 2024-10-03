//operator overloading 

// use + to subtract
//use - to add

#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int val1=this->a;
        int val2=obj.a;
        cout<<"output is: "<<val1-val2<<endl;
    }
    void operator- (B &obj){
        int val1=this->a;
        int val2=obj.a;
        cout<<"output is: "<<val1+val2<<endl;
    }

};
int main(){
    B b1,b2;
    b1.a=10;
    b2.a=5;
    b1+b2;
    b1-b2;
}