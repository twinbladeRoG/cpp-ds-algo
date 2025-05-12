#include<bits/stdc++.h>
using namespace std;

// Time Complexity - O(N^2)
int main() {
  int arr[] = {13, 46, 24, 52, 20, 9};
  int length = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < length - 1; i++) {
    int min = i;

    for (int j = i + 1; j < length; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }

    swap(arr[min], arr[i]);
  }

  for(auto it: arr) cout << it << ", ";
  cout << endl;
  return 0 ;
}
