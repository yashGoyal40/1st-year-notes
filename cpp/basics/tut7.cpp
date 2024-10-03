#include<iostream>
using namespace std;
int c =45;
int main(){
    //************scope resolution operators******************************
    // int a,b,c;
    // cout<<"enter the value of a:";
    // cin>>a;
    // cout<<"enter the value of b:";
    // cin>>b;
    // c=a+b;
    // cout<<"the sum of a and b is c:"<<c<<endl;
    // cout<<"the global c is:"<<::c<<endl;    // scope resolution operator (::)

    //*****************float , double, long double litrals*************************

    // float d=34.4f;
    // long double e=34.4l;  //l is a long double
    // cout<<"the value of d is:"<<d<<endl<<"the value of e is:"<<e<<endl<<endl;
    // by-default the decimal is taken as a double (34.4 by-default is a double)
    // 34.4f will be a floating point number

    // cout<<"the size of 34.4 : "<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4f : "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4F : "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4l : "<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4L : "<<sizeof(34.4L)<<endl;

    //******************refrence variables****************************
    // yash goyal --------> yash -------> goyal --------> goyal yash
    // float x=455;
    // float & y = x;
    // x=599;
    // cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;

    //****************Typecasting**********************************
    int a=45;
    float b=45.56;
    cout<<"the value of a is : "<<(float)a<<endl;
    cout<<"the value of a is : "<<float(a)<<endl;
    cout<<"the value of b is : "<<(int)b<<endl;
    cout<<"the value of b is : "<<int(b)<<endl;
    int c= int(b);
    
    cout<<"the expression is "<<a+b<<endl;
    cout<<"the expression is "<<a+int(b)<<endl;
    cout<<"the expression is "<<a+(int)b<<endl;

    return 0;
}