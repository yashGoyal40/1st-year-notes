#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number: ";
    cin>> a;
    if(a==2){cout<<a<<" is prime";return 0;}
    if(a==1||a==0){cout<<a<<" is not a prime";return 0;}
    int i=2,c=-1;

    while(i<a){
        if(a%i==0){
            cout<<a<<" is not prime";
            c=0;
            return 0; 
       }
    }
    if(c==-1){
    cout<<a<<" is prime";}
    return 0;
}