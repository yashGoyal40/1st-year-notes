// polymorphism ->  compile time 
//    -> run time 

//compile time -> funtion overloading 
//             -> operator overloading 

// runtime - >  overriding 


#include<bits/stdc++.h>
using namespace std;


class a{
    public: 
    virtual void prnt(){
        cout<<"hello";
    }
};

class b:public a{
    public: 
    void prnt() override{
        cout<<"hello b";
    }
};

int main()
{
    
    return 0;
}