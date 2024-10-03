#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    stack<char> s;
    for(char i: a){
        s.push(i);
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }

    return 0;
}