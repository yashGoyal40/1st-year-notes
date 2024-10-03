#include<iostream>
using namespace std;

int power(int a){
    if (a<1){
        return 1;
    }
    return 2 * power(a-1);
}

int main(){
    int a,b;
    cin>>a;
    b = power(a);
    cout<<b;
    return 0;
}