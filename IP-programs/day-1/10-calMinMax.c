#include <stdio.h>

int calMinMax()
{
    int a, b, min, max;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    printf("Max is: %d\n",max);
    printf("Min is: %d\n",min);

    return 0;
}
