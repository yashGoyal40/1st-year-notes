#include<iostream>
using namespace std;
void printArray(int arr[],int l){
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void zero12(int arr[], int l) {
    int lo = 0, mid = 0, hi = l - 1;
    while (mid <= hi) {
        switch (arr[mid]) {
            case 0:
                swap(arr[mid], arr[lo]);
                lo++;mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[hi]);
                hi--;
                break;
        }
    }
}

int main(){
    int arr[10]={1,1,1,0,2,2,1,0,2,0};
    zero12(arr,10);
    printArray(arr,10);
    return 0;
}