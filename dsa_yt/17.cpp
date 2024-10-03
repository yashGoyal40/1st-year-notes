#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c=a+b,l;
    cout <<"enter the number of times: ";
    cin>>l;
    cout<<a<<endl<<b<<endl<<c<<endl;
    for(int i=0;i<l-3;i++){
        a=b;
        b=c;
        c=a+b;
        cout<<c<<endl;

    }
    return 0;
}