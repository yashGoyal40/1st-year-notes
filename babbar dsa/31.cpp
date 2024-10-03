#include<iostream>
using namespace std;
int main(){
    //bit wise operator 
    /*
    and : &
    or : |
    not : ~
    xor : ^
    */ 
    //not operator invert all the bits so first will be negative then we will tak its 2's compliment 
    cout<<~5<<endl;
    //-6
    int a=4 , b= 6;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;

    return 0;
}