#include<iostream>
using namespace std;

class a{
    public: 
    int a;
    virtual void display(){  
    }
};

class b:public a{
    public:
    void display(){
        cout<<"this is class b";
    }
};

int main()
{
    a obj;

    obj.display();

    b obj2;
    obj2.a =10;
    cout<<obj2.a;

    obj2.display();
    
    return 0;
}
