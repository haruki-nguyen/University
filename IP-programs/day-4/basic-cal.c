#include <stdio.h>

// Function prototypes
float sum(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);

int main() {
  float a, b;
  printf("Nhap a va b: ");
  scanf("%f %f", &a, &b);

  float tong = sum(a, b);
  float hieu = subtract(a, b);
  float tich = multiply(a, b);
  float thuong = divide(a, b);

  printf("%.2f cong %.2f bang %.2f\n", a, b, tong);
  printf("%.2f tru %.2f bang %.2f\n", a, b, hieu);
  printf("%.2f nhan %.2f bang %.2f\n", a, b, tich);
  printf("%.2f chia %.2f bang %.2f\n", a, b, thuong);

  return 0;
}

// Function definitions
float sum(float x, float y) { return x + y; }

float subtract(float x, float y) { return x - y; }

float multiply(float x, float y) { return x * y; }

float divide(float x, float y) {
  if (y != 0)
    // return (float)x / y;
    return x / y;
  else {
    printf("Error: Cannot divide by zero\n");
    return 0;
  }
}
