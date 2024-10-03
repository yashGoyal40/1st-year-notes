#include<iostream>
using namespace std;

class B{
    public:
    int a;
    void operator() (int b){
        cout<<"you are in brackets"<<endl;
         cout<<endl<<"answer is: ";
        cout<<this->a*b<<endl;
    }

    void operator* (int a){
        cout<<"tou are trying to multiply";
        cout<<endl<<"answer is: ";
        cout<<this->a*a;
    }

    void operator[] (B &tmp){
        cout<<endl<<this->a*tmp.a<<endl;
    }

};


int main(){
    B ob;
    ob.a=5;
    ob(5);
    ob * 10;
    B ob2;
    ob2.a=6;
    ob[ob2];
    return 0;
}