#include <stdio.h>

int main() {
  int n;
  printf("Nhap so luong phan tu cua mang: ");
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++) {
    printf("Nhap a[%d]: ", i);
    scanf("%d", &a[i]);
  }

  int j;
  for (j = 0; j < n; j++) {
    printf("%d\n", a[j]);
  }
}
