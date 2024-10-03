#include<iostream>
#include<algorithm>
using namespace std;
void linearSearch(int arr[],int n,int key){
        for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<"key not found"<<endl;
    //time complexity O(n)
}

void binarySearch(int arr[],int n,int key){
    //binary search 
    // elemens should be sorted
    int lo=0,hi=n-1,mid=lo+(hi-lo)/2;
    while(lo<=hi){
    if(key<arr[mid]){
        hi=mid-1;
        mid=lo+(hi-lo)/2;
    }
    if(key>arr[mid]){
        lo=mid+1;
        mid=lo+(hi-lo)/2;
    }
    else{
        cout<<mid<<endl;
        return;
    }}
    cout<<"key not found";
    return;
    //time complexity O(log n)
}


int main(){
    int arr[3]={1,3};
    // sort(arr,arr+);
    int key =3;
    // linearSearch(arr,11,key);
    binarySearch(arr,2,key);
}