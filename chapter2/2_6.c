#include <stdio.h>
int main(void)
{
    float x, sum;
    printf("Input a number");
    scanf("%f", &x);
    sum = ((((3 * x + 2) * x - 5) * x - 1) + 7) * x - 6;
    printf("The sum is %.2f", sum);
    return 0;
}
