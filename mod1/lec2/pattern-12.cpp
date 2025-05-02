#include<bits/stdc++.h>
using namespace std;

/**
 * For N = 5
 * Pattern:
 *  1        1
 *  12      21
 *  123    321
 *  1234  4321
 *  1234554321
 *
 *  TC - O(N*2)
 */
int main() {
  cout << "Enter the value for N: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << j+1;
    }
    for (int j = 0; j < 2*(n - i) - 2; j++) {
      cout << " ";
    }
    for (int j = i+1; j > 0; j--) {
      cout << j;
    }
    cout << endl;
  }
}
