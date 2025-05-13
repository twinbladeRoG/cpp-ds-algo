#include<bits/stdc++.h>
using namespace std;

// Time Complexity - O(N^2)
void bubbleSort(int arr[], int length) {
  if (length == 1) return;

  for (int i = 0; i < length - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      swap(arr[i], arr[i+1]);
    }
  }

  bubbleSort(arr, length - 1);
}

int main() {
  int arr[] = {13, 24, 46, 20, 9, 52};
  int length = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, length);

  for (auto it: arr) cout << it << ", ";
  cout << endl;
  return 0;
}
