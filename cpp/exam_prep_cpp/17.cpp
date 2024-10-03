#include<bits/stdc++.h>
using namespace std;

class hello{
    public:
    int a;
    hello(int val):a(val){}
    hello(){}

    int operator+(hello &obj){
        return (this->a +obj.a);
    }


    hello operator* (hello &obj){
        hello result(this->a * obj.a);
        return result;
    }

};

int main()
{

    hello obj1,obj2;
    obj1.a=10;
    obj2.a=12;

    cout<<obj1+obj2<<endl;
    hello obj3 = obj1*obj2;
    cout<<obj3.a;
 
    return 0;
}