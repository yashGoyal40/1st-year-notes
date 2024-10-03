#include<bits/stdc++.h>
using namespace std;
int main()
{
    //min heap
    vector<int> v = {1,3,4,8,2,5};

    make_heap(v.begin(),v.end(),greater<int>());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // make_heap(v.begin(),v.end(),greater<int>());

    return 0;
}