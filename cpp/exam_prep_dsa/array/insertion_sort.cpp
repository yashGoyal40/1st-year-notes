#include<bits/stdc++.h>
using namespace std;


void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

void insertion_sort(int* arr,int size){

//    for(int i=1;i<size;i++){
//         int temp = arr[i];
//         int j = i-1;
//         while(j>=0 && temp<arr[j]){
//             arr[j+1]= arr[j];
//             j--; 
//         }
//         arr[j+1] = temp;
//    }
    
   for(int i=1;i<size;i++){
    int temp = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]> temp){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
   }
}

int main()
{
    int arr[10]={2,34,5,2,5,9,0,1,88,10};

    print(arr,10);

    insertion_sort(arr,10);

    print(arr,10);


 
    return 0;
}