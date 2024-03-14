#include <stdio.h>

int main() {
  unsigned long currPopulation, futurePopulation = 0;
  unsigned int yearToCal;
  float percent;

  printf("Nhap so dan hien tai, ti le tang dan so va so nam can tinh: ");
  scanf("%lu %f %u", &currPopulation, &percent, &yearToCal);

  percent /= 100;

  int i;
  for (i = 0; i < yearToCal; i++) {
    if (i == 0) {
      futurePopulation = currPopulation * (1 + percent);
    } else {
      futurePopulation *= 1 + percent;
    }
  }

  printf("Dan so sau %u la: %lu", yearToCal, futurePopulation);
}
