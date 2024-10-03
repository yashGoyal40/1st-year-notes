#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3};
    // int arr[2][3]={{1,2,3},{1,2,3}};

    // int *p = arr;
    int *p = &arr[0];
    // int *p = &0[arr];

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(p)<<endl;

    cout<<sizeof(*arr)<<endl;
    
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<arr<<endl;

    cout<<p<<endl; //address that pointer is storing 
    cout<<&p<<endl; //address of a pointer
    
    // arr = arr +1;  error 

    p=p+2;
    cout<<*p;

    



    return 0;
}