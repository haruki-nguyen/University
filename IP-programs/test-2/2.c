#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int oddSum(int *a, int n) {
  int i;
  int sum = 0;
  for (i = 0; i < n; i++) {
    if (a[i] % 2 != 0) {
      sum += a[i];
    }
  }
  return sum;
}

bool isPerfectSquare(int n) {
  int sqrt_n = sqrt(n);
  return sqrt_n * sqrt_n == n;
}

int perfectSquareSum(int *a, int n) {
  int i;
  int sum = 0;
  for (i = 0; i < n; i++) {
    if (isPerfectSquare(a[i])) {
      sum += a[i];
    }
  }
  return sum;
}

int main() {
  int n;
  printf("Nhap so luong phan tu cua mang: ");
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++) {
    printf("Nhap a[%d]: ", i);
    scanf("%d", &a[i]);
  }

  printf("Tong cac phan tu la so le: %d\n", oddSum(a, n));
  printf("Tong cac phan tu la so chinh phuong: %d", perfectSquareSum(a, n));
}
