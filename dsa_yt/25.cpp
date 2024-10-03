#include<iostream>
using namespace std;
int main(){
    int n=17;
     if(n<=0){
           cout<<false;
        }
    bool ans = ((n)&(n-1))==0;
    cout<<ans;
}