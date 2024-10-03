#include<iostream>
using namespace std;
int power(int a,int b);
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}
int power(int a,int b){
    int p=1;
    for(int i=0;i<b;i++){
        p*=a;
    }
    return p;
}