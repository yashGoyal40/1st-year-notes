#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the ammount: ";
    cin>>n;
    int a = n/100;
    n=n%100;
    int b= n/50;
    n=n%50;
    int c= n/20;
    n=n%20;
    int d=n;
    cout<<endl<<"no of 100 rupee note is: "<<a<<endl<<"no of 50 rupee note is: "<<b<<endl<<"no of 20 rupee note is: "<<c<<endl<<"no of 1 rupee note is: "<<d<<endl;
    return 0;
}