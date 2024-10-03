#include<iostream>
using namespace std;
int print_array(int a[],int b);
int main(){
    int a[20]={1,2,3,4,5,6,7};
    int l= sizeof(a)/sizeof(int);
    print_array(a,6);
    cout<<endl;
    //pass by refrence 
    print_array(a,6);
    return 0;
}
int print_array(int a[],int b){
    for(int i=0;i<=b;i++){
        cout<<a[i]<<" ";
    }
    a[3]=14;
    return 0;
}