//types of inheritance

// single inheritance one to one 

// multiple -> derived calss is derived from more that one class 

//multi-level -> a->b->c

//hairarical -> tree 

#include<bits/stdc++.h>
using namespace std;

class a{
    public: 
    void display(){
        cout<<"papa class";
    }
};

class b:protected a{

};

class c:protected a{

};


class d:protected b{

};

class e: protected c{

};

int main()
{
    
    return 0;
}