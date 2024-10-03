#include<iostream>
#include<string>
#include<vector>
using namespace std;

void reverse(vector<int>& v, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(v[start], v[end]);
    reverse(v, start + 1, end - 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    reverse(v, 0, v.size() - 1);
    for (int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
