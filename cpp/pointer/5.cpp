#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    int * p = ptr;
    cout<<*ptr<<endl<<*p;
    return 0;
}