
//dangling pointer
#include<iostream>
using namespace std;
int main(){
    int *ptr = new int;
    delete ptr;
    //now ptr is a dangling pointer
    *ptr=10;
    cout<<*ptr;

    cout<<endl<<sizeof(ptr);
    return 0;
}