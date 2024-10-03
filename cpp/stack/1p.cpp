#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.pop();
    s.push(2);
    cout<<s.top();
    s.pop();
    cout<<s.empty();

    return 0;
}