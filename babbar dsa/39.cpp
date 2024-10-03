#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter a number to convert to bianry: ";
    cin>>n;
    int ans =0,power=1;
    while(n!=0){
        int bit = n&1;
        ans = (power*bit)+ans;
        power=power*10;
        n=n>>1;
    }
    cout<<ans;

    return 0;
}