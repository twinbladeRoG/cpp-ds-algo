#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
  cout << n << endl;
  if (n == 0) return 0;
  return n + sum(n-1);
}

void print(int i, int n) {
  if (i > n) return;
  cout << i << endl;
  print(i+1, n);
}

void printBackTrack(int n) {
  if (n == 0) return;
  printBackTrack(n-1);
  cout << n << endl;
}

int main() {
  cout << "Enter a number:" << endl;
  int x;
  cin >> x;
  // int total = sum(x);
  // cout << total << endl;
  print(1, x);
  cout << endl;
  printBackTrack(x);
  return 0;
}
