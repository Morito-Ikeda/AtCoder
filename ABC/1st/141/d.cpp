#include <iostream>
#include <queue>
using namespace std;

int main() {
  int N, M;
  int a[100010];
  priority_queue<int> q;
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
    q.push(a[i]);
  }

  int x;
  for (int i = 0; i < M; i++) {
    x = q.top() / 2;
    q.pop();
    q.push(x);
  }

  long long res = 0;
  for (int i = 0; i < N; i++) {
    res += q.top();
    q.pop();
  }

  cout << res << endl;
}
