//multiple inheritance

#include<iostream>
using namespace std;

class a{
    public:
    void bark(){
        cout<<"barking.."<<endl;
    }
};

class b{
    public:
    void speak(){
        cout<<"speaking.."<<endl;
    }
};

class c:public a,public b{
    public:
    void speak1(){
        cout<<"1speaking.."<<endl;
    }
    
};

class d: public c{
    public:

};

int main(){
    c obj;
    obj.bark();
    obj.speak();
    d obj1;
    obj1.speak1();
    return 0;
}