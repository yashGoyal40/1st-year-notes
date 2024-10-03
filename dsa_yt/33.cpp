#include<iostream>
using namespace std;
void count(int n);
int main(){
    int n;
    cin>>n;
    count(n);
    return 0;
}
void count(int n){
    for(int i=0;i<=n;i++){
        cout<<i<<endl;
    }
}