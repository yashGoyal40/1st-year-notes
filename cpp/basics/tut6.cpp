#include<iostream>
// #include"this.h"  --this will give error if this.h is not in the current directory
using namespace std;
/* There Are Two Types Of Header files 
1. system header files (comes with the compiler)
2. user defined header files (written by the programmer)
*/
int main(){
    int a=4, b=5;
    cout<<"operators in C++:"<<endl<<endl;
    cout<<"following are the Arithmatic operators in c++"<<endl;
    // Aritmatic operators
    cout<<"The value of a+b is :"<<a+b<<endl;
    cout<<"The value of a-b is :"<<a-b<<endl;
    cout<<"The value of a*b is :"<<a*b<<endl;
    cout<<"The value of a/b is :"<<a/b<<endl;
    cout<<"The value of a%b is :"<<a%b<<endl; // a=4
    cout<<"The value of a++ is :"<<a++<<endl; // a=5  -- print 4
    cout<<"The value of a-- is :"<<a--<<endl; // a=4  -- print 5
    cout<<"The value of ++a is :"<<++a<<endl; // a=5  -- print 5
    cout<<"The value of --a is :"<<--a<<endl<<endl; // a=4  -- print 4

    //Asignment Operator 

    // int a=3,b=9;
    // char c='a';
    // bool d=true;

    // Comparision Operators
    cout<<"following are the Comparision operators in C++"<<endl;
    cout<<"the value of a == b is:"<<(a==b)<<endl;
    cout<<"the value of a != b is:"<<(a!=b)<<endl;
    cout<<"the value of a < b is:"<<(a<b)<<endl;
    cout<<"the value of a > b is:"<<(a>b)<<endl;
    cout<<"the value of a >= b is:"<<(a>=b)<<endl;
    cout<<"the value of a <= b is:"<<(a<=b)<<endl<<endl;

    // logical Operators
    cout<<"following are the Logical operators in C++"<<endl;
    cout<<"the value of a==b and a<b is:"<<((a==b) && (a<b))<<endl;
    cout<<"the value of a==b or a<b is:"<<((a==b) || (a<b))<<endl;
    cout<<"the value of not a==b is:6"<<(!(a==b))<<endl;

    //Bitwise operator 
    return 0;
}
