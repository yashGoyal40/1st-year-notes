#include<iostream>
using namespace std;
int main(){
    int a,i=2,c=0;
    cout<<"enter a number: ";
    cin>>a;
    while(i*i<=a){
        if(a%i==0){
            c=1;
            cout<<"this is not a prime no"<<endl;
            break;
        }
        i++;
    }
    if(c==0){
    cout<<"this is a prime number";
    }
    return 0;
}