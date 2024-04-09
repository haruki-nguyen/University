#include <stdio.h>

void enterMatrix(int r, int c, int a[][c]) {
  int i, j;

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      printf("Nhap phan tu hang %d cot %d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }
}

int isPrime(int n) {
  if (n <= 1) {
    return 0;
  }

  int i;
  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int isMatrixPrime(int r, int c, int a[][c]) {
  int i, j;

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      if (!isPrime(a[i][j])) {
        return 0;
      }
    }
  }
  return 1;
}

int main() {
  int r, c;
  printf("Nhap so hang va cot: ");
  scanf("%d %d", &r, &c);

  int a[r][c];
  enterMatrix(r, c, a);

  if (isMatrixPrime(r, c, a)) {
    printf("Ma tran toan so nguyen to.\n");
  } else {
    printf("Ma tran khong toan so nguyen to.\n");
  }

  return 0;
}
