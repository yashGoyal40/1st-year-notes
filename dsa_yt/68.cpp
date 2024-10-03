#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>abc;
    abc.push_back(3);
    abc.push_back(5);
    abc.emplace_back(6);
    for(int i:abc){
    cout<<i<<" ";}
    return 0;
}