#include<iostream>
using namespace std;
float ncr(int n,int r);
int fact(int a);
int main(){
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}
int fact(int a){
    if(a==0)return 1;
    if(a<=2)return a;
    return a*fact(a-1);
}
float ncr(int n,int r){
    float d;
    d=static_cast<float>(fact(n)/(fact(r)*fact(n-r)));
    return d;
}