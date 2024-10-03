#include<bits/stdc++.h>
using namespace std;


void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

void delete_at_pos(int *arr,int pos,int size){
    for(int i=pos;i<size;i++){
        arr[i] = arr[i+1];
    }

    print(arr,size-1);

}

void delete_the_value(int* arr,int val,int size){
    int pos;
    for(int i=0;i<size;i++){
        if(arr[i] == val){
            pos =i;
            break;
        }
    }

    delete_at_pos(arr,pos,size);

}





int main()
{
    int arr[10]={2,34,5,2,5,9,0,1,88,10};

    print(arr,10);

    delete_at_pos(arr,4,10);

    delete_the_value(arr,0,9);

 
    return 0;
}