#include<iostream>
using namespace std;
int main(){
    int a[12]={2,7};
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    fill(a,a+12,1);
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}