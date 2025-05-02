#include<bits/stdc++.h>
using namespace std;

/**
 * For N = 5
 * Pattern:
 *  *********
 *   *******
 *    *****
 *     ***
 *      *
 *
 *  TC - O(N*2 / 2)
 */
int main() {
  cout << "Enter the value for N: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2*(n - i) - 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}
