#include <stdio.h>

int isPrime(int n) {
  if (n <= 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  } else {
    int i;
    for (i = 2; i < n; i++) {
      if (n % i == 0) {
        return 0;
      }
    }
    return 1;
  }
}

int main() {
  int n;
  printf("Nhap so n: ");
  scanf("%d", &n);

  if (isPrime(n)) {
    printf("La so nguyen to");
  } else {
    printf("Khong phai la so nguyen to.");
  }

  return 0;
}
