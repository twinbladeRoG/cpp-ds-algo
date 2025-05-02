#include<bits/stdc++.h>
using namespace std;

/**
 * For N = 5
 * Pattern:
 * E
 * D E
 * C D E
 * B C D E
 * A B C D E
 *
 *  TC - O(N*2)
 */
int main() {
  cout << "Enter the value for N: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = i; j >= 0; j--) {
      cout << char(65 + n - j - 1);
    }
    cout << endl;
  }
}
