#include<bits/stdc++.h>
using namespace std;

class myclass{
    private:
    int n;
    public:
    myclass(){
        cout<<"this is a constructor\n";
    }
    myclass(int n){
        this->n = n;
    }
    ~myclass(){
        cout<<"this is a destructor\n";
    }

    myclass(myclass &obj){
        this->n = obj.n;
    }

    myclass(int data): n(data){}
};
int main()
{

    myclass obj(9);
    myclass obj2;

    obj2 = obj;

 
    return 0;
}