#include <stdio.h>
#define CHUC "Chuc ban choi vui ve"

int main() {
  unsigned char choi;
  int currY, birthY;

  do {
    printf("Enter current year: ");
    scanf("%d", &currY);

    // Clear input buffer
    while (getchar() != '\n')
      ;

    printf("Enter birth year: ");
    scanf("%d", &birthY);

    // Clear input buffer
    while (getchar() != '\n')
      ;

    printf("Your age is: %d, %s\n", currY - birthY, CHUC);

    printf("Ban co muon tiep tuc? (Y/N)\n");
    choi = getchar();
    while (getchar() != '\n')
      ; // Clear input buffer after reading char input for choi

  } while (choi == 'y' || choi == 'Y');

  return 0;
}
