#include<bits/stdc++.h>
using namespace std;


void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}


void reverse(int*arr,int size){
    int i=0,j=size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main()
{
    int arr[10]={2,34,5,2,5,9,0,1,88,10};

    print(arr,10);

    reverse(arr,10);

    print(arr,10);


 
    return 0;
}