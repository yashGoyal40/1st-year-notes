#include<bits/stdc++.h>
using namespace std;

int pivot(int * arr,int st,int end){
    int count = 0;
    int pivot_element = arr[st];
    for(int i=st;i<=end;i++){
        if(arr[i]<pivot_element){
            count++;
        }        
    }

    int pivot_index = count+st;
    swap(arr[st],arr[pivot_index]);

    int i=st,j=end;

    while(i<pivot_index && j>pivot_index){
        while(arr[i]<pivot_element){
            i++;
        }
        while(arr[j]>pivot_element){
            j--;
        }

        if(i<pivot_index && j>pivot_index){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivot_index;

}

void qs(int *arr,int st,int end){

    if(st>=end){
        return;
    }
    int p = pivot(arr,st,end);

    qs(arr,st,p-1);
    qs(arr,p+1,end);
    
}

int main()
{
    int arr[10] = {2,4,5,6,0,9,12,55,33,3};
    qs(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}