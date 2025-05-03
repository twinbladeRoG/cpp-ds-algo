#include<bits/stdc++.h>

using namespace std;

int main() {
  // Set
  set<int> st;

  st.insert(1);
  st.emplace(2);
  st.insert(4);
  st.insert(3);

  for(auto it: st) cout << it << " ";
  cout << endl;

  st.erase(2);

  for(auto it: st) cout << it << " ";
  cout << endl;

  // Multi Set
  multiset<int> ms;
  ms.insert(2);
  ms.insert(1);
  ms.insert(2);
  ms.insert(4);
  ms.insert(1);

  for(auto it: ms) cout << it << " ";
  cout << endl;

  ms.erase(2);

  for(auto it: ms) cout << it << " ";
  cout << endl;

  // Unordered Set
  unordered_set<int> ust;
  ust.insert(1);
  ust.insert(4);
  ust.insert(2);
  ust.insert(5);

  cout << "Unordered Set" << endl;
  for(auto it: ust) cout << it << " ";
  cout << endl;

  return 0;
}
