#include<bits/stdc++.h>
using namespace std;

int fibo(int n) {
  if (n <= 1) return n;
  int last = fibo(n-1);
  int slast = fibo(n-2);

  return last + slast;
}
int main() {
  int x;
  cout << "Enter a number: " << endl;
  cin >> x;

  cout << fibo(x) << endl;
  return 0;
}
