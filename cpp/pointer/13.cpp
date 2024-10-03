#include<iostream>
using namespace std;
int main(){
    int val =5;
    int *ptr = &val;
    int ** ptr1 = &ptr; 
    int *** ptr2= &ptr1; 
    
    cout<<val<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;
    cout<<***ptr2<<endl;

    cout<<ptr2<<endl;
    cout<<&ptr1<<endl;
    // cout<<&(&ptr)<<endl;
    //will not work in this case 

    return 0;
}