#include <stdio.h>

int monthToQuarter(int m) {
  int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  int i, j;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
      if (m == arr[i][j]) {
        return i + 1;
      }
    }
  }

  return 0;
}

int main() {
  int m;
  printf("Nhap thang: ");
  scanf("%d", &m);

  if (m <= 0) {
    printf("Thang phai lon hon 0");
  } else {
    printf("Quy la: %d", monthToQuarter(m));
  }

  return 0;
}
