#include <stdio.h>

int main() {
  int a, b;
  printf("Nhap dai va rong: ");
  scanf("%d %d", &a, &b);

  if (a == 0 || b == 0) {
    printf("Chieu dai va (hoac) rong khong duoc bang 0");
    return 0;
  } else if (a < b) {
    printf("Chieu dai phai lon hon chieu rong.");
    return 0;
  } else {
    int i, j;
    for (i = 0; i < b; i++) {
      for (j = 0; j < a; j++) {
        printf("* ");
      }
      printf("\n");
    }
  }

  return 0;
}
