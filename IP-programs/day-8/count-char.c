#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUM_LETTERS 26

void countCharacters(char *str, int *c) {
  for (int i = 0; i < NUM_LETTERS; i++) {
    c[i] = 0;
  }

  for (int i = 0; str[i] != '\0'; i++) {
    char ch = toupper(str[i]);

    if (ch >= 'A' && ch <= 'Z') {
      // count character at `ch - 'A'` in `count` arr
      c[ch - 'A']++;
    }
  }
}

int main() {
  char str[1000];
  int count[NUM_LETTERS] = {0};

  printf("Nhap chuoi: ");
  fgets(str, sizeof(str), stdin);

  if (str[strlen(str) - 1] == '\n') {
    str[strlen(str) - 1] = '\0';
  }

  countCharacters(str, count);

  printf("So lan xuat hien moi ky tu tu A den Z la (chi in ra ky tu xuat hien "
         "nhieu hon 0 lan):\n");
  for (int i = 0; i < NUM_LETTERS; i++) {
    if (count[i] > 0) {
      printf("%c: %d\n", 'A' + i, count[i]);
    }
  }

  return 0;
}
