#include<bits/stdc++.h>
using namespace std;

void merge(int * arr,int st,int end){
    int mid = (st+end)/2;
    int l1 = mid-st+1;
    int l2 = end -mid;

    int * first = new int[l1];
    int * second = new int[l2];

    int k = st;
    for(int i=0;i<l1;i++){
        first[i] = arr[k++];
    }
    for(int i=0;i<l2;i++){
        second[i] = arr[k++];
    }

    int index1 =0;
    int index2= 0;
    k=st;

    while(l1>index1 && l2 > index2){
        if(first[index1]>second[index2]){
            arr[k++] = second[index2++];
        }
        else{
            arr[k++] =  first[index1++];
        }
    }

    while(index1 < l1){
        arr[k++] =  first[index1++];
    }

    while(index2 <l2){
        arr[k++] = second[index2++];
    }
}

void ms(int * arr,int st,int end){
    if(st>=end){
        return;
    }

    int mid = (st+end)/2;

    ms(arr,st,mid);
    ms(arr,mid+1,end);
    merge(arr,st,end);
}

int main()
{
    int arr[10] = {2,4,5,6,0,9,12,55,33,3};
    ms(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}