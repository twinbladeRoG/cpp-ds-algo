#include<bits/stdc++.h>
using namespace std;

/**
 * For N = 5
 * Pattern:
 *  1 2 3 4 5
 *  1 2 3 4
 *  1 2 3
 *  1 2
 *  1
 *
 *  TC - O(N*2 / 2)
 */
int main() {
  cout << "Enter the value for N: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= n - i; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}
