#include <stdio.h>

int calLicensePlates()
{
  // declare variables
  int licensePlate, n5, n4, n3, n2, n1;

  // enter values
  printf("Enter your license plates: ");
  scanf("%d", &licensePlate);

  // calculate
  n5 = licensePlate % 10;
  licensePlate = licensePlate / 10;

  n4 = licensePlate % 10;
  licensePlate = licensePlate / 10;

  n3 = licensePlate % 10;
  licensePlate = licensePlate / 10;

  n2 = licensePlate % 10;
  licensePlate = licensePlate / 10;

  n1 = licensePlate % 10;

  // print result
  printf("The point is: %d \n", (n1 + n2 + n3 + n4 + n5) % 10);
  return 0;
}
