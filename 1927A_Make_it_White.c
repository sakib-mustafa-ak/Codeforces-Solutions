#include <stdio.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    char s[1000];
    scanf("%d %s", &n, &s);
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'B') {
        first = i;
        break;
      }
    }
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'B') {
        last = i;
        break;
      }
    }
    if (first == -1 || last == -1) {
      printf("%d\n", n);
    } else {
      printf("%d\n", last - first + 1);
    }
  }
  return 0;
}