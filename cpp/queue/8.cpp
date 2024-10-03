#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    priority_queue<int , vector<int> , greater<int>> s;
    s.push(5);
    s.push(3);
    s.push(2);
    s.push(4);
    s.push(1);
    cout<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}