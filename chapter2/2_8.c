#include <stdio.h>
int main(void)
{
    float rate, init, monthly, first, second, third;

    printf("Please enter the inital amount: ");
    scanf("%f", &init);
    printf("Please enter the rate: ");
    scanf("%f", &rate);
     printf("Please enter the monthly payment: ");
    scanf("%f", &monthly);
    first = (init - monthly) * (1.0f + rate / 1200.0f);
    second = (first - monthly) * (1.0f + rate / 1200.0f);
    third = (second - monthly)* (1.0f + rate / 1200.0f);
    printf("First year after: %.2f\n", first);
    printf("Second year after: %.2f\n", second);
    printf("Third year after: %.2f\n", third);

    return 0;
}
