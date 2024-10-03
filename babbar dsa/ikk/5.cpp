// You are using GCC
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a,b,ele;
    vector<int> v;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>ele;
        if(count(v.begin(),v.end(),ele)==0){
            v.push_back(ele);
        }
    }
    cin>>b;
    for(int i=0;i<b;i++){
        cin>>ele;
        if(count(v.begin(),v.end(),ele)==0){
            v.push_back(ele);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}