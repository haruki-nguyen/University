#include <stdio.h>
#define KHONGTANGGIAM "Chu so khong tang dan hay giam dan"

int isAscending(int digits[], int numberOfDigits) {
  int i;
  for (i = 0; i < numberOfDigits - 1; i++) {
    printf("bla %d %d\n", digits[i], digits[i + 1]);
    if (digits[i] > digits[i + 1]) {
      return 0;
    }
  }
  return 1;
}

int isDecending(int digits[], int numberOfDigits) {
  int i;
  for (i = 0; i < numberOfDigits - 1; i++) {
    if (digits[i] < digits[i + 1]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n, numberOfDigits = 0;

  printf("Nhap n: ");
  scanf("%d", &n);

  // Check amount of digits in n
  int temp = n;
  do {
    numberOfDigits++;
    temp /= 10;
  } while (temp != 0);

  if (numberOfDigits > 1) {
    // Create an array with the number of digits
    int digits[numberOfDigits];

    // Split the digits & store it into an array
    int i;
    for (i = numberOfDigits - 1; i >= 0; i--) {
      int temp = n % 10;
      digits[i] = temp;
      n /= 10;
    }

    // Check for ascending or decending
    if (isAscending(digits, numberOfDigits)) {
      printf("Chu so tang dan");
    } else if (isDecending(digits, numberOfDigits)) {
      printf("Chu so giam dan");
    } else {
      printf(KHONGTANGGIAM);
    }
  } else {
    printf(KHONGTANGGIAM);
  }
  return 0;
}
