#include <stdio.h>

int firstDegreeEq() {
  float a, b;
  printf("Nhap 2 so thuc a va b: ");
  scanf("%f %f", &a, &b);

  if (a == 0) {
    if (b == 0) {
      printf("Vo so nghiem");
    } else {
      printf("Vo nghiem");
    }
  } else {
    printf("Nghiem la: %.2f", -b / a);
  }
}
