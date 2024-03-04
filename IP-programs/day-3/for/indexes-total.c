#include <stdio.h>

int main() {
  int n, i, s = 0;
  printf("Nhap N: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    if (i % 2 != 0) {
      s = s + i;
    }
  }

  printf("Tong 0 --> N la: %d", s);

  return 0;
}
