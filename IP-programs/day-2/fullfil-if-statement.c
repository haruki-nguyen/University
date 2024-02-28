#include <stdio.h>

int fullfilIfStatement() {
  int a;
  printf("Nhap a: ");
  scanf("%i", &a);

  if (a == 0) {
    printf("a bang 0");
  } else {
    printf("a khac 0");
  }

  return 0;
}
