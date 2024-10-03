//merge sort 

#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = (s +e)/2;
    int l1 = mid - s +1;
    int l2 = e -mid;

    int *first = new int[l1];
    int *second = new int[l2];

    int k =s;
    for(int i=0;i<l1;i++){
        first[i] = arr[k++];
    }
    for(int i=0;i<l2;i++){
        second[i] = arr[k++];
    }

    //merge 2 sorted arrays 

    int index1 =0;
    int index2 = 0;
    k =s;

    while(index1 < l1 && index2 < l2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }

    while(index1 < l1){
        arr[k++] = first[index1++];
    }

    while(index2 < l2){
        arr[k++] = second[index2++];
    }
}

void ms(int *arr,int st,int end){
    if(st >= end){
        return;
    }

    int mid = (st +end)/2;

    ms(arr,st,mid);

    ms(arr,mid+1,end);

    merge(arr,st,end);

}

int main(){
    int arr[6] = {1,4,3,2,8,9};

    ms(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}