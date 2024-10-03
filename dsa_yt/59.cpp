#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={1,2,3,5,6,1,3,4};
    int arr1[8];
    memcpy(arr1,arr,sizeof(arr1));
    sort(arr,arr+8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    int m=8;
    for(int k=0;k<8;k++){
        for(int i=0;i<m-1;i++){
            if(arr1[i]>arr1[i+1]){
                swap(arr1[i],arr1[i+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<8;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}