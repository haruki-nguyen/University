#include <stdio.h>

// Swap
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a, b, c, d;

  // Enter values
  printf("Enter four integers a, b, c, and d: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  // Compare and swap a and b
  if (a > b) {
    swap(&a, &b);
  }
  // Compare and swap b and c
  if (b > c) {
    swap(&b, &c);
  }
  // Compare and swap c and d
  if (c > d) {
    swap(&c, &d);
  }
  // Compare and swap a and b again
  if (a > b) {
    swap(&a, &b);
  }
  // Compare and swap b and c again
  if (b > c) {
    swap(&b, &c);
  }
  // Compare and swap a and b for the final time
  if (a > b) {
    swap(&a, &b);
  }

  // Print the integers in ascending order
  printf("The integers in ascending order are: %d %d %d %d\n", a, b, c, d);

  return 0;
}
