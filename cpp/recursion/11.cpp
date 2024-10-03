#include<iostream>
using namespace std;

int power(int b,int a){
    if (a<1){
        return 1;
    }
    return b * power(b,a-1);
}

int main(){
    int a,b,c;
    cin>>b;
    cin>>a;
    c = power(b,a);
    cout<<c;
    return 0;
}