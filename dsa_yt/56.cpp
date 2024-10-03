//vectors
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);//enter an element 
    v.emplace_back(2);//does do the same 
    //emplace back is faster
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    cout<<vec[1].first;
    vector<int> v1(5,100);
    vector<int>v2(5);
    cout<<endl<<v1[0];
    cout<<endl<<v2[0];
    vector<int> v3(v1);
    return 0;
}