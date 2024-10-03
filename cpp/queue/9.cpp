#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<string> s1;  //descending
    priority_queue<string,vector<string> , greater<string>>s2;  //assending 

    s1.push("yash");
    s1.push("goyal");

    s2.push("yash");
    s2.push("goyal");

    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }

    return 0;
}