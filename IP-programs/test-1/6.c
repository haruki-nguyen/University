#include <stdio.h>

int main() {
  int c, f;

  printf("Nhap tong so ga va cho: ");
  scanf("%d", &c);
  printf("Nhap tong so chan: ");
  scanf("%d", &f);

  // x va y la so ga va cho
  int x, y;

  // d la chan ga, e la chan cho
  // a, b la don vi cua ga va cho
  int a = 1, b = 1, d = 2, e = 4;

  y = (c * d - a * f) / (b * d - e * a);
  x = (c - b * y) / a;

  printf("So ga la: %d\nSo cho la: %d", x, y);
}
