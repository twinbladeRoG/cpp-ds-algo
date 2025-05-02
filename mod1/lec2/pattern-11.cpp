#include<bits/stdc++.h>
using namespace std;

/**
 * For N = 5
 * Pattern:
 *  1
 *  0 1
 *  1 0 1
 *  0 1 0 1
 *  1 0 1 0 1
 *
 *  TC - O(N*2)
 */
int main() {
  cout << "Enter the value for N: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << (i + j + 1) % 2 << " ";
    }
    cout << endl;
  }
}
