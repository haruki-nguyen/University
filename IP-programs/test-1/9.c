#include <stdio.h>

int main() {
  int N, cDuong = 0, cKhong = 0;

  printf("Nhap so luong so nguyen: ");
  scanf("%d", &N);

  int i, arr[N];
  for (i = 0; i < N; i++) {
    printf("Nhap so nguyen thu %d la: ", i + 1);
    scanf("%d", &arr[i]);
  }

  int j;
  for (j = 0; j < N; j++) {
    // printf("Phan tu: %d\n", arr[j]);
    if (arr[j] == 0) {
      cKhong++;
    } else {
      cDuong++;
    }
  }

  printf("So luong so duong la: %d\n", cDuong);
  printf("So luong so khong la: %d\n", cKhong);
}
