#include<bits/stdc++.h>
using namespace std;

/**
 * For N = 5
 * Pattern:
 *      *
 *     ***
 *    *****
 *   *******
 *  *********
 *  *********
 *   *******
 *    *****
 *     ***
 *      *
 *
 *  TC - O(N*2)
 */
int main() {
  cout << "Enter the value for N: ";
  int n;
  cin >> n;

  for (int i = 0; i < n * 2; i++) {
    if (i < n) {
      for (int j = 0; j < n - i - 1; j++) {
        cout << " ";
      }
      for (int j = 0; j < 2*i + 1; j++) {
        cout << "*";
      }
    } else {
      for (int j = 0; j < i - n; j++) {
        cout << " ";
      }
      for (int j = 0; j < 2*(n - (i-n)) - 1; j++) {
        cout << "*";
      }
    }
    cout << endl;
  }
}
