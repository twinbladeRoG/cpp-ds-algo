#include<bits/stdc++.h>
using namespace std;

int main() {
  // Queue = FIFO - First In First Out
  queue<int> q;

  q.push(1);
  q.push(2);
  q.emplace(4);

  cout << q.back() << " " << q.front() << endl;

  q.back() += 5;

  cout << q.back() << " " << q.front() << endl;

  q.pop();

  cout << q.back() << " " << q.front() << endl;

  return 0;
}
