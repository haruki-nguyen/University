#include <stdio.h>

int calBirthY()
{
  int birthY, currY;

  printf("Enter birthyear and curr year: ");
  scanf("%d %d", &birthY, &currY);

  printf("Age is: %d \n", currY - birthY);

  return 0;
}
