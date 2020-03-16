#include <iostream>
using namespace std;

int main() {
  int N, K, Q;
  int A[100001], score[100001];
  cin >> N >> K >> Q;
  for (int i = 0; i < Q; i++) cin >> A[i];
  for (int i = 0; i < N; i++) score[i] = K - Q;

  for (int i = 0; i < Q; i++) {
    score[A[i]-1] += 1;
  }

  for (int i = 0; i < N; i++) {
    if (score[i] > 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
