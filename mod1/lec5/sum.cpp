#include<bits/stdc++.h>
using namespace std;

int sum(int i) {
  if (i == 1) return 1;
  return i + sum(i-1);
}

int main() {
  cout << "Enter a number: ";
  int x;
  cin >> x;

  int total = sum(x);
  cout << "Total: " << total << endl;
  return 0;
}
