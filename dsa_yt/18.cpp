#include<iostream>
using namespace std;
int fib(int a){
    if(a==0) return 0;
    if(a<=2) return 1;
    return fib(a-1)+fib(a-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}