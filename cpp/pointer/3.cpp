#include<iostream>
using namespace std;
int main(){
    int i=0;
    int *p=0;
    // cout<<*p<<endl;

    p = &i;
    cout<<*p<<endl;


    int num = 5;
    int a = num;
    a++;
    //num will not change 

    int num1  = 5;
    int * b = &num1;
    cout<<num1<<endl;
    (*b)++;
    cout<<num1;

}