#include <stdio.h>

int calculator()
{
  float a, b;

  printf("Enter a & b: ");

  scanf("%f %f", &a, &b);

  printf("Sum is: %.2f\n", a + b);
  printf("Subtract is: %.2f\n", a - b);
  printf("Multiply is: %.2f\n", a * b);

  // Check for division by zero before performing division
  if (b != 0) {
    printf("Division is: %.2f\n", a / b);
  } else {
    printf("Cannot divide by zero.\n");
  }

  return 0;
}
