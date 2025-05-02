#include<bits/stdc++.h>
using namespace std;

/**
 * For N = 5
 * Pattern:
 * A
 * BB
 * CCC
 * DDDD
 * EEEEE
 *
 *  TC - O(N*2)
 */
int main() {
  cout << "Enter the value for N: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << char(65 + i);
    }
    cout << endl;
  }
}
