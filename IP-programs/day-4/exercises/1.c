#include <math.h>
#include <stdio.h>

char toLowerCase(char c);
float firstDegreeEq(float a, float b);
float quaratic(float a, float b, float c, float delta);
int findMin(int a, int b, int c, int d);
void swap(int *a, int *b);
int sorting(int a, int b, int c, int d);

int main() {
  // CAU A
  // char c;
  // printf("Nhap ky tu: ");
  // scanf("%c", &c);
  // printf("Ky tu da in thuong la: %c", toLowerCase(c));

  // CAU B
  // float a, b, result;
  // printf("Nhap 2 so thuc a va b: ");
  // scanf("%f %f", &a, &b);
  // printf("Nghiem la: %.2f", firstDegreeEq(a, b));

  // CAU C
  // float a, b, c, delta;
  // printf("nhap a, b va c: ");
  // scanf("%f %f %f", &a, &b, &c);
  // quaratic(a, b, c, delta);

  // CAU D
  // int a, b, c, d;
  // printf("Enter a, b, c, and d: ");
  // scanf("%d %d %d %d", &a, &b, &c, &d);
  // printf("Min is: %d\n", findMin(a, b, c, d));

  // CAU E
  // int a, b;
  // printf("Nhap a va b: ");
  // scanf("%d %d", &a, &b);
  // printf("Truoc doi: %d %d\n", a, b);
  // swap(&a, &b);
  // printf("Sau doi: %d %d ", a, b);

  // CAU F
  // int a, b, c, d;
  // printf("Enter four integers a, b, c, and d: ");
  // scanf("%d %d %d %d", &a, &b, &c, &d);
  // sorting(a, b, c, d);

  return 0;
}

char toLowerCase(char c) {
  if (c >= 'A' && c <= 'Z') {
    return c + 32;
  } else {
    return c;
  }
}

float firstDegreeEq(float a, float b) {
  if (a == 0) {
    if (b == 0) {
      printf("Vo so nghiem");
    } else {
      printf("Vo nghiem");
    }
    return 0;
  } else {
    return -b / a;
  }
}

float quaratic(float a, float b, float c, float delta) {
  if (a == 0) {
    printf("Day la phuong trinh bac 1!\n");
    return firstDegreeEq(b, c);
  } else {
    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
      printf("vo nghiem\n");
    } else {
      if (delta == 0) {
        printf("phuong trinh co nghiem kep: %.2f\n", -b / (2 * a));
      } else {
        printf("nghiem x1 la: %.2f\n", (-b + sqrt(delta)) / (2 * a));
        printf("nghiem x2 la: %.2f\n", (-b - sqrt(delta)) / (2 * a));
      }
    }
  }

  return 0;
}

int findMin(int a, int b, int c, int d) {
  // Assume that a is the smallest
  int min = a;

  // Compare b, c, and d with the current min
  if (b < min) {
    min = b;
  }
  if (c < min) {
    min = c;
  }
  if (d < min) {
    min = d;
  }

  return min;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sortingSwap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int sorting(int a, int b, int c, int d) {
  int i, j, arr[4] = {a, b, c, d};

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        sortingSwap(arr, j, j + 1);
      }
    }
  }

  // Print the integers in ascending order
  printf("Mang sau khi sap xep la: \n");
  for (i = 0; i <= 3; i++) {
    printf("So thu %d la: %d\n", i + 1, arr[i]);
  }

  return 0;
}
