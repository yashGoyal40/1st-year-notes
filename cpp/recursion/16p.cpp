#include<bits/stdc++.h>
using namespace std;

int position(int*arr,int s,int e){
    int pivot = arr[s];
    int count = 0;

    for(int i=0;i<-e;i++){
        if(arr[i] < pivot){
            count ++;
        }
    }
    int pivot_index = s+count;
    swap(arr[pivot_index],arr[s]);

    int i=s,j=e;

    while(i<pivot_index && j>pivot_index){
        if(arr[i]<pivot){
            i++;
        }
        if(arr[j]>pivot){
            j--;
        }
        if(i<pivot_index && j>pivot_index){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivot_index;


}

void qs(int * arr,int i,int j){
    if(i<j){
        int p = position(arr,i,j);

        qs(arr,i,p-1);
        qs(arr,p+1,j);


    }   
}

int main()
{
    
    int arr[8] = {1,3,2,4,5,6,8,7};

    int i=0,j =7;
    qs(arr,i,j);   
    return 0;
}
