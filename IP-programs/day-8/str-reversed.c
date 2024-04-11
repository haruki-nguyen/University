#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
  int length = strlen(str);
  int i;
  char temp;

  for (i = 0; i < length / 2; i++) {
    temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 - i] = temp;
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  // Removing the trailing newline character
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';

  reverseString(str);

  printf("Reversed string: %s\n", str);

  return 0;
}
