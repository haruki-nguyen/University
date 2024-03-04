#include <stdio.h>

// Kiem tra tam giac vuong
int isRightTriangle(int a, int b, int c) {
  if (a * a + b * b == c * c || a * a + c * c == b * b ||
      b * b + c * c == a * a)
    return 1;
  else
    return 0;
}

// Kiem tra tam giac can
int isIsoscelesTriangle(int a, int b, int c) {
  if (a == b || b == c || a == c)
    return 1;
  else
    return 0;
}

// Kiem tra tam giac deu
int isEquilateralTriangle(int a, int b, int c) {
  if (a == b && b == c)
    return 1;
  else
    return 0;
}

int main() {
  int a, b, c;

  // Nhap do dai
  printf("Nhap do dai ba canh cua tam giac: ");
  scanf("%d %d %d", &a, &b, &c);

  // Kiem tra xem cac do dai co tao thanh tam giac hop le khong
  if (a + b > c && a + c > b && b + c > a) {
    // Xac dinh loai tam giac
    if (isRightTriangle(a, b, c)) {
      printf("Do la tam giac vuong.\n");
    } else if (isIsoscelesTriangle(a, b, c)) {
      printf("Do la tam giac can.\n");
    } else if (isEquilateralTriangle(a, b, c)) {
      printf("Do la tam giac deu.\n");
    } else {
      printf("Do la tam giac thuong.\n");
    }
  } else {
    // Neu cac do dai khong tao thanh tam giac hop le
    printf("Khong phai la tam giac.\n");
  }

  return 0;
}
