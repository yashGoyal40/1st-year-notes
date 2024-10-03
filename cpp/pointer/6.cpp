#include<iostream>
using namespace std;
int main(){
    int a = 9;
    int *t = &a;
    *t = *t +1;
    // *t is value at t
    cout<<*t<<endl;
    t = t+1;
    //points a random/next integer 
    cout<<*t;
    int arr[]= {1,2,3,4};
    int * ptr = arr;
    cout<<endl<<*(ptr+1)<<endl;

    return 0;
}