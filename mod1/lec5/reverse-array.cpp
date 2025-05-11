#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end) {
  if (start < end) {
    swap(arr[start], arr[end]);
    reverse(arr, start+1, end-1);
  }
}

int main() {
  int arr[] = {10,20,30,40,50};
  reverse(arr, 0, 4);

  for (int i = 0; i < 5; i++) cout << arr[i] << " ";
  cout << endl;
  return 0;
}
