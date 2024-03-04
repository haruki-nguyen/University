#include <stdio.h>

int main() {
  int n = 3, m;
  while (n > -1) {
    m = 5;
    while (m > -1) {
      printf("%d ", m);
      m--;
    }
    n--;
    printf("\n");
  }
  printf("Vong lap da duoc thuc hien");
  getchar();
}
