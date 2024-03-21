#include <stdbool.h>
#include <stdio.h>

int checkPositive(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      return true;
    }
  }
  return false;
}

bool checkSymmetric(int arr[], int n) {
  for (int i = 0, j = n - 1; i < j; i++, j--) {
    if (arr[i] != arr[j]) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  printf("Nhap kich thuoc mang: ");
  scanf("%d", &n);

  int arr[n];
  printf("Nhap cac phan tu cua mang:\n");
  for (int i = 0; i < n; i++) {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  if (checkPositive(arr, n)) {
    printf("Mang chua so duong.\n");
  } else {
    printf("Mang khong chua so duong.\n");
  }

  if (checkSymmetric(arr, n)) {
    printf("Mang la mang doi xung.\n");
  } else {
    printf("Mang khong la mang doi xung.\n");
  }

  return 0;
}
