#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {0,1,2,3,4,5};
    
    reverse(v.begin(),v.end());
    for(int i=0;i<6;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}