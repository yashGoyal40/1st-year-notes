#include<iostream>
using namespace std;
char evod(int a);
int main(){
    int a;
    cout<<"enter a number: ";
    cin>>a;
    cout<<evod(a);
    return 0;
}
char evod(int a){
    if((a&1)==1) return 'o';
    else return 'e';
}