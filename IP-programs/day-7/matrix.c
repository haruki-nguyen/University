#include <stdio.h>
int main() {
  int m[2][3] = {{1, 2, 3}, {4, 5, 6}};

  printf("Gia tri mang o hang 1 cot 2 la: %d\n", m[0][1]);
  printf("Dia chi cua a[1][2] la: %p", &m[1][2]);

  return 0;
}
