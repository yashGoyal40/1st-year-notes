#include<iostream>
using namespace std;
void dummy(int n){
    n++;
    cout<<n<<endl;
}
int main(){
    int n=9;
    cout<<n<<endl;
    dummy(n);
    cout<<n;
}