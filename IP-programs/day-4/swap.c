#include <stdio.h>

void swap(int *a, int *b);

int main() {
  int a, b;
  printf("Nhap a va b: ");
  scanf("%d %d", &a, &b);

  printf("Truoc doi: %d %d ", a, b);
  swap(&a, &b);
  printf("Sau doi: %d %d ", a, b);
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
