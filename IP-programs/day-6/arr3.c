#include <stdio.h>
#define SIZE 20

void ip(int *n, int a[]) {
  int i;
  do {
    printf("Nhap so phan tu (khong lon hon 20): ");
    scanf("%d", n);
  } while (*n < 1 || *n > SIZE);

  for (i = 0; i < *n; i++) {
    printf("Pt thu %d: ", i);
    scanf("%d", &a[i]);
  }
}

void op(int *n, int a[]) {
  int i;
  for (i = 0; i < *n; i++) {
    printf("%d\t", a[i]);
    printf("\n");
  }
}

int main() {
  int a[SIZE];
  int n;

  ip(&n, a);
  op(&n, a);
}
