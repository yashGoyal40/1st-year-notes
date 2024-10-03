#include<iostream>
using namespace std;
// void pointer
int main(){
    int a=9;
    void* ptr=&a;
    // cout<<ptr<<endl<<*ptr;
    //it will not work
    cout<<sizeof(ptr)<<endl;

    int * p=(int*)ptr;
    cout<<*p;
    return 0;
}