#include<bits/stdc++.h>
using namespace std;

void merge(int*arr,int s,int e){
    int mid = (s+e)/2;
    int l1 = mid - s +1;
    int l2 = e-mid;

    int *first = new int[l1];
    int *second = new int[l2];

    int k =s;

    for(int i=0;i<l1;i++){
        first[i] = arr[k++];
    }
    for(int i=0;i<l2;i++){
        second[i] = arr[k++];
    }

    k=s;

    int index1 =0;
    int index2 = 0;

    while(index1 < l1 && index2 <l2){
        if(first[index1]<second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }

    while(index1 <l1){
        arr[k++] = first[index1++];
    }
    
    while(index2 < l2){
        arr[k++] = second[index2++];
    }


}

void ms(int* arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;

    ms(arr,s,mid);
    ms(arr,mid+1,e);

    merge(arr,s,e);
}

int main()
{
    int arr[8] = {1,3,2,4,5,6,8,7};
    int i=0,j=7;
    ms(arr,i,j);   
    return 0;
}