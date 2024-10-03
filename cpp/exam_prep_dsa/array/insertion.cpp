#include<bits/stdc++.h>
using namespace std;


void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

void insert_at_pos(int * arr,int key,int pos,int size){
    for(int i=size-1;i>=pos;i--){
        arr[i+1]= arr[i];
    }
    arr[pos] = key;
}

int main()
{
    int arr[11]={2,34,5,2,5,9,0,1,88,10};

    print(arr,10);

    insert_at_pos(arr,100,5,10);

    print(arr,11);

    return 0;
}


