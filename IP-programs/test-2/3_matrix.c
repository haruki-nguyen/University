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

int main() {
  int r, c;
  printf("Nhap so hang va cot: ");
  scanf("%d %d", &r, &c);

  int a[r][c];
  matrixInput(r, c, a);
  matrixOutput(r, c, a);

  return 0;
}
