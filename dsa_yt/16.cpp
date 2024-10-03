#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"erter n";
    // cin>>n;
    // int i=0;
    // for(;;){
    //     if(i>=n)break;
    //     cout<<i<<endl;
    //     i++;
    // }
    for(int a=0,b=1;a<=9 && b<=10;a++,b++){
        cout <<a<<b<<endl;
    }
    int n,sum=0;
    cout<<"enter an number: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<endl<<sum<<endl;
    return 0;
}