#include<iostream>
using namespace std;
int main(){
    int c = 4;
    double a = 4.55;
    double * p= &a;
    int * b= &c;
    cout<<p<<endl<<*p;
    cout<<endl<<sizeof(a)<<endl<<sizeof(p);
    cout<<endl<<sizeof(c)<<endl<<sizeof(b);

    (*b)++;
    cout<<endl<<c;
    //value will be incerased of c 
    
    return 0;
}