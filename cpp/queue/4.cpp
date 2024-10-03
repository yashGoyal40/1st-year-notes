//doublly ended queue 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.pop_front();
    dq.pop_back();
    cout<<dq.front();
    cout<<dq.back();
    return 0;
}
