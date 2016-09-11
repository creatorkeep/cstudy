#include <stdio.h>
int main(void)
{
    int d1, d2, d3;
    printf("Please enter a number from 100-999: ");
    // only take 1 digit
    scanf("%1d%1d%1d", &d1, &d2, &d3);
    printf("The reversed number is %1d%1d%1d", d3, d2, d1);
    return 0;
}
