#include<bits/stdc++.h>
using namespace std;

int main() {
  int arr[] = {1,2,3,3,1,5,77,15,77,9,5};
  int length = sizeof(arr) / sizeof(arr[0]); 
  cout << "Length of array is " << length << endl;

  map<int, int> hash;

  for (int i = 0; i < length; i++) {
    hash[arr[i]] = hash[arr[i]] + 1;
  }

  for (auto it: hash) cout << "Frequency of " << it.first << " is " << it.second << endl;
  return 0;
}
