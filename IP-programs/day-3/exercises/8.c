#include <stdio.h>

unsigned long Fibonacci(int n) {
  if (n <= 2) {
    return 1;
  } else {
    int i, firstN = 1, secondN = 1;
    unsigned long nextN;

    for (i = 3; i <= n; i++) {
      // printf("Print %d time\n", i + 1);
      nextN = firstN + secondN;
      firstN = secondN;
      secondN = nextN;
    }
    return nextN;
  }
}

int main() {
  int n;

  printf("Enter n: ");
  scanf("%d", &n);

  printf("So Fibonacci thu %d la: %lu", n, Fibonacci(n));
}
