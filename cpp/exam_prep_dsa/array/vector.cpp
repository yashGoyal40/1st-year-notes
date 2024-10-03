#include<bits/stdc++.h>
using namespace std;


void test_func(vector<int> &a){
    a.push_back(4);
}

int main()
{

    vector<int>v;
    vector<int> arr(5);

    v.push_back(1);
    arr[0] =2;

    test_func(v);

    for(int i:v){
        cout<<i<<" ";
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    v.pop_back();

    auto it = v.begin() + 3;

    v.erase(it);

    //or

    v.erase(v.begin()+3);

    cout<<v.at(0)<<" "<<v.size();
    

    return 0;
}