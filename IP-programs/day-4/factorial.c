#include "stdio.h"

int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n;

  printf("Nhap n: ");
  scanf("%d", &n);

  long long int f = factorial(n);

  printf("Giai thua cua %d la: %lli", n, f);

  return 0;
}
