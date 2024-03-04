#include <stdio.h>
#define PASSWORD 123

int main() {
  int pwd;

  do {
    printf("Nhap password: ");
    scanf("%d", &pwd);
    if (pwd != PASSWORD) {
      printf("Ban da nhap sai PASSWORD \n");
    }
  } while (pwd != PASSWORD);

  printf("Ban da nhap dung password");

  return 0;
}
