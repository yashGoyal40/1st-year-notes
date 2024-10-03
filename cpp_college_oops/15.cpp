#include <bits/stdc++.h>
using namespace std; 
vector<string> balancedParantheses(int n)
{
    // Write Your Code here.

    vector<string> result;
    
    function<void(string, int, int)> generate = [&](string current, int open, int close) {
        if (current.size() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n) {
            generate(current + '(', open + 1, close);
        }

        if (close < open) {
            generate(current + ')', open, close + 1);
        }
    };

    generate("", 0, 0);
    
    return result;
}

