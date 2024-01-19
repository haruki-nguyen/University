#include <stdio.h>

int calPoints()
{
  // declare variables
  float mathPoint, physicPoint, chemistryPoint, total, result;
  int mathMul, physicMul, chemistryMul;

  // enter values
  printf("Enter Math point and its multiplier: ");
  scanf("%f %d", &mathPoint, &mathMul);

  printf("Enter Physic point and its multiplier: ");
  scanf("%f %d", &physicPoint, &physicMul);

  printf("Enter Chemistry point and its multiplier: ");
  scanf("%f %d", &chemistryPoint, &chemistryMul);

  total = (mathPoint * mathMul) + (physicPoint * physicMul) + (chemistryPoint * chemistryMul);

  // calculate and print
  result = total / (mathMul + physicMul + chemistryMul);
  printf("The average point is: %.2f \n", result);

  return 0;
}
