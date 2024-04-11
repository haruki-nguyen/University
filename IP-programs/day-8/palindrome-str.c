#include <stdio.h>
#include <string.h>

int isPalindromeStr(char *s) {
  int result = 1, i, length = strlen(s);

  for (i = 0; i <= length / 2; i++) {
    if (s[i] != s[length - 1 - i]) {
      result = 0;
      break;
    }
  }
  return result;
}

int main() {
  int n;
  printf("Nhap do dai chuoi: ");
  scanf("%d", &n);

  char s[n];
  printf("Nhap chuoi: ");
  scanf("%s", s);

  if (isPalindromeStr(s)) {
    printf("La chuoi palindrome");
  } else {
    printf("Khong la chuoi palindrome");
  }
}
