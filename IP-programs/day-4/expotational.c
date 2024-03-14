#include <stdio.h>

int main() {
  int x, y;

  printf("Nhap x va y: ");
  scanf("%d %d", &x, &y);

  if (y == 0) {
    printf("Luy thua %d cua %d la 1", y, x);
    return 0;
  }

  double exp = 1;
  int i;
  for (i = 0; i < y; i++) {
    exp = exp * x;
  }

  printf("Luy thua la: %.2lf", exp);
}
