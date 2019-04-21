#include <iostream>
using namespace std;

int N;
int d[110];

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> d[i];

  int num[110] = {0};
  for (int i = 0; i < N; i++) {
    num[d[i]]++;
  }

  int res = 0;
  for (int i = 0; i <= 100; i++) {
    if (num[i]) {
      res++;
    }
  }

  cout << res << endl;
}
