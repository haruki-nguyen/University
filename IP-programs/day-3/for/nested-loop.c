#include <stdio.h>
#define MSG "Vi du \n"

int main() {
  int n, m, i, j;

  n = 2;
  m = 3;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%d \n", i + j);
    }
  }

  return 0;
}
