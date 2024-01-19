#include<stdio.h>

int lackSwitch()
{
  int a;

  printf("Enter a: ");
  scanf("%d", &a);

  switch (a) {
    case 1:
      printf("Mot\n");
      break;
    case 2:
      printf("Hai\n");
      break;
    case 3:
      printf("Ba\n");
      break;
  }
}

int fullfilSwitch()
{
  int a;

  printf("Nhap a: ");
  scanf("%d", &a);

  switch (a) {
    case 1:
      printf("Mot\n");
      break;
    case 2:
      printf("Hai\n");
      break;
    case 3:
      printf("Ba\n");
      break;
    default:
      printf("Khong doc duoc: %d", a);
  }
}

int combinedSwitch()
{
    int a, b;

  printf("Nhap a: ");
  scanf("%d", &a);

  switch (a) {
    case 1:
      printf("Mot\n");
      break;
    case 2:
      printf("Nhap b: ");
      scanf("%d", &b);

      switch (b) {
        case 1:
          printf("A\n");
          break;
        case 2:
          printf("B\n");
          break;
        default:
          printf("Khong the doc\n");
      }
      break;
    case 3:
      printf("Ba\n");
      break;
    default:
      printf("Khong the doc\n");
  }
}
