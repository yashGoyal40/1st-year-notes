#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q;  // max heap decending
    q.push(1);
    q.push(3);
    q.push(4);
    q.push(2);

    priority_queue<int,vector<int>,greater<int>> a; //min heap ascending

    a.push(2);
    a.push(3);
    a.push(4);

 
    return 0;
}