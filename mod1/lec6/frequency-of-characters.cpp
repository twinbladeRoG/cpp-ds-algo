#include<bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cout << "Enter your string:" << endl;
  getline(cin, str);
  cout << "Your entered string: " << str << endl;

  map<char, int> hash;

  for(int i = 0; i < str.size(); i++) {
    hash[str[i]] = hash[str[i]] + 1;
  }

  for(auto it: hash) cout << "Frequency of " << it.first << " is " << it.second << endl;

  return 0;
}
