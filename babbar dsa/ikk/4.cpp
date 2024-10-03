// You are using GCC
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,ele;
    vector<int> v;
    cin>>a;
    for(int i=0;i<a;i++){
       cin>>ele;
       v.push_back(ele);
    }
    cin>>b;
    for(int i=0;i<b;i++){
        cin>>ele;
        v.push_back(ele);
    }
    cout<<a+b;
    return 0;
}