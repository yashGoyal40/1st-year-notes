#include<bits/stdc++.h>
using namespace std;

//stack

// LIFO last in first out 

int main()
{

    stack<int> stk;
    stk.push(10);
    // stk.pop();
    cout<<stk.top();

    cout<<stk.size();
    cout<<stk.empty();

    
    return 0;
}