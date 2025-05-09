#include<bits/stdc++.h>
using namespace std;

int main() {
  cout << "Enter the number: ";
  int x;
  cin >> x;

  bool isPrime = true;

  for(int i = 2; i <= sqrt(x); i++) {
    if (x % i == 0) {
      isPrime = false;
      break;
    }
  }

  cout << "Is Prime Number " << (isPrime ? "True" : "False") << endl;

  return 0;
}
