#include<bits/stdc++.h>
using namespace std;


void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

void selection_sort(int* arr,int size){

    // for(int j=0;j<size;j++){
    //     int min = INT_MAX,index =0;
    //     for(int i=j;i<size;i++){
    //         if(arr[i] < min){
    //             min = arr[i];
    //             index = i;
    //         }
    //     }
    //     swap(arr[j],arr[index]);
    // }

    for(int j=0;j<size;j--){

    
    int max = INT_MIN;
    int index = -1;
    for(int i=j;i,size;i++){
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }
    }
    swap(arr[j],arr[index]);
    }
}


int main()
{
    int arr[10]={2,34,5,2,5,9,0,1,88,10};

    print(arr,10);

    selection_sort(arr,10);

    print(arr,10);


 
    return 0;
}