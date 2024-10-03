//buble sort 

#include<iostream>
using namespace std;

void s1(int *arr,int size){

    if(size<=1){
        return;
    }
    
    if(arr[0]>arr[1]){
        swap(arr[0],arr[1]);
    }

    s1(arr+1,size-1);
}
void bs(int *arr,int size){

    if(size<=1){
        return;
    }

    s1(arr,size);

    bs(arr,size-1);
}



int main(){
    int arr[6] = {1,4,3,2,8,9};
    bs(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}