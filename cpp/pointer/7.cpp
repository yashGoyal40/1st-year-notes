#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,22};
    
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;

    cout<<*(arr+1)<<endl;
    cout<<arr[1]<<endl;


    cout<<(*arr)+1<<endl;
    cout<<*arr+1<<endl;

    *arr = *arr +1;
    // arr = arr +1;  
    //can not be done 


    //arr[i] = *(arr+i)
    
    cout<<1[arr]<<endl;
    cout<<*(1+arr)<<endl;

    return 0;
}