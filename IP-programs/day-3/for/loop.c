#include <stdio.h>

int main() {
  for (int i = 1, j = 2; i < 10; i++, j += 2) {
    printf("%d ", i + j);
  };
}
