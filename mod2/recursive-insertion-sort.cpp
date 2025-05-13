#include<bits/stdc++.h>
using namespace std;

// Time Complexity - O(N^2)
void insertionSort(int arr[], int length, int i) {
  if (i == length - 1) return;

  int j = i;
  
  while(j > 0 && arr[j - 1] > arr[j]) {
    swap(arr[j-1], arr[j]);
    j--;
  }

  insertionSort(arr, length, i+1);
}

int main() {
  int arr[] = {9, 12, 14, 15, 6, 8, 13};
  int length = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, length, 1);

  for (auto it: arr) cout << it << ", ";
  cout << endl;
  return 0;
}
