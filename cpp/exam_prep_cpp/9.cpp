//freind class/fuction can access private and protected members of a class 

#include<iostream>
using namespace std;



class a{
    private:
    int v;
    public:
    friend int func(a obj);
    friend class fc;
};

class fc{
    public:
    int a;

};



int func(a obj){
    return obj.v;
}

int main()
{
 
    return 0;
}