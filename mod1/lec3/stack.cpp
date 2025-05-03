#include<bits/stdc++.h>
using namespace std;

int main() {
  // Stack - LIFO = Last In First Out
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.emplace(5);

  cout << "Top element: \t" << st.top() << endl;

  st.pop();

  cout << "Top element: \t" << st.top() << endl;

  return 0;
}
