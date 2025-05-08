#include<bits/stdc++.h>
using namespace std;

int gcdUsingEuclidean(int x, int y) {
  cout << x << " : " << y << endl;
  if (x == 0) return y;
  if (y == 0) return x;
  if (x > y) return gcdUsingEuclidean(x % y, y);
  else return gcdUsingEuclidean(x, y % x);
}

int main() {
  int x, y;
  cout << "Enter the first number:" << endl;
  cin >> x;
  cout << "Enter the second number:" << endl;
  cin >> y;

  int gcd;
  int itr = min(x,y);

  while (itr != 1) {
    if (x % itr == 0 && y % itr == 0) {
      gcd = itr;
      break;
    }
    itr--;
  }

  cout << "GCD of " << x << ", " << y << " is " << gcd << endl;

  int gcd2 = gcdUsingEuclidean(x, y);

  cout << "GCD of " << x << ", " << y << " is " << gcd << endl;
  return 0;
}
