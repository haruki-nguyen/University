#include <stdio.h>

int main() {
  char s[50];
  // printf("Nhap mot chuoi: ");
  // scanf("%s", s);
  // printf("Chuoi nhan duoc la : %s", s);

  printf("Nhap mot chuoi: ");
  fgets(s, sizeof(s), stdin);
  printf("Chuoi nhan duoc la : %s", s);
}
