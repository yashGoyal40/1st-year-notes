#include<iostream>
using namespace std;

bool issorted(int *arr,int size){
    if(size <= 1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }

    return issorted(arr+1,size-1);
}

int bins(int *arr,int key,int st,int end){

    if(st>end){
        return -1;
    }
    int mid = (st+end)/2;

    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid] > key){
        return bins(arr,key,st,mid-1);
    }

    else{
        bins(arr,key,mid+1,end);
    }

}


int lins(int *arr,int key,int size){
    if(size <= 0){
        return -1;
    }
    if(arr[0]==key){
        return size;
    }
    return lins(arr+1,key,size-1);
}

int main(){

    int arr[6] = {2,4,6,7,8,9};
    int size = 6;
    int key;
    cin>>key;

    if(issorted(arr,6)){
        int st =0;
        int end = size -1;

        int b = bins(arr,key,st,end);
        cout<<b;
    }
    else{
        int b = lins(arr,key,size);
        if(b==-1){
            cout<<"not found";
            return 0;
        } 
        cout<<size - b;
    }
    return 0;
}