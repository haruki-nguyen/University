#include <stdio.h>
#define MSG "Vi du \n"

int main() {
  int i = 0;
  while (i < 5) {
    printf("%s", MSG);
    i++;
  }
  getchar();
}
