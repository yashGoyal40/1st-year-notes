#include<iostream>
using namespace std ;
int fab(int n){
    if(n<2) return n;
    return fab(n-1)+fab(n-2);
}
int main(){
    cout<<"fabonachi series ";
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int op=fab(n);
    cout<<op;
    return 0;
}