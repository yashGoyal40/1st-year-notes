#include<iostream>
using namespace std;
void update(int arr[],int size){
    cout<<"inside the function"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    arr[2]=159;
}
int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    cout<<endl<<"outside the function "<< " "<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}