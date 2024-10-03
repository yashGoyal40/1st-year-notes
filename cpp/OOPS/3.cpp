#include<iostream>
using namespace std;

class man{
    int helath;
    char level;
};

int main(){
    man yash;

    cout<<"health is: "<<yash.helath<<endl;
    cout<<"health is: "<<yash.level<<endl;

    // these are private members 


    //access modifiers : 
    // 1)private 
    // 2)public
    // 3)protected

    //by default the access modifier is private 
    return 0;
}