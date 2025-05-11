#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int i) {
  if (i >= str.size() / 2) return true;
  if (str[i] != str[str.size() - i - 1]) return false;
  return isPalindrome(str, i + 1);
}

int main() {
  string str;
  cout << "Enter a string: " << endl;
  getline(cin, str);
  cout << "Entered string: " << str << endl;
  bool check = isPalindrome(str, 0);

  cout << "Is Palindrome: " << (check ? "True":"False") << endl;
  return 0;
}
