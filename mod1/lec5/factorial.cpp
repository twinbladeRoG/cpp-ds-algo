#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
  if (n <= 1) return 1;
  return n * factorial(n-1); 
} 

int main() {
  int x;
  cout << "Enter the number: ";
  cin >> x;

  int result = factorial(x);
  cout << "Factorial of " << x << " is " << result << endl;
  return 0;
}
