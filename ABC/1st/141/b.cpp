#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
  char s[101];
  scanf("%s", s);

  int n = strlen(s);
  for (int i = 0; i < n; i++) {
    if ((i+1)%2 == 1 && s[i] == 'L') {
      printf("No\n");
      return 0;
    } else if ((i+1)%2 == 0 && s[i] == 'R') {
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");

  return 0;
}
