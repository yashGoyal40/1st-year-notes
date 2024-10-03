#include<iostream>
using namespace std;
int uniqueOccurrences(int arr[],int size) {
    int arr1[size];
    int count=0;
    for(int i=0;i<size;i++){
        int temp = arr[i];
        count = 0;
        for(int j=0;j<size;j++){
            if(temp==arr[j])count++;
        }
        arr1[i]=count;
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if((arr1[j]==arr1[i])&&(arr[j]!=arr[i])){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int a[10]={2,3,4,4,4,3,3,4,2,13};
    int l = uniqueOccurrences(a,10);
    cout<<l;
    return 0;
}
