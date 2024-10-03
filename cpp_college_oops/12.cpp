#include <bits/stdc++.h>
// using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverseString(str, 0, str.length() - 1);
    cout << "Reversed string: " << str << endl;
    return 0;
}
