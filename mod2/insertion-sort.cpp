#include<bits/stdc++.h>
using namespace std;

// Time Complexity - O(N^2)
int main() {
  int arr[] = {9, 12, 14, 15, 6, 8, 13};
  int length = sizeof(arr) / sizeof(arr[0]);

  for (int i = 1; i < length; i++) {
    int j = i;

    while (j > 0 && arr[j-1] > arr[j]) {
      swap(arr[j-1], arr[j]);
      j--;
    }
  }

  for (auto it: arr) cout << it << ", ";
  cout << endl;
  return 0;
}
