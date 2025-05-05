#include<bits/stdc++.h>
using namespace std;

/**
 *  Time Complexity - O(log10 N + 1)
 */
int bruteForce(int num) {
  int count = 0;
  int n = num;
  while (n != 0) {
    count++;
    n = n / 10;
  }

  return count;
}

/**
 * Time Complexity - O(1)
 */
int optimal(int num) {
  int count = (int)(log10(num) + 1);

  return count;
}

int main() {
  cout << "Enter number: ";
  int x;
  cin >> x;
  
  int count1 = bruteForce(x);
  int count2 = optimal(x);

  cout << "Number of digits: " << count1 << endl;
  cout << "Number of digits: " << count2 << endl;
  return 0;
}
