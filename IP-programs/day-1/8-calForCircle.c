#include <stdio.h>

int calForCircle()
{
  float radius, perimeter, acreage;
  const double PI = 3.141592653589793;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  perimeter = 2 * radius * PI;
  acreage = radius * radius * PI;

  printf("The perimeter is: %.2f \n", perimeter);
  printf("The acreage is: %.2f \n", acreage);

  return;
}
