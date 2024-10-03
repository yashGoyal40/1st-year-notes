#include<bits/stdc++.h>
using namespace std;
class B{
    public:
    virtual void display(){
        cout<<"helllo";
    }
}

class C:public B{
    public:
    void display() override{
        cout<<"hiii"
    }
}
int main()
{
    
    return 0;
}