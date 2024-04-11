#include <math.h>
#include <stdio.h>

#define ROWS 3
#define COLS 3

int isPerfectSquare(int n) {
  int sqrt_n = sqrt(n);
  return sqrt_n * sqrt_n == n;
}

float avgPerfectSquare(int matrix[ROWS][COLS]) {
  int count = 0;
  int sum = 0;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      if (isPerfectSquare(matrix[i][j])) {
        sum += matrix[i][j];
        count++;
      }
    }
  }
  if (count == 0)
    return 0;
  return (float)sum / count;
}

int main() {
  int matrix[ROWS][COLS] = {{1, 4, 9}, {16, 25, 36}, {49, 64, 81}};
  float avg = avgPerfectSquare(matrix);
  printf("Trung binh cong cua cac so chinh phuong la: %.2f\n", avg);
  return 0;
}
