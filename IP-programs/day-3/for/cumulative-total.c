#include <stdio.h>

int main() {
  int i, num, sum = 0;

  for (i = 0; i < 3; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &num);
    sum = sum + num;
    printf("Sum is: %d\n", sum);
  }

  return 0;
}
