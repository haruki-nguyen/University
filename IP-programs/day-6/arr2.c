#include <stdio.h>

int main() {

  int n;
  printf("Nhap n: ");
  scanf("%d", &n);

  int a[n], i;
  for (i = 0; i < n; i++) {
    printf("Nhap a[%d]: ", i);
    scanf("%d", &a[i]);
  }

  float sC = 0, sL = 0;
  int j, cC = 0, cL = 0;

  for (j = 0; j < n; j++) {
    if (a[j] % 2 == 0) {
      sC = sC + a[j];
      cC++;
      // printf("So chan %d\n", a[j]);
    } else {
      sL = sL + a[j];
      cL++;
      // printf("So le %d\n", a[j]);
    }
  }

  printf("Trung binh so chan la: %.1f va le la: %.1f", sC / cC, sL / cL);
}
