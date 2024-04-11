#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int countWords(char *str) {
  int c = 0;
  bool inWord = false;

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') {
      inWord = false;
    } else if (!inWord) {
      inWord = true;
      c++;
    }
  }
  return c;
}

int main() {
  char str[1000];

  printf("Nhập một chuỗi: ");
  fgets(str, sizeof(str), stdin);

  if (str[strlen(str) - 1] == '\n') {
    str[strlen(str) - 1] = '\0';
  }

  int numWords = countWords(str);
  printf("Số từ trong chuỗi là: %d\n", numWords);

  return 0;
}
