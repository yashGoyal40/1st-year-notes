#include<iostream>
using namespace std;
int main(){
    int arr[30]={0};
    fill(arr,arr+30,3);
    fill_n(arr,5,2);
    cout<<arr[4]<<endl;
    cout<<arr[14];
    return 0;
}