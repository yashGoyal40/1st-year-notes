#include<bits/stdc++.h>

void heapify(int * arr,int size,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i + 2;

    if(left < size && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < size && arr[largest] < arr[right] ){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,size,largest);
    }


}

using namespace std;
int main()
{
    int arr[5] = {23,54,6,12,40};
    int n = 5;
    for(int i =n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }

    return 0;
}