#include <stdio.h>
int main(void)
{
    float x, sum;
    printf("Please enter the value of x: ");
    scanf("%f", &x);
    sum = 3 * x * x * x * x * x + 2 * x * x * x* x - 5 * x * x * x - x * x + 7 * x - 6;
    printf("sum is %.2f", sum);
    return 0;
}
