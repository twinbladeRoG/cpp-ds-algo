#include<bits/stdc++.h>
using namespace std;

int main() {
  int arr[] = {1,2,3,3,1,5,77,15,77,9,5};
  int length = sizeof(arr) / sizeof(arr[0]); 
  cout << "Length of array is " << length << endl;

  unordered_map<int, int> hash;

  for (int i = 0; i < length; i++) {
    hash[arr[i]] = hash[arr[i]] + 1;
  }
 
  auto itr = hash.begin();

  pair<int, int> highest = {itr->first, itr->second};
  pair<int, int> lowest = {itr->first, itr->second};
  
  for (auto it: hash) cout << "Frequency of " << it.first << " is " << it.second << endl;
  
  for (auto it: hash) {
    if (it.second > highest.second) {
      highest = {it.first, it.second};
    }

    if (it.second < lowest.second) {
      lowest = {it.first, it.second};
    }
  }

  cout << "Number with the HIGHEST frequency is " << highest.first << " with a frequency of " << highest.second << endl;
  cout << "Number with the LOWEST frequency is " << lowest.first << " with a frequency of " << lowest.second << endl;
  
  return 0;
}
