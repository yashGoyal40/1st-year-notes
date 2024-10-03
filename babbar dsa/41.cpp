#include<iostream>
#include<alg
using namespace std;
int main(){
    int n;
    cout<<"enter a binary number to convert to bianry: ";
    cin>>n;
    int power=1,ans=0;
    while(n!=0){
        ans = (n%10)*power +ans;
        n=n/10;
        power=power*2;
    }

    cout<<ans;
    return 0;
}