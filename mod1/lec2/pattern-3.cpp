#include<bits/stdc++.h>
using namespace std;

/**
 * For N = 5
 * Pattern:
 *  1
 *  1 2
 *  1 2 3
 *  1 2 3 4
 *  1 2 3 4 5
 *
 *  TC - O(N*2 / 2)
 */
int main() {
  cout << "Enter the value for N: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= i + 1; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}
