#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int>& q) {
    stack<int> s;
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        queue<int> q;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            q.push(x);
        }

        reverseQueue(q);

        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }

    return 0;
}
