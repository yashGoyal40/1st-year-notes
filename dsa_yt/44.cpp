#include<iostream>
using namespace std;
int main(){
    int temp=INT32_MIN;
    int a[11]={23,4,3,87,87,12,9,0,12,5,56};
    for(int i=0;i<=10;i++){
        temp=max(temp,a[i]);
        }
    int sml=INT32_MAX;
    for(int i=0;i<=10;i++){
        sml=min(sml,a[i]);
    }
    cout<<"max is: "<<temp<<" "<<endl;
    cout<<"min is: "<<sml<<" "<<endl;
    return 0;
}