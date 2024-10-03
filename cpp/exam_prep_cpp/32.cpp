#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    reverse(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    auto it = find(v.begin(),v.end(),12);
    if(it != v.end())
    v.erase(it);

    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}