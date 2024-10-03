#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number to convert to bianry: ";
    cin>>n;
    int ans=0,power=1;
    while(n!=0){
        ans = power* (n%2) + ans;
        n=n/2;
        power=power*10;
    }
    cout<<ans;

    return 0;
}