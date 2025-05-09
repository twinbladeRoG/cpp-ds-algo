#include<bits/stdc++.h>
using namespace std;

int main() {
  cout << "Enter the number:" << endl;
  int x;
  cin >> x;

  int sum = 0;
  int num = x;
  int count = (int)(log10(num) + 1);

  while(num != 0) {
    int digit = num % 10;
    sum = sum + pow(digit, count);
    num = num / 10;
  }

  string result = sum == x ? "True" : "False";

  cout << "Is Armstrong Number: " << result << endl;
  return 0;
}
