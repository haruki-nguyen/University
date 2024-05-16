#include <math.h>
#include <stdbool.h>
#include <stdio.h>

void matrixInput(int r, int c, int a[][c]) {
  int i, j;

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      printf("Nhap phan tu hang %d cot %d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }
}

void matrixOutput(int r, int c, int a[][c]) {
  int i, j;

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}

bool isPerfectSquare(int n) {
  int sqrt_n = sqrt(n);
  return sqrt_n * sqrt_n == n;
}

int perfectSquareCounter(int r, int c, int a[][c]) {
  int i, j, counter = 0;

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      if (isPerfectSquare(a[i][j])) {
        counter++;
      }
    }
  }

  return counter;
}

int main() {
  int r, c;
  printf("Nhap so hang va cot: ");
  scanf("%d %d", &r, &c);

  int a[r][c];
  matrixInput(r, c, a);
  matrixOutput(r, c, a);

  printf("So phan tu chinh phuong cua ma tran la: %d",
         perfectSquareCounter(r, c, a));

  return 0;
}
