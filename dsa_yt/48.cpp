#include<iostream>
using namespace std;
int reverse(int arr[],int len){
    for(int i=0,j=len-1;i<=j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return 0;
}
int main(){
    int a[11]={23,4,3,87,87,12,9,0,12,5,56};
    for(int i=0;i<11;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reverse(a,11);
    for(int i=0;i<11;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}