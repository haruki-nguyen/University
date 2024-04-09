#include <stdio.h>
#define ROW 5
#define COL 6

int main() {
  int a[ROW][COL] = {
      {0, 1, 1, 1, 1, 1}, {1, 0, 0, 0, 0, 0}, {1, 0, 0, 0, 0, 0},
      {1, 0, 0, 0, 0, 0}, {0, 1, 1, 1, 1, 1},
  };

  int i, j;
  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) {
      if (a[i][j] == 1) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
