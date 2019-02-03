#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

// 入力
int N, K;
long long h[100010];

// DPテーブル
long long dp[100010];

int main() {
  cin >> N >> K;
  for (int i = 0; i < N; i++) cin >> h[i];

  for (int i = 0; i < 100010; i++) dp[i] = INF;
  dp[0] = 0;

  for (int i = 0; i < N; i++) {
    for (int k = 1; k <= K; k++) {
      chmin(dp[i+k], dp[i] + abs(h[i] - h[i+k]));
    }
  }

  cout << dp[N-1] << endl;
}
