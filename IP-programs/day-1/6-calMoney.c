#include <stdio.h>

int calMoney()
{
  char name[50];
  int amount, price, money;

  printf("Enter product's name, amount, and price: ");
  scanf("%s %d %d", name, &amount, &price);

  money = amount * price;

  printf("The money and the tax is: %d %.2f \n", money, money * 0.1);

  return 0;
}
