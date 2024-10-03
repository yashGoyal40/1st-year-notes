#include<bits/stdc++.h>
using namespace std;



int main()
{
    //max heap
    vector<int> v = {1,3,4,8,2,5};

    make_heap(v.begin(),v.end());

    cout<<is_heap(v.begin(),v.end())<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort_heap(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

 
    return 0;
}