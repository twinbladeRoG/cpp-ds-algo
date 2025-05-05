#include<bits/stdc++.h>
using namespace std;

int main() {
  cout << "Enter the number: ";
  int x;
  cin >> x;

  int num = x;
  int reversed = 0;
  while(num != 0) {
    reversed = reversed*10 + num%10;
    num = num / 10;
  }

  string isPalindrome = x == reversed ? "True" : "False";
  cout << "Palindrome: " << isPalindrome << endl;

  return 0;
}
