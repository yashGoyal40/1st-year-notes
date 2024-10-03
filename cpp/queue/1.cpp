#include<bits/stdc++.h>
using namespace std;

//queue first in first out (FIFO)

//rear -  push rear 
//front - pop front


int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(3);
    cout<<q.back();
    return 0;
}