#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v;

  // Inserts 1 into the vector
  v.push_back(1);
  // Increase the size of the vector and adds 2
  v.emplace_back(2);

  cout << v[0] << " " << v.at(1) << endl;

  vector<pair<int, int>> v1;

  v1.push_back({2,3});
  v1.emplace_back(1,2);

  // Contains of size 5, with elements as 100
  // v - {100, 100, 100, 100, 100}
  vector<int> v2(5, 100);

  for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
    cout << *(it) << " ";
  }
  cout << endl;

  for (auto it = v2.begin(); it != v2.end(); it++) {
    cout << *(it) << " ";
  }
  cout << endl;

  vector<int> v3;
  v3.emplace_back(10);
  v3.emplace_back(20);
  v3.emplace_back(30);
  v3.emplace_back(40);
  v3.emplace_back(50);

  for (auto it: v3) cout << it << " ";
  cout << endl;

  v3.erase(v3.begin() + 1, v3.begin() + 3);

  for (auto it : v3) {
    cout << it << " ";
  }
  cout << endl;

  v3.insert(v3.begin() + 1, 90);

  for (auto it : v3) cout << it << " ";
  cout << endl;

  return 0;
}
