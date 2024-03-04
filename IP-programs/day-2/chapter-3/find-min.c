#include <stdio.h>

int main() {
  int a, b, c, d;

  // Enter values
  printf("Enter a, b, c, and d: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

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

  // Print the smallest value
  printf("Min is: %d\n", min);

  return 0;
}
