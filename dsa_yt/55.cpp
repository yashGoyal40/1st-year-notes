//stl
#include<bits/stdc++.h>//all included
#include<utility>//pair
using namespace std;
//algorithms
//containers
//itrators
//functions
int main(){
   //pairs
    pair <int,int> p = {1,2};
    cout<<p.first<<" "<<p.second;
    pair <int, pair <int, int>> m = {1,{1,2}};
    cout<<endl<<m.first<<" "<<m.second.first<<" "<<m.second.second;
    pair <int,int> arr[]={{1,2},{2,3},{4,5},{5,6}};
    arr[0].first=1;
    arr[0].second=2;
    return 0;
}