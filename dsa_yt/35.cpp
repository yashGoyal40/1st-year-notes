#include<iostream>
using namespace std;
int total(int a);
int main(){
    int a,b;
    cin>>a>>b;
    cout<<(total(a)+total(b));
    return 0;
}
int total(int a){
    int count=0;
    while(a!=0){
        if(a&1)count++;
        a=a>>1;
    }
    return count;
}