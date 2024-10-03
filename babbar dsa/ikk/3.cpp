// You are using GCC
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a,b,ele;
    vector<int> v;
    cin>>a;
    cin>>b;
    for(int i=0;i<a;i++){
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<b;i++){
        cin>>ele;
        v.push_back(ele);
    }
    sort(v.begin(),v.end());
    if((a+b)%2==0){
        int mid=(a+b) / 2;
        float ans = ((v[mid] + v[mid-1])/2.0);
        cout<<ans;
    }
    else{
        int ans = v[(a+b) / 2];
        cout<<ans;
    }
    return 0;
}