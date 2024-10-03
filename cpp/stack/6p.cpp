#include<bits/stdc++.h>
using namespace std;

void push_at_bottom(stack<char> &s,char ele){

    if(s.empty()){
        s.push(ele);
        return;
    }

    char ele2 = s.top();
    s.pop();

    push_at_bottom(s,ele);

    s.push(ele2);

}

void reverse(stack<char> &s){
    if(s.empty()){
        return;
    }
    char ele = s.top();
    s.pop();
    reverse(s);
    push_at_bottom(s,ele); 
}

int main()
{
    string a;
    cin>>a;
    stack<char> s;
    for(char i: a){
        s.push(i);
    }
    reverse(s);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}