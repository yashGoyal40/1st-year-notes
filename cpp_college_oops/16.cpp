#include <bits/stdc++.h> 
using namespace std;
vector<char> firstNonRepeating(string stream) 
{

    vector<char> result;
    vector<int> charCount(26, 0);
    queue<char> nonRepeatingChars;

    for (char c : stream) {
        charCount[c - 'a']++;
        nonRepeatingChars.push(c);

        while (!nonRepeatingChars.empty() && charCount[nonRepeatingChars.front() - 'a'] > 1) {
            nonRepeatingChars.pop();
        }

        if (nonRepeatingChars.empty()) {
            result.push_back(' ');
        } else {
            result.push_back(nonRepeatingChars.front());
        }
    }

    return result;
}