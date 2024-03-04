#include <stdio.h>

int main() {
  int n, i = 0, s = 0;
  printf("Nhap N: ");
  scanf("%d", &n);

  // while (i < n) {
  //   s = s + i;
  //   i++;
  // }

  while (i++ < n) {
    s = s + i;
  }

  printf("Tong 0 --> N la: %d", s);

  return 0;
}
