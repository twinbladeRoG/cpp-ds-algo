#include<bits/stdc++.h>
using namespace std;

void allDivisors(int x) {
  int sqrtX = sqrt(x);
  vector<int> divisors;

  for(int i = 1; i <= sqrtX; i++) {
    if (x % i == 0) {
      divisors.push_back(i);

      if (i != x/i) divisors.push_back(x / i);
    }
  }

  for(auto it: divisors) cout << it << ", ";
  cout << endl;
}

int main() {
  set<int> divisors;
  int x;

  cout << "Enter the number: " << endl;
  cin >> x;

  divisors.insert(x);

  int num = x / 2;
  while(num != 0) {
    if (x % num == 0) divisors.insert(num);
    num--;
  }

  for(auto it: divisors) cout << it << ", ";
  cout << endl;

  allDivisors(x);
  return 0;
}
