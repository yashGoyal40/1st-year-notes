#include <string>
#include <iostream>
#include <vector>
#include <map>

using std::map;
using std::vector;
using std::string;

typedef map<char, int> edges;
typedef vector<edges> trie;

trie build_trie(vector<string> & patterns) {
  trie t;
  // Initialize the trie with a single root node
  t.push_back(edges());
  int node_count = 1;

  // Iterate through each pattern in the collection
  for (const string &pattern : patterns) {
    int current_node = 0; // Start at the root node

    // Traverse the trie based on the current pattern
    for (char symbol : pattern) {
      if (t[current_node].find(symbol) != t[current_node].end()) {
        // If the symbol exists in the current node's edges, move to the next node
        current_node = t[current_node][symbol];
      } else {
        // If the symbol doesn't exist, create a new node and add an edge
        t.push_back(edges());
        t[current_node][symbol] = node_count;
        current_node = node_count;
        node_count++;
      }
    }
  }

  return t;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<string> patterns;
  for (size_t i = 0; i < n; i++) {
    string s;
    std::cin >> s;
    patterns.push_back(s);
  }

  trie t = build_trie(patterns);
  for (size_t i = 0; i < t.size(); ++i) {
    for (const auto & j : t[i]) {
      std::cout << i << "->" << j.second << ":" << j.first << "\n";
    }
  }

  return 0;
}
