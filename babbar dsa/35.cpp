#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"printing the sum of numbers from 1 to n"<<endl;
    cout<<"enter n: ";
    cin>>n; 
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}