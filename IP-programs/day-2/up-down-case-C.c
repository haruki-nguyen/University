#include <stdio.h>

int upDownCase() {
  char c;
  printf("Enter the character: ");
  scanf("%c", &c);

  if (c >= 'a' && c <= 'z') {
    c = c - 32;
    printf("Ky tu da doi la: %c \n", c);
  } else if (c >= 'A' && c <= 'Z') {
    c = c + 32;
    printf("Ky tu da doi la: %c \n", c);
  } else {
    printf("Ky tu nam ngoai khoang tu A den z");
  }

  return 0;
}
