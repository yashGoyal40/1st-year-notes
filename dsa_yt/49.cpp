#include<iostream>
using namespace std;
int swapAlter(int a[],int len){
    for(int i=0;i<len-1;i+=2){
        swap(a[i],a[i+1]);
    }
    return 0;
}
int main(){
    int a[12]={23,4,3,87,87,12,9,0,12,5,56,58};
    for(int i=0;i<12;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    swapAlter(a,12);
    for(int i=0;i<12;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}