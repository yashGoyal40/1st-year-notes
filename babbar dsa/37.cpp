#include<iostream>
using namespace std;
int primeNo(int n){
    if(n<=1)return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cout<<"enter a number to check the prime: ";
    cin>>n;
    cout<<primeNo(n);
    return 0;
}