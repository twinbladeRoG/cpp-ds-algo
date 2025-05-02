#include<bits/stdc++.h>
using namespace std;

/**
 * For N = 5
 * Pattern:
 *  *
 *  **
 *  ***
 *  ****
 *  *****
 *  ****
 *  ***
 *  **
 *  *
 *
 *  TC - O(N*2)
 */
int main() {
  cout << "Enter the value for N: ";
  int n;
  cin >> n;

  for (int i = 1; i <= 2*n - 1; i++) {
    int stars = i;

    if (i > n)
      stars = 2*n - i;

    for (int j = 0; j < stars; j++) {
      cout << "*";
    }
    cout << endl;
  }
}
