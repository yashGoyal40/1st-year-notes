// You are using GCC
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,m,ele;
    vector <int> a;
    vector <int> b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>ele;
        a.push_back(ele);
    }
    
    for(int i=0;i<a.size();i++){
        if(count(b.begin(),b.end(),a.at(i))==0){
            b.push_back(a[i]);
        }
    }
    sort(b.begin(),b.end());
    
    
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
        if(i==n-1){
            cout<<endl;
        }
    }
}