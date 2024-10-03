#include<iostream>
using namespace std;

class man{
    public:
    int helath;
    char level;
    private:
    int height;
    //can be accessed inside the class only 
    void print(){
        cout<<height<<endl;
    }

};

int main(){
    man yash;
    yash.helath=100;
    yash.level='A';

    cout<<"health is: "<<yash.helath<<endl;
    cout<<"level is: "<<yash.level<<endl;

    return 0;
}