#include<iostream>
using namespace std;
void printArray(int arr[],int l){
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void zero1(int arr[],int l){
    int left=0,right=l-1;
    while(left<=right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
int main(){
    int arr[8]={1,1,0,0,0,0,1,0};
    zero1(arr,8);
    printArray(arr,8);
    return 0;
}