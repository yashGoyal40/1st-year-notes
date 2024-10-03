//quick sort
#include<iostream>
using namespace std;

int position(int *arr,int s,int e){
    int pivot  = arr[s];
    int count = 0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot) count++;
    }

    int pivot_index = s + count;
    swap(arr[pivot_index],arr[s]);

    int i=s,j=e;

    while(i<pivot_index && j> pivot_index){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivot_index && j> pivot_index){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivot_index;

}

void qs(int *arr,int s,int e){
    if(s < e){
        
    int p = position(arr,s,e);


    qs(arr,s,p-1);
    qs(arr,p+1,e);
    }
}

int main()
{
    int arr[7] = {1,3,4,2,8,6,5};
    qs(arr,0,6);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}