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

int find(int r, int c, int a[][c], int n) {
  int i, j;

  for (i = 0; i < r; i++)
    for (j = 0; j < r; j++)
      if (a[i][j] == n)
        return 1;
  return 0;
}

int main() {
  int r, c;
  printf("Nhap so hang va cot: ");
  scanf("%d %d", &r, &c);

  int a[r][c];
  enterMatrix(r, c, a);

  int n;
  printf("Nhap n: ");
  scanf("%d", &n);

  if (find(r, c, a, n)) {
    printf("Phan tu co trong mang");
  } else {
    printf("Phan tu khong co trong mang");
  }
}
