#include<bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> m;

  m[1] = 2;
  m.emplace(3, 1);
  m.insert({2, 4});

  for (auto it: m) cout << it.first << " " << it.second << endl;

  return 0;
}
