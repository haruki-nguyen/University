#include <math.h>
#include <stdio.h>

int subFirstDegreeEq(float a, float b) {
  if (a == 0) {
    if (b == 0) {
      printf("Vo so nghiem");
    } else {
      printf("Vo nghiem");
    }
  } else {
    printf("Nghiem la: %.2f", -b / a);
  }
  return 0;
}

int quaratic() {
  float a, b, c, delta;
  printf("nhap a, b va c: ");
  scanf("%f %f %f", &a, &b, &c);

  if (a == 0) {
    printf("Day la phuong trinh bac 1!\n");
    subFirstDegreeEq(b, c);
  } else {
    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
      printf("vo nghiem\n");
    } else {
      if (delta == 0) {
        printf("phuong trinh co nghiem kep: %.2f\n", -b / (2 * a));
      } else {
        printf("nghiem x1 la: %.2f\n", (-b + sqrt(delta)) / (2 * a));
        printf("nghiem x2 la: %.2f\n", (-b - sqrt(delta)) / (2 * a));
      }
    }
  }

  return 0;
}
