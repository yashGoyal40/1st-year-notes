//fabonachii

#include<iostream>
using namespace std;

int fab(int a){
    if(a <=1){
        return a;
    }
    return fab(a-1) + fab(a-2);
} 

int main(){
    int a;
    cin>>a;
    int b =fab(a);
    cout<<b;
    return 0;
}