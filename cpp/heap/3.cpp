//heapify

// (n/2 +1) to n [leaf nodes]

// so process 1 to  n/2
// check wether node is a heap rest recursion 


#include<bits/stdc++.h>
using namespace std;

void heapify(int*arr, int size ,int i){

    int largest =i;
    int left = 2*i;
    int right = 2*i +1;

    if(left <= size && arr[largest] < arr[left]){
        largest  = left;
    }
    if(right <= size && arr[largest] < arr[right]){
        largest  = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,size,largest);
    }
}

int main()
{
    int arr[6] = {-1,54,55,53,52,50};
    int n =5;

    for(int i=n/2; i>0;i--){
        heapify(arr,n,i);
    }

    for(int i=1;i<=n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
 
    return 0;
}

