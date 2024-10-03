#include<iostream>
using namespace std;
bool prime(int n);
int main(){
    int a;
    cin>>a;
    cout<<prime(a);
    return 0;
}
bool prime(int n){
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}