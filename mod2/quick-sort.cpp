#include<bits/stdc++.h>
using namespace std;

int findPartition(vector<int> &arr, int low, int high) {
  int pivot = low, i = low, j = high;

  while (i < j) {
    while (arr[i] <= arr[pivot] && i <= high) {
       i++;
    }

    while (arr[j] > arr[pivot] && j >= low) {
      j--;
    }

    if (i < j) swap(arr[i], arr[j]);
  }

  swap(arr[pivot], arr[j]);

  return j;
}

void quickSort(vector<int> &arr, int low, int high) {
  if (low < high) {
    int partitionIndex = findPartition(arr, low, high);
    quickSort(arr, low, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, high);
  }
}

int main() {
  vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
  int length = arr.size();

  for (auto it: arr) cout << it << ", ";
  cout << endl;

  quickSort(arr, 0, arr.size() - 1);

  for (auto it: arr) cout << it << ", ";
  cout << endl;
  return 0;
}
