#include <stdio.h>

#define ROWS 3
#define COLS 3

int sumRow(int matrix[ROWS][COLS], int k) {
  int sum = 0;
  for (int j = 0; j < COLS; j++) {
    sum += matrix[k][j];
  }
  return sum;
}

int main() {
  int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int row = 1;
  int total = sumRow(matrix, row);
  printf("Tong cua cac phan tu tren dong %d la: %d\n", row, total);
  return 0;
}
