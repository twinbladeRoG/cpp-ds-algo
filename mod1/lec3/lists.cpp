#include<bits/stdc++.h>
using namespace std;

int main() {
  list<int> ls;

  ls.push_back(2);
  ls.emplace_back(4);
  ls.push_front(5);
  ls.emplace_front(9);

  for(auto it: ls) cout << it << " ";
  cout << endl;

  return 0;
}
