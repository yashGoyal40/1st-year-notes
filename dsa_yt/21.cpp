#include<iostream>
using namespace std;

int main(){
    int n,arr[32];
    cin>>n;
    int i=0;
    while(n!=0){
        int bit = (n&1);
        arr[i]=bit;
        n=n>>1;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<arr[j];
    }
    return 0;
}