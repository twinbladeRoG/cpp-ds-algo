#include<bits/stdc++.h>
using namespace std;

/**
 * For N = 5
 * Pattern:
 * *        *
 * **      **
 * ***    ***
 * ****  ****
 * **********
 * ****  ****
 * ***    ***
 * **      **
 * *        *
 *
 *  TC - O(N*2)
 */
int main() {
  cout << "Enter the value for N: ";
  int n;
  cin >> n;

  for (int i = 0; i < 2*n-1; i++) {
    int stars = i + 1;
    int spaces = 2 * (n - i - 1);

    if (i > n - 1) {
      stars = 2*n - i - 1;
      spaces = 2*(i - n + 1);
    }
    
    for (int j = 0; j < stars; j++) {
      cout << "*";
    }

    for (int j = 0; j < spaces; j++) {
      cout << " ";
    }

    for (int j = 0; j < stars; j++) {
      cout << "*";
    }

    cout << endl;
  }
}
