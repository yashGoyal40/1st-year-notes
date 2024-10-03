#include<iostream>
using namespace std;
void print(int * p){
    cout<<p<<endl;
    cout<<*p<<endl;

    p=p+1;

    // will not update because pointer is passed as pass by value 
    //but the  value stored in the coppied pointer is address of the variable so the variable is pass by refrence but not the pointer 

    *p = 8;

    //although in this blockl value of pointer is updated but not in main block

    //so the value of the variable will not change 

    p=p-1;
    *p=10; 

    //now it will change
}

int main(){
    int val = 5;
    int *p = &val;

    print(p);
    cout<<val;
    return 0;
}