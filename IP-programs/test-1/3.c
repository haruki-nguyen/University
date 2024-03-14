#include <stdio.h>

float chuVi(float a, float b) { return 2 * (a + b); }
float dienTich(float a, float b) { return a * b; }

int main() {
  float a, b;
  printf("Nhap dai va rong: ");
  scanf("%f %f", &a, &b);

  if (a < b) {
    printf("Chieu dai phai lon hon chieu rong.");
  } else {
    printf("Chu vi hinh chu nhat la: %.2f\n", chuVi(a, b));
    printf("Dien tich hinh chu nhat la: %.2f", dienTich(a, b));
  }

  return 0;
}
