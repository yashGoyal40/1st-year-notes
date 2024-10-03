#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> a;  //by default max heep (54321) //decending
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    cout<<a.size()<<endl;
    while(!a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }
    return 0;
}