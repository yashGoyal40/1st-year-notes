// friend class of a class

#include<iostream>

class myclass{

    private:
    int helo;
    public:
    int hi;

    friend class freindclass;
    friend void yash(myclass& temp);
};

class freindclass{
    public:
    myclass * my;
    void helo(){
        my=new myclass;
        my->helo;
    }
};

using namespace std;
int main(){
    

    return 0;
}