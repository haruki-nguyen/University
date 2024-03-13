#include <stdio.h>

int factorial(int n) {
  // does not check 0
  if (n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n;

  printf("Nhap n: ");
  scanf("%d", &n);

  if (n == 1) {
    printf("Giai thua cua 1 la 1");
  } else {
    int i;
    unsigned long long sum = 0;
    for (i = 1; i <= n; i++) {
      printf("Giai thua la: %d\n", factorial(i));
      sum += factorial(i);
    }
    printf("Tong giai thua tu 1 toi %d la: %llu", n, sum);
  }

  return 0;
}
