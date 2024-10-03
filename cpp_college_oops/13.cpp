#include <bits/stdc++.h> 
using namespace std;
queue<int> reverseElements(queue<int> q, int k) {
    if (k <= 0 || k > q.size()) {
        return q;
    }

    stack<int> stk;

    for (int i = 0; i < k; i++) {
        stk.push(q.front());
        q.pop();
    }

    while (!stk.empty()) {
        q.push(stk.top());
        stk.pop();
    }

    for (int i = 0; i < q.size() - k; i++) {
        q.push(q.front());
        q.pop();
    }

    return q;
}
