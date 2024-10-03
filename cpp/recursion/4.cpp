#include<iostream>
using namespace std;

int steps(int a,int c){
    if(a>=c){
        return a;
    }

    return steps(a+1,c);
}

int main(){
    int a,b;
    cin>>a;
    int c =0;
    b = steps(c,a);
    cout<<b;

    return 0;
}