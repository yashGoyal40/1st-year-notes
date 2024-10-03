#include<iostream>
using namespace std;
int main(){
    //bitwise 
    //& and
    //| or
    //~ not 
    // ^ xor 
    int a=4,b=6;
    cout<<" a&b = "<< (a&b)<<endl;
    cout<<" a|b = "<< (a|b)<<endl;
    cout<<" a^b = "<< (a^b)<<endl;
    cout<<" ~b = "<< (~b)<<endl;
    cout<<" ~a = "<< (~a)<<endl;
    //left shift right shift 
    // for +ve padding 0
    // for -ve padding compiler dependent 
    cout << (17>>1)<<endl;
    cout << (17>>2)<<endl;
    cout << (19<<1)<<endl;
    cout << (19<<2)<<endl;
    return 0;
}