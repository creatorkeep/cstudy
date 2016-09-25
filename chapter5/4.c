#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    bool valid = true;
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check;
    int first_sum, second_sum, total;
    printf("Input the first digit: ");
    scanf("%1d", &d);
    printf("Enter the first group of 5 digits: ");
    scanf("%1d %1d %1d %1d %1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter the second group of 5 digits: ");
    scanf("%1d %1d %1d %1d %1d", &j1, &j2, &j3, &j4, &j5);
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    printf("Check digit: %d\n", 9 - ((total - 1) % 10)==check? valid:!valid);
    return 0;
}

