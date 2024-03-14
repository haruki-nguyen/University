#include "stdio.h"

float firstDegreeEq(float a, float b) {
  if (a == 0) {
    if (b == 0) {
      printf("Vo so nghiem");
    } else {
      printf("Vo nghiem");
    }
    return 0;
  } else {
    return -b / a;
  }
}

int main() {
  float a, b;
  printf("Nhap 2 so thuc a va b: ");
  scanf("%f %f", &a, &b);
  printf("Nghiem la: %.2f", firstDegreeEq(a, b));

  return 0;
}
