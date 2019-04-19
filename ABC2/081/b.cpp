#include <iostream>
using namespace std;

int N;
int A[210];

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];
  int count = 0;
  while (true) {
    bool odd = false;
    for (int i = 0; i < N; i++) {
      if (A[i] % 2 != 0) odd = true;
    }

    if (odd) break;

    for (int i = 0; i < N; i++) A[i] /= 2;
    count++;
  }

  cout << count << endl;
}
