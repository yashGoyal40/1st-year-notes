#include<iostream>
using namespace std;
int main(){
    int temp=INT32_MIN,l,m;
    int a[11]={23,4,3,87,87,12,9,0,12,5,56};
    for(int i=0;i<=10;i++){
        if(a[i]>=temp){
        temp=a[i];
        l=i;
        }
    }
    int sml=INT32_MAX;
    for(int i=0;i<=10;i++){
        if(a[i]<=sml){
        sml=a[i];
        m=i;
        }
    }
    cout<<temp<<" "<<l+1<<endl;
    cout<<sml<<" "<<m+1<<endl;
    return 0;
}