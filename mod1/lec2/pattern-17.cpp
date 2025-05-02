#include<bits/stdc++.h>
using namespace std;

/**
 * For N = 5
 * Pattern:
 *    A
 *   ABA
 *  ABCBA
 * ABCDCBA
 *
 *  TC - O(N*2)
 */
int main() {
  cout << "Enter the value for N: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2*i + 1; j++) {
      if (j > i) cout << char(65 + i - j/2);
      else cout << char(65 + j);
    }
    cout << endl;
  }
}
