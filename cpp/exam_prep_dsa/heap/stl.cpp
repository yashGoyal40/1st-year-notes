#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1,3,5,7};

    make_heap(v.begin(),v.end(),greater<int>());

    

    for(int i:v){
        cout<<i<<" ";
    }

    queue<int> q;
    q.push(10);
    q.pop();
    q.front();
    q.back();

    return 0;
}