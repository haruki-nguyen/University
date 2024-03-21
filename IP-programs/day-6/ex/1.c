#include <stdio.h>

int isFirstCharOdd(int n) {
  if (n >= 10) {
    n /= 10;
  }

  return n % 2 == 0 ? 0 : 1;
}

int isSquareNumber(int n) {
  if (n <= 0)
    return 0;
  int i;
  for (i = 1; i * i <= n; i++) {
    if (i * i == n)
      return 1;
  }
  return 0;
}

int sumChars(int a[], int *n, int (*check)(int n)) {
  int i, s = 0;
  for (i = 0; i < *n; i++) {
    if (check(a[i])) {
      s += a[i];
    }
  }

  return s;
}

int main() {

  int n;
  printf("Nhap n: ");
  scanf("%d", &n);

  int a[n], i;
  for (i = 0; i < n; i++) {
    printf("Nhap a[%d]: ", i);
    scanf("%d", &a[i]);
  }

  printf("Tong phan tu co chu so dau tien le la: %d\n",
         sumChars(a, &n, isFirstCharOdd));
  printf("Tong phan tu la so chinh phuong la: %d\n",
         sumChars(a, &n, isSquareNumber));
}
