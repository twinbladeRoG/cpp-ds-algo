#include<bits/stdc++.h>
using namespace std;

// Time Complexity - O(N^2)
int main() {
  int arr[] = {13, 24, 46, 20, 9, 52};
  int length = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length - i - 1; j++) {
      if (arr[j+1] < arr[j]) swap(arr[j+1], arr[j]);
    }
  }

  for (auto it: arr) cout << it << ", ";
  cout << endl;
  return 0;
}
