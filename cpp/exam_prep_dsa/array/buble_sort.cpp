#include<bits/stdc++.h>
using namespace std;


void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

// void buble_sort(int* arr,int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }


void buble_sort(int* arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[10]={2,34,5,2,5,9,0,1,88,10};

    print(arr,10);

    buble_sort(arr,10);

    print(arr,10);


 
    return 0;
}