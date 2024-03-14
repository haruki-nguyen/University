#include "stdio.h"

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int sorting(int a, int b, int c, int d) {
  int i, j, arr[4] = {a, b, c, d};

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr, j, j + 1);
      }
    }
  }

  // Print the integers in ascending order
  printf("Mang sau khi sap xep la: \n");
  for (i = 0; i <= 3; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

int main() {
  int a, b, c, d;
  printf("Enter four integers a, b, c, and d: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  sorting(a, b, c, d);

  return 0;
}
