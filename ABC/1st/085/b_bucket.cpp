#include <iostream>
using namespace std;

int main() {
  int N;
  int d[110];
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> d[i];
  }
  sort(d, d + N);

  int bucket[100] = {0};
  for (int i = 0; i < N; i++) {
    bucket[d[i]]++;
  }

  int res = 0;
  for (int i = 0; i < 100; i++) {
    if (bucket[i]) {
      res++;
    }
  }

  cout << res << endl;
}
