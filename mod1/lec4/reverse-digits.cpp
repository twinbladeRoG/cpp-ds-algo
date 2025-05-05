#include<bits/stdc++.h>
using namespace std;

int main() {
  cout << "Enter the number: ";
  int x;
  cin >> x;

  int result = 0;

  while(x != 0) {
    result = result*10 + x%10;
    x = x/10;
  }

  cout << "Reserved number: " << result << endl;

  return 0;
}
