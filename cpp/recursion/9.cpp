#include<iostream>
using namespace std;

int sum(int *arr,int s){
    if(s<1){
        return 0;
    }

    return arr[0] + sum(arr+1,s-1);
}

int main(){
    int arr[5] = {1,3,5,6,3};
    int size = 5;

    int s = sum(arr,size);
    cout<<s;
    return 0;
}