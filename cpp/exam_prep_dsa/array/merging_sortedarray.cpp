#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr1[5] = {1,2,3,4,6};
    int arr2[3] = {5,8,10};

    int arr[8];

    int l1 = 5;
    int l2 = 3;
    int index1=0,index2=0;
    int index = 0;

    while(l1>index1 && l2 >index2){
        if(arr1[index1]>arr2[index2]){
            arr[index++] = arr2[index2++];
        }
        else{
            arr[index++] = arr1[index1++];
        }
    }

    while(l1>index1){
        arr[index++] = arr1[index1++];
    }
    while(l2>index2){
        arr[index++] = arr2[index2++];
    }

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
 
    return 0;
}