#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr = arr;
    int **ptr1=&ptr;
    cout<<ptr1<<endl;
    //address of ptr 1 
    cout<<ptr<<endl;
    //address of ptr
    cout<<*ptr1<<endl;
    //address of ptr
    cout<<**ptr1<<endl;
    //**(ptr1) -> *(*ptr1) -> *(value at ptr) -> *ptr value 
    cout<<*ptr<<endl;
    
    return 0;
}