#include <iostream>
using namespace std;

int N, A, B;

int sumOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  cin >> N >> A >> B;
  int res = 0;
  for (int i = 1; i <= N; i++) {
    int total = sumOfDigits(i);
    if (total >= A && total <= B) {
      res += i;
    }
  }
  cout << res << endl;
}
